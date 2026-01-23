#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim_custom_msgs/msg/vel.hpp"
#include "turtlesim/srv/kill.hpp"
#include "turtlesim/srv/spawn.hpp"
#include <iostream>

class MinimalController : public rclcpp::Node
{

    public:
    MinimalController(): Node("minimal_controller")
    {
    publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 10);
    publisher_vel_ = this->create_publisher<turtlesim_custom_msgs::msg::Vel>("turtle1/custom_vel", 10);
    timer_ = this->create_wall_timer(std::chrono::milliseconds(100), std::bind(&MinimalController::timer_callback, this));
    kill_client_ = this->create_client<turtlesim::srv::Kill>("kill");
    spawn_client_ = this->create_client<turtlesim::srv::Spawn>("spawn");
    x_estimated = 0.0;
    }
    void respawn_turtle()
    {
    auto kill_request = std::make_shared<turtlesim::srv::Kill::Request>();
    kill_request->name = "turtle1";
    while (!kill_client_->wait_for_service(std::chrono::seconds(1))) {
        RCLCPP_INFO(this->get_logger(), "Waiting for kill service...");
    }
    kill_client_->async_send_request(kill_request);

    auto spawn_request = std::make_shared<turtlesim::srv::Spawn::Request>();
    spawn_request->x = 5.0;
    spawn_request->y = 5.0;
    spawn_request->theta = 0.0;
    spawn_request->name = "turtle2";
    while (!spawn_client_->wait_for_service(std::chrono::seconds(1))) 
    {
        RCLCPP_INFO(this->get_logger(), "Waiting for spawn service...");
    }
    auto spawn_result_future = spawn_client_->async_send_request(spawn_request);
    if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), spawn_result_future)
        == rclcpp::FutureReturnCode::SUCCESS)
    {
        auto result = spawn_result_future.get();
        RCLCPP_INFO(this->get_logger(), "Spawned turtle '%s'",
                    result->name.c_str());
    } 
    else 
    {
        RCLCPP_ERROR(this->get_logger(), "Failed to call spawn service");
    }
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
        message_vel.name = "linear_x";
        message_vel.vel = message.linear.x;
        publisher_vel_->publish(message_vel);
        RCLCPP_INFO(this->get_logger(), "Publishing Vel: %.1f | Est Distance: %.1f", message.linear.x, x_estimated);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::Publisher<turtlesim_custom_msgs::msg::Vel>::SharedPtr publisher_vel_;
    rclcpp::Client<turtlesim::srv::Kill>::SharedPtr kill_client_;
    rclcpp::Client<turtlesim::srv::Spawn>::SharedPtr spawn_client_;
    int count_;
    geometry_msgs::msg::Twist message;
    turtlesim_custom_msgs::msg::Vel message_vel;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MinimalController>();
    node->respawn_turtle();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}