// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from assignment2_custom_msgs_srvs:srv/AverageVelocities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msgs_srvs/srv/average_velocities.hpp"


#ifndef ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__AVERAGE_VELOCITIES__STRUCT_HPP_
#define ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__AVERAGE_VELOCITIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__assignment2_custom_msgs_srvs__srv__AverageVelocities_Request __attribute__((deprecated))
#else
# define DEPRECATED__assignment2_custom_msgs_srvs__srv__AverageVelocities_Request __declspec(deprecated)
#endif

namespace assignment2_custom_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AverageVelocities_Request_
{
  using Type = AverageVelocities_Request_<ContainerAllocator>;

  explicit AverageVelocities_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AverageVelocities_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _lin_vel_request_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _lin_vel_request_type lin_vel_request;
  using _ang_vel_request_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _ang_vel_request_type ang_vel_request;

  // setters for named parameter idiom
  Type & set__lin_vel_request(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->lin_vel_request = _arg;
    return *this;
  }
  Type & set__ang_vel_request(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->ang_vel_request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assignment2_custom_msgs_srvs::srv::AverageVelocities_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const assignment2_custom_msgs_srvs::srv::AverageVelocities_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msgs_srvs::srv::AverageVelocities_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msgs_srvs::srv::AverageVelocities_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assignment2_custom_msgs_srvs__srv__AverageVelocities_Request
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assignment2_custom_msgs_srvs__srv__AverageVelocities_Request
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AverageVelocities_Request_ & other) const
  {
    if (this->lin_vel_request != other.lin_vel_request) {
      return false;
    }
    if (this->ang_vel_request != other.ang_vel_request) {
      return false;
    }
    return true;
  }
  bool operator!=(const AverageVelocities_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AverageVelocities_Request_

// alias to use template instance with default allocator
using AverageVelocities_Request =
  assignment2_custom_msgs_srvs::srv::AverageVelocities_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs


#ifndef _WIN32
# define DEPRECATED__assignment2_custom_msgs_srvs__srv__AverageVelocities_Response __attribute__((deprecated))
#else
# define DEPRECATED__assignment2_custom_msgs_srvs__srv__AverageVelocities_Response __declspec(deprecated)
#endif

namespace assignment2_custom_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AverageVelocities_Response_
{
  using Type = AverageVelocities_Response_<ContainerAllocator>;

  explicit AverageVelocities_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->avg_lin_vel = 0.0f;
      this->avg_ang_vel = 0.0f;
    }
  }

  explicit AverageVelocities_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->avg_lin_vel = 0.0f;
      this->avg_ang_vel = 0.0f;
    }
  }

  // field types and members
  using _avg_lin_vel_type =
    float;
  _avg_lin_vel_type avg_lin_vel;
  using _avg_ang_vel_type =
    float;
  _avg_ang_vel_type avg_ang_vel;

  // setters for named parameter idiom
  Type & set__avg_lin_vel(
    const float & _arg)
  {
    this->avg_lin_vel = _arg;
    return *this;
  }
  Type & set__avg_ang_vel(
    const float & _arg)
  {
    this->avg_ang_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assignment2_custom_msgs_srvs::srv::AverageVelocities_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const assignment2_custom_msgs_srvs::srv::AverageVelocities_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msgs_srvs::srv::AverageVelocities_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msgs_srvs::srv::AverageVelocities_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assignment2_custom_msgs_srvs__srv__AverageVelocities_Response
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assignment2_custom_msgs_srvs__srv__AverageVelocities_Response
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AverageVelocities_Response_ & other) const
  {
    if (this->avg_lin_vel != other.avg_lin_vel) {
      return false;
    }
    if (this->avg_ang_vel != other.avg_ang_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const AverageVelocities_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AverageVelocities_Response_

// alias to use template instance with default allocator
using AverageVelocities_Response =
  assignment2_custom_msgs_srvs::srv::AverageVelocities_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__assignment2_custom_msgs_srvs__srv__AverageVelocities_Event __attribute__((deprecated))
#else
# define DEPRECATED__assignment2_custom_msgs_srvs__srv__AverageVelocities_Event __declspec(deprecated)
#endif

namespace assignment2_custom_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AverageVelocities_Event_
{
  using Type = AverageVelocities_Event_<ContainerAllocator>;

  explicit AverageVelocities_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit AverageVelocities_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<assignment2_custom_msgs_srvs::srv::AverageVelocities_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<assignment2_custom_msgs_srvs::srv::AverageVelocities_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<assignment2_custom_msgs_srvs::srv::AverageVelocities_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<assignment2_custom_msgs_srvs::srv::AverageVelocities_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<assignment2_custom_msgs_srvs::srv::AverageVelocities_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<assignment2_custom_msgs_srvs::srv::AverageVelocities_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<assignment2_custom_msgs_srvs::srv::AverageVelocities_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<assignment2_custom_msgs_srvs::srv::AverageVelocities_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assignment2_custom_msgs_srvs::srv::AverageVelocities_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const assignment2_custom_msgs_srvs::srv::AverageVelocities_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msgs_srvs::srv::AverageVelocities_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msgs_srvs::srv::AverageVelocities_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assignment2_custom_msgs_srvs__srv__AverageVelocities_Event
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assignment2_custom_msgs_srvs__srv__AverageVelocities_Event
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::AverageVelocities_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AverageVelocities_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const AverageVelocities_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AverageVelocities_Event_

// alias to use template instance with default allocator
using AverageVelocities_Event =
  assignment2_custom_msgs_srvs::srv::AverageVelocities_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs

namespace assignment2_custom_msgs_srvs
{

namespace srv
{

struct AverageVelocities
{
  using Request = assignment2_custom_msgs_srvs::srv::AverageVelocities_Request;
  using Response = assignment2_custom_msgs_srvs::srv::AverageVelocities_Response;
  using Event = assignment2_custom_msgs_srvs::srv::AverageVelocities_Event;
};

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs

#endif  // ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__AVERAGE_VELOCITIES__STRUCT_HPP_
