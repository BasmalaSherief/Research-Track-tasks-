// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from assignment2_custom_msgs_srvs:msg/Obstacle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msgs_srvs/msg/obstacle.hpp"


#ifndef ASSIGNMENT2_CUSTOM_MSGS_SRVS__MSG__DETAIL__OBSTACLE__STRUCT_HPP_
#define ASSIGNMENT2_CUSTOM_MSGS_SRVS__MSG__DETAIL__OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__assignment2_custom_msgs_srvs__msg__Obstacle __attribute__((deprecated))
#else
# define DEPRECATED__assignment2_custom_msgs_srvs__msg__Obstacle __declspec(deprecated)
#endif

namespace assignment2_custom_msgs_srvs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Obstacle_
{
  using Type = Obstacle_<ContainerAllocator>;

  explicit Obstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle_distance = 0.0f;
      this->obstacle_direction = "";
      this->threshold = 0.0f;
    }
  }

  explicit Obstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obstacle_direction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle_distance = 0.0f;
      this->obstacle_direction = "";
      this->threshold = 0.0f;
    }
  }

  // field types and members
  using _obstacle_distance_type =
    float;
  _obstacle_distance_type obstacle_distance;
  using _obstacle_direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _obstacle_direction_type obstacle_direction;
  using _threshold_type =
    float;
  _threshold_type threshold;

  // setters for named parameter idiom
  Type & set__obstacle_distance(
    const float & _arg)
  {
    this->obstacle_distance = _arg;
    return *this;
  }
  Type & set__obstacle_direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->obstacle_direction = _arg;
    return *this;
  }
  Type & set__threshold(
    const float & _arg)
  {
    this->threshold = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assignment2_custom_msgs_srvs::msg::Obstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const assignment2_custom_msgs_srvs::msg::Obstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assignment2_custom_msgs_srvs::msg::Obstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assignment2_custom_msgs_srvs::msg::Obstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msgs_srvs::msg::Obstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msgs_srvs::msg::Obstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msgs_srvs::msg::Obstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msgs_srvs::msg::Obstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assignment2_custom_msgs_srvs::msg::Obstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assignment2_custom_msgs_srvs::msg::Obstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assignment2_custom_msgs_srvs__msg__Obstacle
    std::shared_ptr<assignment2_custom_msgs_srvs::msg::Obstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assignment2_custom_msgs_srvs__msg__Obstacle
    std::shared_ptr<assignment2_custom_msgs_srvs::msg::Obstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Obstacle_ & other) const
  {
    if (this->obstacle_distance != other.obstacle_distance) {
      return false;
    }
    if (this->obstacle_direction != other.obstacle_direction) {
      return false;
    }
    if (this->threshold != other.threshold) {
      return false;
    }
    return true;
  }
  bool operator!=(const Obstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Obstacle_

// alias to use template instance with default allocator
using Obstacle =
  assignment2_custom_msgs_srvs::msg::Obstacle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace assignment2_custom_msgs_srvs

#endif  // ASSIGNMENT2_CUSTOM_MSGS_SRVS__MSG__DETAIL__OBSTACLE__STRUCT_HPP_
