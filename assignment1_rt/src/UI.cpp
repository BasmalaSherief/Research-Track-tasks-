#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <memory>
#include <thread>
#include <iostream>

using namespace std;

class Robot_Controller : public rclcpp :: Node
{
    public:
        Robot_Controller() : Node("robot_controller_ui")
        {
            pub_robot1_ = this->create_publisher<geometry_msgs::msg::Twist>("robot1/cmd_vel", 10);
            pub_robot2_ = this->create_publisher<geometry_msgs::msg::Twist>("robot2/cmd_vel", 10);

            RCLCPP_INFO(this -> get_logger(), "UI Node Started. Ready for input.");         
        }
        void move_robot(int robot_id, double linear_x, double angular_z)
        {
            auto msg = geometry_msgs::msg::Twist();
            msg.linear.x = linear_x;
            msg.angular.z = angular_z;

            if (robot_id == 1) 
            {
                pub_robot1_ -> publish(msg);
                RCLCPP_INFO(this -> get_logger(), "Robot 1 -> Lin: %.2f, Ang: %.2f", linear_x, angular_z);
            } 
            else if (robot_id == 2) 
            {
                pub_robot2_ -> publish(msg);
                RCLCPP_INFO(this -> get_logger(), "Robot 2 -> Lin: %.2f, Ang: %.2f", linear_x, angular_z);
            }
            else 
            {
                cout << "Invalid Robot ID!" << endl;
                return;
            }
            this_thread::sleep_for(chrono::milliseconds(1000));

            msg.linear.x = 0.0;
            msg.angular.z = 0.0;
            if (robot_id == 1) pub_robot1_->publish(msg);
            else if (robot_id == 2) pub_robot2_->publish(msg);

            RCLCPP_INFO(this->get_logger(), "Stopped.");
        }  
        
    private:
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_robot1_;
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_robot2_;

};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    auto node = make_shared<Robot_Controller>();

    int input_robot;
    double input_lin;
    double input_ang;

    while(rclcpp::ok())
    {
        cout << "Choose which robot you want to Control (1 or 2?)" << endl;
        cin >> input_robot;

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

        node -> move_robot(input_robot, input_lin, input_ang);
    }
    rclcpp::shutdown();
    return 0;
}