#include "rclcpp/rclcpp.hpp"
#include "rclcpp_components/register_node_macro.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "action_interfaces/action/movetogoal.hpp"
#include <cmath>
#include <mutex>

namespace act_cont_ex
{
    class RobotControllerActionServer : public rclcpp::Node
    {
        public:
            explicit RobotControllerActionServer(const rclcpp::NodeOptions & options): Node("robot_controller_action_server", rclcpp::NodeOptions(options).use_intra_process_comms(true))
            {
                using namespace std::placeholders;
                action_server_ = rclcpp_action::create_server<action_interfaces::action::Movetogoal>(
                    this,
                    "move_to_goal",
                    std::bind(&RobotControllerActionServer::handle_goal, this, _1, _2),
                    std::bind(&RobotControllerActionServer::handle_cancel, this, _1),
                    std::bind(&RobotControllerActionServer::handle_accepted, this, _1)
                );
                velocity_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
                odom_subscriber_ = this->create_subscription<nav_msgs::msg::Odometry>(
                    "odom",
                    10,
                    std::bind(&RobotControllerActionServer::odom_callback, this, _1)
                );
                timer_ = this->create_wall_timer(
                    std::chrono::milliseconds(100),
                    std::bind(&RobotControllerActionServer::timer_callback, this)
                );  
            }
        private:
            rclcpp_action::Server<action_interfaces::action::Movetogoal>::SharedPtr action_server_; 
            rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_publisher_;
            rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_subscriber_;
            rclcpp::TimerBase::SharedPtr timer_;
            geometry_msgs::msg::Pose current_pose_;
            std::shared_ptr<rclcpp_action::ServerGoalHandle<action_interfaces::action::Movetogoal>> current_goal_handle_;
            bool has_active_goal_ = false;
            bool goal_reached_ = false;
            float goal_x_ = 0.0;
            float goal_y_ = 0.0;
            const float GOAL_TOLERANCE = 0.2f;
            const float LINEAR_VELOCITY = 0.5f;
            const float ANGULAR_VELOCITY = 0.5f;
            std::mutex goal_mutex_;

            rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid, std::shared_ptr<const action_interfaces::action::Movetogoal::Goal> goal)
            {
                RCLCPP_INFO(this->get_logger(), "Received goal request with target (%.2f, %.2f)", goal->goal_coord_x, goal->goal_coord_y);
                return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
            }

            rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<rclcpp_action::ServerGoalHandle<action_interfaces::action::Movetogoal>> goal_handle)
            {
                RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
                return rclcpp_action::CancelResponse::ACCEPT;
            }

            void handle_accepted(const std::shared_ptr<rclcpp_action::ServerGoalHandle<action_interfaces::action::Movetogoal>> goal_handle)
            {
                const auto goal = goal_handle->get_goal();
                {
                    std::lock_guard<std::mutex> lock(goal_mutex_);
                    goal_x_ = goal->goal_coord_x;
                    goal_y_ = goal->goal_coord_y;
                    has_active_goal_ = true;
                    goal_reached_ = false;
                }
                current_goal_handle_ = goal_handle;
                std::thread{std::bind(&RobotControllerActionServer::execute, this, std::placeholders::_1), goal_handle}.detach();
            }

            void execute(const std::shared_ptr<rclcpp_action::ServerGoalHandle<action_interfaces::action::Movetogoal>> goal_handle)
            {
                RCLCPP_INFO(this->get_logger(), "Executing goal: move to (%.2f, %.2f)", goal_x_, goal_y_);
                rclcpp::Rate loop_rate(10);  // 10 Hz
                const auto goal = goal_handle->get_goal();
                auto feedback = std::make_shared<action_interfaces::action::Movetogoal::Feedback>();
                auto result = std::make_shared<action_interfaces::action::Movetogoal::Result>();
                
                while (rclcpp::ok() && has_active_goal_)
                {
                    if (goal_handle->is_canceling()) {
                        result->reached = false;
                        goal_handle->canceled(result);
                        {
                            std::lock_guard<std::mutex> lock(goal_mutex_);
                            has_active_goal_ = false;
                        }
                        RCLCPP_INFO(this->get_logger(), "Goal canceled");
                        return;
                    }
                    
                    float dist_x = goal_x_ - current_pose_.position.x;
                    float dist_y = goal_y_ - current_pose_.position.y;
                    float distance = std::sqrt(dist_x * dist_x + dist_y * dist_y);
                    
                    feedback->remaining_dist_x = dist_x;
                    feedback->remaining_dist_y = dist_y;
                    goal_handle->publish_feedback(feedback);
                    
                    RCLCPP_INFO(this->get_logger(), "Feedback: remaining distance (%.2f, %.2f), total: %.2f", 
                               feedback->remaining_dist_x, feedback->remaining_dist_y, distance);
                    
                    // Check if goal is reached
                    if (distance < GOAL_TOLERANCE)
                    {
                        result->reached = true;
                        goal_handle->succeed(result);
                        {
                            std::lock_guard<std::mutex> lock(goal_mutex_);
                            has_active_goal_ = false;
                            goal_reached_ = true;
                        }
                        // Immediately publish stop command
                        geometry_msgs::msg::Twist stop_cmd;
                        stop_cmd.linear.x = 0.0;
                        stop_cmd.linear.y = 0.0;
                        velocity_publisher_->publish(stop_cmd);
                        RCLCPP_INFO(this->get_logger(), "Goal reached!");
                        return;
                    }
                    
                    loop_rate.sleep();
                }
            }
            void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg)
            {
                current_pose_ = msg->pose.pose;
            }
            void timer_callback()
            {
                geometry_msgs::msg::Twist cmd_vel;
                
                {
                    std::lock_guard<std::mutex> lock(goal_mutex_);
                    
                    if (has_active_goal_)
                    {
                        // Calculate direction to goal
                        float dist_x = goal_x_ - current_pose_.position.x;
                        float dist_y = goal_y_ - current_pose_.position.y;
                        float distance = std::sqrt(dist_x * dist_x + dist_y * dist_y);
                        
                        // If goal is not reached, move towards it
                        if (distance >= GOAL_TOLERANCE)
                        {
                            // Normalize direction and apply velocity
                            cmd_vel.linear.x = (dist_x / distance) * LINEAR_VELOCITY;
                            cmd_vel.linear.y = (dist_y / distance) * LINEAR_VELOCITY;
                        }
                        else
                        {
                            // Goal reached, stop robot
                            cmd_vel.linear.x = 0.0;
                            cmd_vel.linear.y = 0.0;
                        }
                    }
                    else if (goal_reached_)
                    {
                        // Goal was reached, keep stopped
                        cmd_vel.linear.x = 0.0;
                        cmd_vel.linear.y = 0.0;
                    }
                    else
                    {
                        // No active goal and not reached, move continuously in x direction
                        cmd_vel.linear.x = LINEAR_VELOCITY;
                        cmd_vel.linear.y = 0.0;
                    }
                }
                
                velocity_publisher_->publish(cmd_vel);
            }
    };
}
RCLCPP_COMPONENTS_REGISTER_NODE(act_cont_ex::RobotControllerActionServer);