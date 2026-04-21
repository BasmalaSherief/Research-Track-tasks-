#include "rclcpp/rclcpp.hpp"
#include "rclcpp_components/register_node_macro.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "action_interfaces/action/movetogoal.hpp"

using namespace std::placeholders;

namespace act_cont_ex
{
    class RobotControllerActionClient : public rclcpp::Node
    {
        public:
            explicit RobotControllerActionClient(const rclcpp::NodeOptions & options): Node("robot_controller_action_client", rclcpp::NodeOptions(options).use_intra_process_comms(true))
            {
                action_client_ = rclcpp_action::create_client<action_interfaces::action::Movetogoal>(this, "move_to_goal");
                timer_ = this->create_wall_timer(
                    std::chrono::seconds(2),
                    std::bind(&RobotControllerActionClient::send_goal, this)
                );
            }
        private:
            rclcpp_action::Client<action_interfaces::action::Movetogoal>::SharedPtr action_client_;
            rclcpp::TimerBase::SharedPtr timer_;
            bool goal_sent_ = false;

            void send_goal()
            {
                // Only send goal once
                if (goal_sent_)
                {
                    return;
                }
                
                if (!action_client_->wait_for_action_server(std::chrono::seconds(5)))
                {
                    RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
                    return;
                }

                auto goal_msg = action_interfaces::action::Movetogoal::Goal();
                goal_msg.goal_coord_x = 10.0; 
                goal_msg.goal_coord_y = 0.0; 

                RCLCPP_INFO(this->get_logger(), "Sending goal: (%.2f, %.2f)", goal_msg.goal_coord_x, goal_msg.goal_coord_y);

                auto send_goal_options = rclcpp_action::Client<action_interfaces::action::Movetogoal>::SendGoalOptions();
                send_goal_options.result_callback = std::bind(&RobotControllerActionClient::result_callback, this, _1);
                send_goal_options.feedback_callback = std::bind(&RobotControllerActionClient::feedback_callback, this, _1, _2);

                action_client_->async_send_goal(goal_msg, send_goal_options);
                goal_sent_ = true;
            }

            void feedback_callback(rclcpp_action::ClientGoalHandle<action_interfaces::action::Movetogoal>::SharedPtr,
                                   const std::shared_ptr<const action_interfaces::action::Movetogoal::Feedback> feedback)
            {
                RCLCPP_INFO(this->get_logger(), "Received feedback: remaining distance (%.2f, %.2f)", feedback->remaining_dist_x, feedback->remaining_dist_y);
            }

            void result_callback(const rclcpp_action::ClientGoalHandle  <action_interfaces::action::Movetogoal>::WrappedResult & result)
            {
                switch (result.code) 
                {
                    case rclcpp_action::ResultCode::SUCCEEDED:
                        RCLCPP_INFO(this->get_logger(), "Goal succeeded!");
                        break;
                    case rclcpp_action::ResultCode::ABORTED:
                        RCLCPP_ERROR(this->get_logger(), "Goal was aborted");
                        break;
                    case rclcpp_action::ResultCode::CANCELED:
                        RCLCPP_ERROR(this->get_logger(), "Goal was canceled");
                        break;
                    default:
                        RCLCPP_ERROR(this->get_logger(), "Unknown result code");
                }

            }
        };
    }

RCLCPP_COMPONENTS_REGISTER_NODE(act_cont_ex::RobotControllerActionClient);  