#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/srv/spawn.hpp"
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

            spawn_client_ = this->create_client<turtlesim::srv::Spawn>("/spawn");
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
        void spawn_turtle3()
            {
                auto request = std::make_shared<turtlesim::srv::Spawn::Request>();
                request->x = 10;
                request->y = 10;
                request->theta = 0.0;
                request->name = "turtle3";

                // Wait for service to be available
                while (!spawn_client_->wait_for_service(std::chrono::seconds(1))) {
                    if (!rclcpp::ok()) 
                    {
                        RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for service.");
                        return;
                    }
                    RCLCPP_INFO(this->get_logger(), "Waiting for /spawn service...");
                }

                auto result = spawn_client_->async_send_request(request);
            }
        
    private:
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_turtle1_;
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_turtle2_;

        rclcpp::Client<turtlesim::srv::Spawn>::SharedPtr spawn_client_;

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
        cout << "Menu:\n 1. Control Turtle 1\n 2. Control Turtle 2\n 3. Spawn Turtle 3\n Selection: " << endl;
        cin >> input_turtle;
        if (input_turtle == 3) 
        {
        node->spawn_turtle3();
        continue;
       }
        if (cin.fail()) 
        {
            cin.clear(); 
            cin.ignore(100, '\n'); 
            continue;
        }
        
        cout << "Enter Forward Velocity (Linear X): ";
        cin >> input_lin;

        cout << "Enter Turn Velocity (Angular Z): ";
        cin >> input_ang;

        node -> move_turtle(input_turtle, input_lin, input_ang);
    }
    rclcpp::shutdown();
    return 0;
}