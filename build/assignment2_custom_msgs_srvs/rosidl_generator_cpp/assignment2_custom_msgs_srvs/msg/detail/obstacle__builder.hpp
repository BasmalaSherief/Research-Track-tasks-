// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assignment2_custom_msgs_srvs:msg/Obstacle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msgs_srvs/msg/obstacle.hpp"


#ifndef ASSIGNMENT2_CUSTOM_MSGS_SRVS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
#define ASSIGNMENT2_CUSTOM_MSGS_SRVS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "assignment2_custom_msgs_srvs/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace assignment2_custom_msgs_srvs
{

namespace msg
{

namespace builder
{

class Init_Obstacle_threshold
{
public:
  explicit Init_Obstacle_threshold(::assignment2_custom_msgs_srvs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  ::assignment2_custom_msgs_srvs::msg::Obstacle threshold(::assignment2_custom_msgs_srvs::msg::Obstacle::_threshold_type arg)
  {
    msg_.threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::msg::Obstacle msg_;
};

class Init_Obstacle_obstacle_direction
{
public:
  explicit Init_Obstacle_obstacle_direction(::assignment2_custom_msgs_srvs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_threshold obstacle_direction(::assignment2_custom_msgs_srvs::msg::Obstacle::_obstacle_direction_type arg)
  {
    msg_.obstacle_direction = std::move(arg);
    return Init_Obstacle_threshold(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::msg::Obstacle msg_;
};

class Init_Obstacle_obstacle_distance
{
public:
  Init_Obstacle_obstacle_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Obstacle_obstacle_direction obstacle_distance(::assignment2_custom_msgs_srvs::msg::Obstacle::_obstacle_distance_type arg)
  {
    msg_.obstacle_distance = std::move(arg);
    return Init_Obstacle_obstacle_direction(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::msg::Obstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_custom_msgs_srvs::msg::Obstacle>()
{
  return assignment2_custom_msgs_srvs::msg::builder::Init_Obstacle_obstacle_distance();
}

}  // namespace assignment2_custom_msgs_srvs

#endif  // ASSIGNMENT2_CUSTOM_MSGS_SRVS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
