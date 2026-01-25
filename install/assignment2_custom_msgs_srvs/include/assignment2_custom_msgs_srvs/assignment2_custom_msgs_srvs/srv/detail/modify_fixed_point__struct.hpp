// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from assignment2_custom_msgs_srvs:srv/ModifyFixedPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msgs_srvs/srv/modify_fixed_point.hpp"


#ifndef ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__MODIFY_FIXED_POINT__STRUCT_HPP_
#define ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__MODIFY_FIXED_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request __attribute__((deprecated))
#else
# define DEPRECATED__assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request __declspec(deprecated)
#endif

namespace assignment2_custom_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ModifyFixedPoint_Request_
{
  using Type = ModifyFixedPoint_Request_<ContainerAllocator>;

  explicit ModifyFixedPoint_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_x = 0.0f;
      this->new_y = 0.0f;
    }
  }

  explicit ModifyFixedPoint_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_x = 0.0f;
      this->new_y = 0.0f;
    }
  }

  // field types and members
  using _new_x_type =
    float;
  _new_x_type new_x;
  using _new_y_type =
    float;
  _new_y_type new_y;

  // setters for named parameter idiom
  Type & set__new_x(
    const float & _arg)
  {
    this->new_x = _arg;
    return *this;
  }
  Type & set__new_y(
    const float & _arg)
  {
    this->new_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModifyFixedPoint_Request_ & other) const
  {
    if (this->new_x != other.new_x) {
      return false;
    }
    if (this->new_y != other.new_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModifyFixedPoint_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModifyFixedPoint_Request_

// alias to use template instance with default allocator
using ModifyFixedPoint_Request =
  assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs


#ifndef _WIN32
# define DEPRECATED__assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response __attribute__((deprecated))
#else
# define DEPRECATED__assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response __declspec(deprecated)
#endif

namespace assignment2_custom_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ModifyFixedPoint_Response_
{
  using Type = ModifyFixedPoint_Response_<ContainerAllocator>;

  explicit ModifyFixedPoint_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->changed = false;
    }
  }

  explicit ModifyFixedPoint_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->changed = false;
    }
  }

  // field types and members
  using _changed_type =
    bool;
  _changed_type changed;

  // setters for named parameter idiom
  Type & set__changed(
    const bool & _arg)
  {
    this->changed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModifyFixedPoint_Response_ & other) const
  {
    if (this->changed != other.changed) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModifyFixedPoint_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModifyFixedPoint_Response_

// alias to use template instance with default allocator
using ModifyFixedPoint_Response =
  assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event __attribute__((deprecated))
#else
# define DEPRECATED__assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event __declspec(deprecated)
#endif

namespace assignment2_custom_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ModifyFixedPoint_Event_
{
  using Type = ModifyFixedPoint_Event_<ContainerAllocator>;

  explicit ModifyFixedPoint_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ModifyFixedPoint_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event
    std::shared_ptr<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModifyFixedPoint_Event_ & other) const
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
  bool operator!=(const ModifyFixedPoint_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModifyFixedPoint_Event_

// alias to use template instance with default allocator
using ModifyFixedPoint_Event =
  assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs

namespace assignment2_custom_msgs_srvs
{

namespace srv
{

struct ModifyFixedPoint
{
  using Request = assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request;
  using Response = assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response;
  using Event = assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event;
};

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs

#endif  // ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__MODIFY_FIXED_POINT__STRUCT_HPP_
