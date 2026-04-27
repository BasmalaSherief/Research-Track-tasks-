#include "rclcpp/rclcpp.hpp"
#include <tf2/LinearMath/Quaternion.h>

class SimpleQuatNode : public rclcpp::Node
{
public:
    SimpleQuatNode() : Node("simple_quat_node")
    {
        // Create a quaternion representing a rotation of 90 degrees around the Z-axis
        tf2::Quaternion quat;
        double roll = 0.0;   // Rotation around X-axis
        double pitch = 0.0;  // Rotation around Y-axis
        double yaw = M_PI / 2; // Rotation around Z-axis (90 degrees)
        quat.setRPY(roll, pitch, yaw);
        RCLCPP_INFO(this->get_logger(), "Quaternion: x=%f, y=%f, z=%f, w=%f", quat.x(), quat.y(), quat.z(), quat.w());
    }
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SimpleQuatNode>());
  rclcpp::shutdown();
  return 0;
}