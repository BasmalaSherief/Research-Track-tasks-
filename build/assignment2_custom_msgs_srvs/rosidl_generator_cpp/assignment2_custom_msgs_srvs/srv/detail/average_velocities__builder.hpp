// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assignment2_custom_msgs_srvs:srv/AverageVelocities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msgs_srvs/srv/average_velocities.hpp"


#ifndef ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__AVERAGE_VELOCITIES__BUILDER_HPP_
#define ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__AVERAGE_VELOCITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "assignment2_custom_msgs_srvs/srv/detail/average_velocities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace assignment2_custom_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_AverageVelocities_Request_ang_vel_request
{
public:
  explicit Init_AverageVelocities_Request_ang_vel_request(::assignment2_custom_msgs_srvs::srv::AverageVelocities_Request & msg)
  : msg_(msg)
  {}
  ::assignment2_custom_msgs_srvs::srv::AverageVelocities_Request ang_vel_request(::assignment2_custom_msgs_srvs::srv::AverageVelocities_Request::_ang_vel_request_type arg)
  {
    msg_.ang_vel_request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::AverageVelocities_Request msg_;
};

class Init_AverageVelocities_Request_lin_vel_request
{
public:
  Init_AverageVelocities_Request_lin_vel_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AverageVelocities_Request_ang_vel_request lin_vel_request(::assignment2_custom_msgs_srvs::srv::AverageVelocities_Request::_lin_vel_request_type arg)
  {
    msg_.lin_vel_request = std::move(arg);
    return Init_AverageVelocities_Request_ang_vel_request(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::AverageVelocities_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_custom_msgs_srvs::srv::AverageVelocities_Request>()
{
  return assignment2_custom_msgs_srvs::srv::builder::Init_AverageVelocities_Request_lin_vel_request();
}

}  // namespace assignment2_custom_msgs_srvs


namespace assignment2_custom_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_AverageVelocities_Response_avg_ang_vel
{
public:
  explicit Init_AverageVelocities_Response_avg_ang_vel(::assignment2_custom_msgs_srvs::srv::AverageVelocities_Response & msg)
  : msg_(msg)
  {}
  ::assignment2_custom_msgs_srvs::srv::AverageVelocities_Response avg_ang_vel(::assignment2_custom_msgs_srvs::srv::AverageVelocities_Response::_avg_ang_vel_type arg)
  {
    msg_.avg_ang_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::AverageVelocities_Response msg_;
};

class Init_AverageVelocities_Response_avg_lin_vel
{
public:
  Init_AverageVelocities_Response_avg_lin_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AverageVelocities_Response_avg_ang_vel avg_lin_vel(::assignment2_custom_msgs_srvs::srv::AverageVelocities_Response::_avg_lin_vel_type arg)
  {
    msg_.avg_lin_vel = std::move(arg);
    return Init_AverageVelocities_Response_avg_ang_vel(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::AverageVelocities_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_custom_msgs_srvs::srv::AverageVelocities_Response>()
{
  return assignment2_custom_msgs_srvs::srv::builder::Init_AverageVelocities_Response_avg_lin_vel();
}

}  // namespace assignment2_custom_msgs_srvs


namespace assignment2_custom_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_AverageVelocities_Event_response
{
public:
  explicit Init_AverageVelocities_Event_response(::assignment2_custom_msgs_srvs::srv::AverageVelocities_Event & msg)
  : msg_(msg)
  {}
  ::assignment2_custom_msgs_srvs::srv::AverageVelocities_Event response(::assignment2_custom_msgs_srvs::srv::AverageVelocities_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::AverageVelocities_Event msg_;
};

class Init_AverageVelocities_Event_request
{
public:
  explicit Init_AverageVelocities_Event_request(::assignment2_custom_msgs_srvs::srv::AverageVelocities_Event & msg)
  : msg_(msg)
  {}
  Init_AverageVelocities_Event_response request(::assignment2_custom_msgs_srvs::srv::AverageVelocities_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AverageVelocities_Event_response(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::AverageVelocities_Event msg_;
};

class Init_AverageVelocities_Event_info
{
public:
  Init_AverageVelocities_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AverageVelocities_Event_request info(::assignment2_custom_msgs_srvs::srv::AverageVelocities_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AverageVelocities_Event_request(msg_);
  }

private:
  ::assignment2_custom_msgs_srvs::srv::AverageVelocities_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_custom_msgs_srvs::srv::AverageVelocities_Event>()
{
  return assignment2_custom_msgs_srvs::srv::builder::Init_AverageVelocities_Event_info();
}

}  // namespace assignment2_custom_msgs_srvs

#endif  // ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__AVERAGE_VELOCITIES__BUILDER_HPP_
