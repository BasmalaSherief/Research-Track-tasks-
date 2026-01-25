// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assignment2_custom_msgs_srvs:srv/ChangeThreshold.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msgs_srvs/srv/change_threshold.hpp"


#ifndef ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__CHANGE_THRESHOLD__BUILDER_HPP_
#define ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__CHANGE_THRESHOLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "assignment2_custom_msgs_srvs/srv/detail/change_threshold__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace assignment2_custom_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_ChangeThreshold_Request_new_threshold
{
public:
  Init_ChangeThreshold_Request_new_threshold()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Request new_threshold(::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Request::_new_threshold_type arg)
  {
    msg_.new_threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Request>()
{
  return assignment2_custom_msgs_srvs::srv::builder::Init_ChangeThreshold_Request_new_threshold();
}

}  // namespace assignment2_custom_msgs_srvs


namespace assignment2_custom_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_ChangeThreshold_Response_success
{
public:
  Init_ChangeThreshold_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Response success(::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Response>()
{
  return assignment2_custom_msgs_srvs::srv::builder::Init_ChangeThreshold_Response_success();
}

}  // namespace assignment2_custom_msgs_srvs


namespace assignment2_custom_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_ChangeThreshold_Event_response
{
public:
  explicit Init_ChangeThreshold_Event_response(::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Event & msg)
  : msg_(msg)
  {}
  ::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Event response(::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Event msg_;
};

class Init_ChangeThreshold_Event_request
{
public:
  explicit Init_ChangeThreshold_Event_request(::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Event & msg)
  : msg_(msg)
  {}
  Init_ChangeThreshold_Event_response request(::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ChangeThreshold_Event_response(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Event msg_;
};

class Init_ChangeThreshold_Event_info
{
public:
  Init_ChangeThreshold_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeThreshold_Event_request info(::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ChangeThreshold_Event_request(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_custom_msgs_srvs::srv::ChangeThreshold_Event>()
{
  return assignment2_custom_msgs_srvs::srv::builder::Init_ChangeThreshold_Event_info();
}

}  // namespace assignment2_custom_msgs_srvs

#endif  // ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__CHANGE_THRESHOLD__BUILDER_HPP_
