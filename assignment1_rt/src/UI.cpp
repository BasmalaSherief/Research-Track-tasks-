#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "assignment1_rt/srv/change_threshold.hpp"
#include <memory>
#include <thread>
#include <iostream>

using namespace std;

class Turtle_Controller : public rclcpp :: Node
{
    public:
        Turtle_Controller() : Node("turtle_controller_ui")
        {
            pub_turtle1_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 10);
            pub_turtle2_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle2/cmd_vel", 10);
            change_threshold_client_ = this->create_client<assignment1_rt::srv::ChangeThreshold>("change_threshold");
            RCLCPP_INFO(this -> get_logger(), "UI Node Started. Ready for input.");         
        }
        void move_turtle(int turtle_id, double linear_x, double angular_z)
        {
            auto msg = geometry_msgs::msg::Twist();
            msg.linear.x = linear_x;
            msg.angular.z = angular_z;

            if (turtle_id == 1) 
            {
                pub_turtle1_ -> publish(msg);
                RCLCPP_INFO(this -> get_logger(), "Turtle 1 -> Lin: %.2f, Ang: %.2f", linear_x, angular_z);
            } 
            else if (turtle_id == 2) 
            {
                pub_turtle2_ -> publish(msg);
                RCLCPP_INFO(this -> get_logger(), "Turtle 2 -> Lin: %.2f, Ang: %.2f", linear_x, angular_z);
            }
            else 
            {
                cout << "Invalid Turtle ID!" << endl;
                return;
            }
            this_thread::sleep_for(chrono::milliseconds(1000));

            msg.linear.x = 0.0;
            msg.angular.z = 0.0;
            if (turtle_id == 1) pub_turtle1_->publish(msg);
            else if (turtle_id == 2) pub_turtle2_->publish(msg);

            RCLCPP_INFO(this->get_logger(), "Stopped.");
        }  
        
    private:
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_turtle1_;
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_turtle2_;

        rclcpp::Client<assignment1_rt::srv::ChangeThreshold>::SharedPtr change_threshold_client_;

    void call_change_threshold(string operation, float new_th)
    {        
        auto request = std::make_shared<assignment1_rt::srv::ChangeThreshold::Request>();

        request->increaseORdecrease = operation;
        request->value = new_th;
        if (!change_threshold_client_->wait_for_service(std::chrono::seconds(1))) 
        {
            RCLCPP_WARN(this->get_logger(), "Service 'change_threshold' not available.");
            return;
        }

        auto result_future = change_threshold_client_->async_send_request(request);
        if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result_future) == rclcpp::FutureReturnCode::SUCCESS) 
        {
            auto response = result_future.get();
            if (response->success) 
            {
                RCLCPP_INFO(this->get_logger(), "Threshold successfully updated to %.2f", new_th);
            } 
            else 
            {
                RCLCPP_WARN(this->get_logger(), "Failed to update threshold.");
            }
        } 
        else 
        {
            RCLCPP_ERROR(this->get_logger(), "Service call failed");
        }

        RCLCPP_INFO(this->get_logger(), "Service call completed.");
    }

};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    auto node = make_shared<Turtle_Controller>();

    int input_turtle;
    double input_lin;
    double input_ang;

    while(rclcpp::ok())
    {
        cout << "Choose: 1. which turtle you want to Control (1 or 2 or 3 Change Threshold?) " << endl;
        cin >> input_turtle;

        if (cin.fail()) 
        {
            cin.clear(); 
            cin.ignore(100, '\n'); 
            continue;
        }
        if(input_turtle == 1 || input_turtle == 2)
        {
            cout << "Enter Forward Velocity (Linear X): ";
            cin >> input_lin;

            cout << "Enter Turn Velocity (Angular Z): ";
            cin >> input_ang;

            node -> move_turtle(input_turtle, input_lin, input_ang);
        }
        else if (input_turtle == 3)
        {
            string operation;
            float new_th;
            cout << "Enter operation (increase or decrease): ";
            cin >> operation;
            cout << "Enter value to change threshold by: ";
            cin >> new_th;
            node->call_change_threshold(operation, new_th);
            continue; 
        }
        else
        {
            cout << "Invalid choice! Please enter 1, 2, or 3." << endl;
            continue;
        }

    }
    rclcpp::shutdown();
    return 0;
}