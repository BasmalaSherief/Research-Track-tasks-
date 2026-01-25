#include "rclcpp/rclcpp.hpp"
#include "turtlesim/msg/pose.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "std_msgs/msg/float32.hpp"
#include <cmath>

#define THRESHOLD 1.5

using namespace std::placeholders;

class DistanceMonitor : public rclcpp::Node
{
public:
    DistanceMonitor() : Node("distance_monitor_node")
    {
        pub_distance12_ = this->create_publisher<std_msgs::msg::Float32>("turtle12_distance", 10);
        pub_distance13_ = this->create_publisher<std_msgs::msg::Float32>("turtle13_distance", 10);
        pub_cmd_turtle1_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
        pub_cmd_turtle2_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle2/cmd_vel", 10);

        sub_pose_t1_ = this->create_subscription<turtlesim::msg::Pose>(
            "/turtle1/pose", 10, std::bind(&DistanceMonitor::callback_turtle1, this, _1));
            
        sub_pose_t2_ = this->create_subscription<turtlesim::msg::Pose>(
            "/turtle2/pose", 10, std::bind(&DistanceMonitor::callback_turtle2, this, _1));

        sub_pose_t3_ = this->create_subscription<turtlesim::msg::Pose>(
            "/turtle3/pose", 10, std::bind(&DistanceMonitor::callback_turtle3, this, _1));


        pose1_received_ = false;
        pose2_received_ = false;
        pose3_received_ = false;

        // Initialize previous values to track movement direction
        prev_distance_ = 0.0;
        prev_x1_ = 5.5; 
        prev_y1_ = 5.5;

        RCLCPP_INFO(this->get_logger(), "Distance Monitor Node Started.");
    }
private:
    turtlesim::msg::Pose pose1_;
    turtlesim::msg::Pose pose2_;
    turtlesim::msg::Pose pose3_;
    bool pose1_received_;
    bool pose2_received_;
    bool pose3_received_;
    float prev_distance_;
    float prev_x1_, prev_y1_;

    rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr pub_distance12_;
    rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr pub_distance13_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_cmd_turtle1_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_cmd_turtle2_;
    
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr sub_pose_t1_;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr sub_pose_t2_;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr sub_pose_t3_;

    void callback_turtle1(const turtlesim::msg::Pose::SharedPtr msg)
    {
        pose1_ = *msg;
        pose1_received_ = true;
        check_metrics(); 
        prev_x1_ = pose1_.x;
        prev_y1_ = pose1_.y;
    }
    void callback_turtle2(const turtlesim::msg::Pose::SharedPtr msg)
    {
        pose2_ = *msg;
        pose2_received_ = true;
        check_metrics();
    }
    void callback_turtle3(const turtlesim::msg::Pose::SharedPtr msg)
    {
        pose3_ = *msg;
        pose3_received_ = true;
    }
    void check_metrics()
    {
        if (!pose1_received_ || !pose2_received_ || !pose3_received_) return;
        // Calculate distances
        // Distance between Turtle 1 and Turtle 2
        float current_distance12 = std::sqrt(std::pow(pose1_.x - pose2_.x, 2) + 
                                   std::pow(pose1_.y - pose2_.y, 2));

        auto dist_msg1 = std_msgs::msg::Float32();
        dist_msg1.data = current_distance12;
        pub_distance12_->publish(dist_msg1);


        // Distance between Turtle 1 and Turtle 3
        float current_distance13 = std::sqrt(std::pow(pose1_.x - pose3_.x, 2) + 
                                   std::pow(pose1_.y - pose3_.y, 2));
        auto dist_msg2 = std_msgs::msg::Float32();
        dist_msg2.data = current_distance13;
        pub_distance13_->publish(dist_msg2);

        if (current_distance12 < THRESHOLD && current_distance12 < prev_distance_) 
        {
            RCLCPP_WARN(this->get_logger(), "Too Close! (Dist: %.2f) Stopping...", current_distance12);
            stop_turtles();
        }
        prev_distance_ = current_distance12;

        if (pose1_.x > 10.0 && pose1_.x > prev_x1_) 
        { 
            stop_turtles(); 
            RCLCPP_WARN(this->get_logger(), "Hit Right Wall");
        }
        else if (pose1_.x < 1.0 && pose1_.x < prev_x1_) 
        { 
            stop_turtles(); 
            RCLCPP_WARN(this->get_logger(), "Hit Left Wall");
        }
        else if (pose1_.y > 10.0 && pose1_.y > prev_y1_) 
        { 
            stop_turtles(); 
            RCLCPP_WARN(this->get_logger(), "Hit Top Wall");
        }
        else if (pose1_.y < 1.0 && pose1_.y < prev_y1_) 
        { 
            stop_turtles(); 
            RCLCPP_WARN(this->get_logger(), "Hit Bottom Wall");
        }
    }
    void stop_turtles()
    {
        auto stop_msg = geometry_msgs::msg::Twist();
        stop_msg.linear.x = 0.0;
        stop_msg.angular.z = 0.0;
        pub_cmd_turtle1_->publish(stop_msg);
        pub_cmd_turtle2_->publish(stop_msg);
    }
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DistanceMonitor>());
    rclcpp::shutdown();
    return 0;
}