#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"

class SmartTurtle : public rclcpp::Node
{
public:
    SmartTurtle() : Node("smart_turtle")
    {
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 10);

        subscription_ = this->create_subscription<turtlesim::msg::Pose>(
            "turtle1/pose", 10, std::bind(&SmartTurtle::pose_callback, this, std::placeholders::_1));
        
        RCLCPP_INFO(this->get_logger(), "Smart Turtle Started! Watch the Y limit...");
    }

private:
    void pose_callback(const turtlesim::msg::Pose::SharedPtr msg)
    {
        auto cmd = geometry_msgs::msg::Twist();
        if (msg->y > 9.0 || msg->y < 2.0)
        {
            cmd.linear.x = 0.0;
            cmd.angular.z = 0.0;
            publisher_->publish(cmd);
            RCLCPP_WARN_ONCE(this->get_logger(), "Y Limit Reached! Stopping.");
            return; 
        }

        if (msg->x > 9.0)
        {
            cmd.linear.x = 1.0;  
            cmd.angular.z = 1.8; 
            RCLCPP_INFO(this->get_logger(), "Right wall! Arc turn Left.");
        }

        else if (msg->x < 2.0)
        {
            cmd.linear.x = 1.0;   
            cmd.angular.z = -1.8; 
            RCLCPP_INFO(this->get_logger(), "Left wall! Arc turn Right.");
        }
        else
        {
            cmd.linear.x = 2.0;
            cmd.angular.z = 0.0; 
        }

        publisher_->publish(cmd);
    }

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SmartTurtle>());
    rclcpp::shutdown();
    return 0;
}