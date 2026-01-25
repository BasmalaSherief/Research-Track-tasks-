#include <chrono>
#include <memory>
#include <string>
#include <vector>
#include <deque>
#include <numeric>
#include <cmath>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "assignment2_custom_msgs_srvs/msg/obstacle.hpp"
#include "assignment2_custom_msgs_srvs/srv/change_threshold.hpp"
#include "assignment2_custom_msgs_srvs/srv/average_velocities.hpp"

using namespace std::chrono_literals;

class RobotControlNode : public rclcpp::Node
{
public:
    RobotControlNode() : Node("robot_control_node")
    {
        // Publisher for velocity commands
        cmd_vel_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);

        // Publisher for custom obstacle message
        obstacle_publisher_ = this->create_publisher<assignment2_custom_msgs_srvs::msg::Obstacle>(
            "custom_obstacle_topic", 10);

        // User input subscriber (desired velocity)
        des_vel_subscriber_ = this->create_subscription<geometry_msgs::msg::Twist>(
            "des_vel", 10,
            std::bind(&RobotControlNode::desVelCallback, this, std::placeholders::_1));

        // Laser scanner subscriber (mapped to /scan)
        laser_scan_subscriber_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
            "scan", 10,
            std::bind(&RobotControlNode::laserScanCallback, this, std::placeholders::_1));

        // Odometry subscriber (mapped to /odom)
        odom_subscriber_ = this->create_subscription<nav_msgs::msg::Odometry>(
            "odom", 10,
            std::bind(&RobotControlNode::odomCallback, this, std::placeholders::_1));

        // Service: Change Threshold
        change_threshold_service_ = this->create_service<assignment2_custom_msgs_srvs::srv::ChangeThreshold>(
            "change_threshold",
            std::bind(&RobotControlNode::changeThresholdCallback, this, std::placeholders::_1, std::placeholders::_2));

        // Service: Get Average Velocities
        average_velocities_service_ = this->create_service<assignment2_custom_msgs_srvs::srv::AverageVelocities>(
            "average_velocities",
            std::bind(&RobotControlNode::averageVelocitiesCallback, this, std::placeholders::_1, std::placeholders::_2));

        // Timer for control loop
        timer_ = this->create_wall_timer(
            100ms, std::bind(&RobotControlNode::timerCallback, this));

        RCLCPP_INFO(this->get_logger(), "Robot Control Node Started. Threshold: %.2f", threshold_distance_);
    }

private:
    // Parameters
    double threshold_distance_ = 0.5;
    
    // State
    geometry_msgs::msg::Twist current_des_vel_;
    geometry_msgs::msg::Pose current_pose_;
    geometry_msgs::msg::Pose last_safe_pose_;
    bool pose_received_ = false;
    bool obstacle_detected_ = false;
    double closest_obstacle_dist_ = 0.0;
    std::string closest_obstacle_dir_ = "none";

    // Velocity history (last 5 inputs)
    std::deque<geometry_msgs::msg::Twist> velocity_history_;

    // Interfaces
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_publisher_;
    rclcpp::Publisher<assignment2_custom_msgs_srvs::msg::Obstacle>::SharedPtr obstacle_publisher_;
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr des_vel_subscriber_;
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr laser_scan_subscriber_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_subscriber_;
    rclcpp::Service<assignment2_custom_msgs_srvs::srv::ChangeThreshold>::SharedPtr change_threshold_service_;
    rclcpp::Service<assignment2_custom_msgs_srvs::srv::AverageVelocities>::SharedPtr average_velocities_service_;
    rclcpp::TimerBase::SharedPtr timer_;

    // --- Callbacks ---

    void desVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg)
    {
        current_des_vel_ = *msg;
        
        // Update history
        if (velocity_history_.size() >= 5) 
        {
            velocity_history_.pop_front();
        }
        velocity_history_.push_back(*msg);
    }

    void odomCallback(const nav_msgs::msg::Odometry::SharedPtr msg)
    {
        current_pose_ = msg->pose.pose;
        pose_received_ = true;
        // If we are safe, update the last known safe pose
        if (!obstacle_detected_) 
        {
            last_safe_pose_ = current_pose_;
        }
    }

    void laserScanCallback(const sensor_msgs::msg::LaserScan::SharedPtr msg)
    {
        // Find closest point
        if (msg->ranges.empty()) return;

        float min_dist = msg->range_max;
        size_t min_index = 0;

        for (size_t i = 0; i < msg->ranges.size(); ++i) 
        {
            if (msg->ranges[i] < min_dist) 
            {
                min_dist = msg->ranges[i];
                min_index = i;
            }
        }
        
        closest_obstacle_dist_ = min_dist;

        // Determine direction
        float angle = msg->angle_min + min_index * msg->angle_increment;
        // Normalize angle to -PI to PI if needed, but standard scans usually are.
        // Simple classification:
        if (angle < -M_PI/4) closest_obstacle_dir_ = "right"; 
        else if (angle > M_PI/4) closest_obstacle_dir_ = "left";
        else closest_obstacle_dir_ = "front";

        // Check threshold
        if (min_dist < threshold_distance_) 
        {
            if (!obstacle_detected_) 
            {
                RCLCPP_WARN(this->get_logger(), "Obstacle detected! Too close: %.2f < %.2f", min_dist, threshold_distance_);
            }
            obstacle_detected_ = true;
        } 
        else 
        {
            obstacle_detected_ = false;
        }
    }

    void changeThresholdCallback(
        const std::shared_ptr<assignment2_custom_msgs_srvs::srv::ChangeThreshold::Request> request,
        std::shared_ptr<assignment2_custom_msgs_srvs::srv::ChangeThreshold::Response> response)
    {
        threshold_distance_ = request->new_threshold;
        RCLCPP_INFO(this->get_logger(), "Service called: Threshold updated to %.2f", threshold_distance_);
        response->success = true;
    }

    void averageVelocitiesCallback(
        const std::shared_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities::Request> /*request*/,
        std::shared_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities::Response> response)
    {
        // Calculate average from internal history
        if (velocity_history_.empty()) 
        {
            response->avg_lin_vel = 0.0;
            response->avg_ang_vel = 0.0;
            return;
        }

        double sum_lin = 0.0;
        double sum_ang = 0.0;
        for (const auto& vel : velocity_history_) 
        {
            sum_lin += vel.linear.x;
            sum_ang += vel.angular.z;
        }
        
        response->avg_lin_vel = sum_lin / velocity_history_.size();
        response->avg_ang_vel = sum_ang / velocity_history_.size();
    }

    void timerCallback()
    {
        geometry_msgs::msg::Twist cmd;

        if (obstacle_detected_) 
        {
            // Obstacle Avoidance Behavior
            cmd.linear.x = -0.5; 
            cmd.angular.z = 0.0;

            // Publish custom message
            auto obs_msg = assignment2_custom_msgs_srvs::msg::Obstacle();
            obs_msg.obstacle_distance = closest_obstacle_dist_;
            obs_msg.obstacle_direction = closest_obstacle_dir_;
            obs_msg.threshold = threshold_distance_;
            obstacle_publisher_->publish(obs_msg);

        } 
        else 
        {
            // Follow user input
            cmd = current_des_vel_;
        }

        cmd_vel_publisher_->publish(cmd);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<RobotControlNode>());
    rclcpp::shutdown();
    return 0;
}