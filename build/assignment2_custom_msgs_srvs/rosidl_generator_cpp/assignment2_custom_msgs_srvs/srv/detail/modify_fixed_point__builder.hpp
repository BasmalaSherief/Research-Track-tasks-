// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assignment2_custom_msgs_srvs:srv/ModifyFixedPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msgs_srvs/srv/modify_fixed_point.hpp"


#ifndef ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__MODIFY_FIXED_POINT__BUILDER_HPP_
#define ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__MODIFY_FIXED_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace assignment2_custom_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_ModifyFixedPoint_Request_new_y
{
public:
  explicit Init_ModifyFixedPoint_Request_new_y(::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request & msg)
  : msg_(msg)
  {}
  ::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request new_y(::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request::_new_y_type arg)
  {
    msg_.new_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request msg_;
};

class Init_ModifyFixedPoint_Request_new_x
{
public:
  Init_ModifyFixedPoint_Request_new_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModifyFixedPoint_Request_new_y new_x(::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request::_new_x_type arg)
  {
    msg_.new_x = std::move(arg);
    return Init_ModifyFixedPoint_Request_new_y(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request>()
{
  return assignment2_custom_msgs_srvs::srv::builder::Init_ModifyFixedPoint_Request_new_x();
}

}  // namespace assignment2_custom_msgs_srvs


namespace assignment2_custom_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_ModifyFixedPoint_Response_changed
{
public:
  Init_ModifyFixedPoint_Response_changed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response changed(::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response::_changed_type arg)
  {
    msg_.changed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response>()
{
  return assignment2_custom_msgs_srvs::srv::builder::Init_ModifyFixedPoint_Response_changed();
}

}  // namespace assignment2_custom_msgs_srvs


namespace assignment2_custom_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_ModifyFixedPoint_Event_response
{
public:
  explicit Init_ModifyFixedPoint_Event_response(::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event & msg)
  : msg_(msg)
  {}
  ::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event response(::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event msg_;
};

class Init_ModifyFixedPoint_Event_request
{
public:
  explicit Init_ModifyFixedPoint_Event_request(::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event & msg)
  : msg_(msg)
  {}
  Init_ModifyFixedPoint_Event_response request(::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ModifyFixedPoint_Event_response(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event msg_;
};

class Init_ModifyFixedPoint_Event_info
{
public:
  Init_ModifyFixedPoint_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModifyFixedPoint_Event_request info(::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ModifyFixedPoint_Event_request(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event>()
{
  return assignment2_custom_msgs_srvs::srv::builder::Init_ModifyFixedPoint_Event_info();
}

}  // namespace assignment2_custom_msgs_srvs

#endif  // ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__MODIFY_FIXED_POINT__BUILDER_HPP_
