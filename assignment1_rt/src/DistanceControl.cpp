#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "std_msgs/msg/float32.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include <cmath>

#define THRESHOLD 1.5

using namespace std::placeholders;

class DistanceMonitor : public rclcpp::Node
{
public:
    DistanceMonitor() : Node("distance_monitor_node")
    {
        pub_distance_ = this->create_publisher<std_msgs::msg::Float32>("robot_distance", 10);
        pub_cmd_robot1_ = this->create_publisher<geometry_msgs::msg::Twist>("/robot1/cmd_vel", 10);
        pub_cmd_robot2_ = this->create_publisher<geometry_msgs::msg::Twist>("/robot2/cmd_vel", 10);

        sub_pose_robot1_ = this->create_subscription<nav_msgs::msg::Odometry>(
            "/robot1/odom", 10, std::bind(&DistanceMonitor::callback_robot1, this, _1));
            
        sub_pose_robot2_ = this->create_subscription<nav_msgs::msg::Odometry>(
            "/robot2/odom", 10, std::bind(&DistanceMonitor::callback_robot2, this, _1));

        odom1_received_ = false;
        odom2_received_ = false;
        // Initialize previous values to track movement direction
        prev_distance_ = 0.0;

        RCLCPP_INFO(this->get_logger(), "Distance Monitor Node Started.");
    }
private:
    nav_msgs::msg::Odometry odom1_;
    nav_msgs::msg::Odometry odom2_;
    bool odom1_received_;
    bool odom2_received_;
    float prev_distance_;
    float prev_odom1_;

    rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr pub_distance_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_cmd_robot1_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_cmd_robot2_;
    
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr sub_pose_robot1_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr sub_pose_robot2_;

    void callback_robot1(const nav_msgs::msg::Odometry::SharedPtr msg)
    {
        odom1_ = *msg;
        odom1_received_ = true;
        check_metrics(); 
        prev_odom1_ = odom1_.pose.pose.position.x + odom1_.pose.pose.position.y;
    }
    void callback_robot2(const nav_msgs::msg::Odometry::SharedPtr msg)
    {
        odom2_ = *msg;
        odom2_received_ = true;
        check_metrics();
    }
    void check_metrics()
    {
        if (!odom1_received_ || !odom2_received_) return;

        float current_distance = std::sqrt(std::pow(odom1_.pose.pose.position.x - odom2_.pose.pose.position.x, 2) + 
                                   std::pow(odom1_.pose.pose.position.y - odom2_.pose.pose.position.y, 2));

        auto dist_msg = std_msgs::msg::Float32();
        dist_msg.data = current_distance;
        pub_distance_->publish(dist_msg);

        if (current_distance < THRESHOLD && current_distance < prev_distance_) 
        {
            RCLCPP_WARN(this->get_logger(), "Too Close! (Dist: %.2f) Stopping...", current_distance);
            stop_robots();
        }
        prev_distance_ = current_distance;

    }
    void stop_robots()
    {
        auto stop_msg = geometry_msgs::msg::Twist();
        stop_msg.linear.x = 0.0;
        stop_msg.angular.z = 0.0;
        pub_cmd_robot1_->publish(stop_msg);
        pub_cmd_robot2_->publish(stop_msg);
    }
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DistanceMonitor>());
    rclcpp::shutdown();
    return 0;
}