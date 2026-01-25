#include <iostream>
#include <memory>
#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "assignment2_custom_msgs_srvs/srv/change_threshold.hpp"
#include "assignment2_custom_msgs_srvs/srv/average_velocities.hpp"

// UI Node for user interaction
class UINode : public rclcpp::Node
{
public:
    UINode() : Node("ui_node")
    {
        // Publisher
        des_vel_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("des_vel", 10);

        // Service Clients
        change_threshold_client_ = this->create_client<assignment2_custom_msgs_srvs::srv::ChangeThreshold>("change_threshold");
        average_velocities_client_ = this->create_client<assignment2_custom_msgs_srvs::srv::AverageVelocities>("average_velocities");
    }

    void main_loop()
    {
        char input;
        bool running = true;
        float current_lin = 0.0;
        float current_ang = 0.0;

        while (running && rclcpp::ok())
        {
            // Print Menu
            std::cout << "\n--- Simple Robot UI ---\n";
            std::cout << "Controls: [w]Forward, [s]Backward, [a]Left, [d]Right, [x/Space]Stop\n";
            std::cout << "Services: [t]Change Threshold, [v]Get Average Velocity\n";
            std::cout << "Quit:     [q]\n";
            std::cout << "Current Velocity -> Lin: " << current_lin << ", Ang: " << current_ang << "\n";
            std::cout << "Enter command: ";
            
            // Blocking Input
            std::cin >> input;

            geometry_msgs::msg::Twist vel_msg;
            bool publish_vel = false;

            switch (input)
            {
            case 'w':
                current_lin += 0.5;
                publish_vel = true;
                break;
            case 's':
                current_lin -= 0.5;
                publish_vel = true;
                break;
            case 'a':
                current_ang += 0.5;
                publish_vel = true;
                break;
            case 'd':
                current_ang -= 0.5;
                publish_vel = true;
                break;
            case 'x':
            case ' ':
                current_lin = 0.0;
                current_ang = 0.0;
                publish_vel = true;
                break;
            case 't':
                call_change_threshold();
                break;
            case 'v':
                call_average_velocities();
                break;
            case 'q':
                running = false;
                break;
            default:
                std::cout << "Invalid command.\n";
                break;
            }

            if (publish_vel)
            {
                vel_msg.linear.x = current_lin;
                vel_msg.angular.z = current_ang;
                des_vel_pub_->publish(vel_msg);
                std::cout << "Published new velocity.\n";
            }
            
            // Spin briefly to process callbacks if any
            rclcpp::spin_some(this->get_node_base_interface());
        }
    }

private:
   
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr des_vel_pub_;
    rclcpp::Client<assignment2_custom_msgs_srvs::srv::ChangeThreshold>::SharedPtr change_threshold_client_;
    rclcpp::Client<assignment2_custom_msgs_srvs::srv::AverageVelocities>::SharedPtr average_velocities_client_;

    void call_change_threshold()
    {
        float new_th;
        std::cout << "Enter new threshold: ";
        std::cin >> new_th;

        auto request = std::make_shared<assignment2_custom_msgs_srvs::srv::ChangeThreshold::Request>();
        request->new_threshold = new_th;

        if (!change_threshold_client_->wait_for_service(std::chrono::seconds(1))) 
        {
            RCLCPP_WARN(this->get_logger(), "Service 'change_threshold' not available.");
            return;
        }

        // Send request
        auto result_future = change_threshold_client_->async_send_request(request);
        
        // Wait for result
        if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result_future) == 
            rclcpp::FutureReturnCode::SUCCESS)
        {
            std::cout << "Threshold updated successfully.\n";
        } 
        else 
        {
            std::cout << "Failed to call service.\n";
        }
    }

    void call_average_velocities()
    {
        auto request = std::make_shared<assignment2_custom_msgs_srvs::srv::AverageVelocities::Request>();
        
        if (!average_velocities_client_->wait_for_service(std::chrono::seconds(1))) 
        {
            RCLCPP_WARN(this->get_logger(), "Service 'average_velocities' not available.");
            return;
        }

        auto result_future = average_velocities_client_->async_send_request(request);
        
        if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result_future) == 
            rclcpp::FutureReturnCode::SUCCESS)
        {
            auto result = result_future.get();
            std::cout << "Received Average -> Linear: " << result->avg_lin_vel << ", Angular: " << result->avg_ang_vel << "\n";
        } 
        else 
        {
            std::cout << "Failed to call service.\n";
        }
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<UINode>();
    node->main_loop();
    rclcpp::shutdown();
    return 0;
}
