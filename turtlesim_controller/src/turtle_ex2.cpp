#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"
#include <cmath> 

enum State {
    FORWARD,
    BACKWARD,
    ROTATE
};

class SmartTurtle : public rclcpp::Node
{
public:
    SmartTurtle() : Node("turtle_exercise_node")
    {
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 10);
        subscription_ = this->create_subscription<turtlesim::msg::Pose>(
            "turtle1/pose", 10, std::bind(&SmartTurtle::pose_callback, this, std::placeholders::_1));

        current_state_ = FORWARD; 
        start_theta_ = 0.0;
        target_theta_ = 0.0;
        first_run_ = true;
        
        RCLCPP_INFO(this->get_logger(), "Turtle Exercise Started!");
    }

private:
    double normalize_angle(double angle)
    {
        while (angle > M_PI) angle -= 2.0 * M_PI;
        while (angle < -M_PI) angle += 2.0 * M_PI;
        return angle;
    }
    void pose_callback(const turtlesim::msg::Pose::SharedPtr msg)
    {
        if (first_run_) 
        {
            start_theta_ = msg->theta;
            target_theta_ = start_theta_; 
            first_run_ = false;
        }

        auto cmd = geometry_msgs::msg::Twist();

        switch (current_state_)
        {
            case FORWARD:
                cmd.linear.x = 2.0; 
                if (msg->x > 10.5 || msg->y > 11.0 || msg->x < 0.5 || msg->y < 0.5) 
                {
                    current_state_ = BACKWARD;
                    RCLCPP_INFO(this->get_logger(), "Wall reached! Going Backward.");
                }
                break;

            case BACKWARD:
                cmd.linear.x = -2.0; 
                float dist_to_center;
                dist_to_center = std::sqrt(std::pow(msg->x - 5.544445, 2) + std::pow(msg->y - 5.544445, 2));

                if (dist_to_center < 0.1) 
                {
                    cmd.linear.x = 0.0; 
                    target_theta_ = normalize_angle(msg->theta + (M_PI / 2.0));
                    current_state_ = ROTATE;
                    RCLCPP_INFO(this->get_logger(), "Center reached! Rotating.");
                }
                break;

            case ROTATE:
                cmd.angular.z = 1.0;
                double angle_diff = normalize_angle(msg->theta - target_theta_);
                if (std::abs(angle_diff) < 0.05) {
                    cmd.angular.z = 0.0; 
                    current_state_ = FORWARD; 
                    RCLCPP_INFO(this->get_logger(), "Rotation done! Moving Forward.");
                }
                break;
        }

        publisher_->publish(cmd);
    }

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_;
    
    State current_state_;
    float start_theta_;
    float target_theta_;
    bool first_run_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SmartTurtle>());
    rclcpp::shutdown();
    return 0;
}