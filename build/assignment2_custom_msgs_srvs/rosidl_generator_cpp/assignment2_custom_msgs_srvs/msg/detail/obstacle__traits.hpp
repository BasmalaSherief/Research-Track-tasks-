// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from assignment2_custom_msgs_srvs:msg/Obstacle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msgs_srvs/msg/obstacle.hpp"


#ifndef ASSIGNMENT2_CUSTOM_MSGS_SRVS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_
#define ASSIGNMENT2_CUSTOM_MSGS_SRVS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "assignment2_custom_msgs_srvs/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace assignment2_custom_msgs_srvs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Obstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: obstacle_distance
  {
    out << "obstacle_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_distance, out);
    out << ", ";
  }

  // member: obstacle_direction
  {
    out << "obstacle_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_direction, out);
    out << ", ";
  }

  // member: threshold
  {
    out << "threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Obstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obstacle_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_distance, out);
    out << "\n";
  }

  // member: obstacle_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_direction, out);
    out << "\n";
  }

  // member: threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Obstacle & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace assignment2_custom_msgs_srvs

namespace rosidl_generator_traits
{

[[deprecated("use assignment2_custom_msgs_srvs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const assignment2_custom_msgs_srvs::msg::Obstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  assignment2_custom_msgs_srvs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use assignment2_custom_msgs_srvs::msg::to_yaml() instead")]]
inline std::string to_yaml(const assignment2_custom_msgs_srvs::msg::Obstacle & msg)
{
  return assignment2_custom_msgs_srvs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<assignment2_custom_msgs_srvs::msg::Obstacle>()
{
  return "assignment2_custom_msgs_srvs::msg::Obstacle";
}

template<>
inline const char * name<assignment2_custom_msgs_srvs::msg::Obstacle>()
{
  return "assignment2_custom_msgs_srvs/msg/Obstacle";
}

template<>
struct has_fixed_size<assignment2_custom_msgs_srvs::msg::Obstacle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<assignment2_custom_msgs_srvs::msg::Obstacle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<assignment2_custom_msgs_srvs::msg::Obstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ASSIGNMENT2_CUSTOM_MSGS_SRVS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_
