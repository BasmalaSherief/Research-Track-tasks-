#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <iostream>

class MinimalController : public rclcpp::Node
{

    public:
    MinimalController(): Node("minimal_controller")
    {
    publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 10);
    timer_ = this->create_wall_timer(std::chrono::milliseconds(100), std::bind(&MinimalController::timer_callback, this));
    x_estimated = 0.0;
    }
    private:
    float x_estimated;
    void timer_callback()
    {
        if (x_estimated <9.0) 
        {
        message.linear.x = 2.0;
        message.angular.z = 0.0;
        x_estimated += 0.2;
        } 
        else 
        {
        message.linear.x = 0.0;
        message.angular.z = 0.0;
        }
        publisher_->publish(message);
        RCLCPP_INFO(this->get_logger(), "Publishing Vel: %.1f | Est Distance: %.1f", message.linear.x, x_estimated);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    int count_;
    geometry_msgs::msg::Twist message;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MinimalController>());
    rclcpp::shutdown();
    return 0;
}