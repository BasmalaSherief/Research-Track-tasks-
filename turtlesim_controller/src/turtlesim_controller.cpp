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
#include "assignment2_custom_msgs_srvs/msg/Vel.hpp"
using std::placeholders::_1;

class TurtlesimController: public rclcpp::Node
{
public:
TurtlesimController(): Node("turtlesim_controller")
 {
  subscription_ = this->create_subscription<geometry_msgs::msg::Pose>("turtle1/pose", 10, std::bind(&TurtlesimController::topic_callback, this, _1));
  // Publisher for velocity commands
  cmd_vel_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
  publisher_vel_ = this->create_publisher<assignment2_custom_msgs_srvs::msg::Vel>("vel_topic", 10);
  timer_ = this->create_wall_timer(std::chrono::milliseconds(50), std::bind(&TurtlesimController::timer_callback, this));
 }

private:

void timer_callback()
 {
    if(x_<-9.0){
    message.linear.x = -3.0;
    message.angular.z = 0.0;
    }
    else{
    message.linear.x = 0.0;
    message.angular.z = 0.0;
    }
      message_vel.name = "linear_x";
      message_vel.vel = message.linear.x;
      publisher_vel_->publish(message_vel);
      publisher_->publish(message);
 }

 void topic_callback(const geometry_msgs::msg::Pose::SharedPtr msg)
 {
 RCLCPP_INFO(this->get_logger(), "The position of the turtle is (x, y): '%f, %f'", msg->x, msg->y);
 x_ = msg->x;
 }

 rclcpp::Subscription<geometry_msgs::msg::Pose>::SharedPtr subscription_;
 rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_publisher_;
 rclcpp::TimerBase::SharedPtr timer_;
 geometry_msgs::msg::Twist message;
 float x_;
 rclcpp::Publisher<assignment2_custom_msgs_srvs::msg::Vel>::SharedPtr publisher_vel_;
 assignment2_custom_msgs_srvs::msg::Vel message_vel;
};

int main(int argc, char * argv[])
{
 rclcpp::init(argc, argv);
 rclcpp::spin(std::make_shared<TurtlesimController>());
 rclcpp::shutdown();
 return 0;
}
