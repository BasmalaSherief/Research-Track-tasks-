// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from assignment2_custom_msgs_srvs:srv/ModifyFixedPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msgs_srvs/srv/modify_fixed_point.hpp"


#ifndef ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__MODIFY_FIXED_POINT__TRAITS_HPP_
#define ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__MODIFY_FIXED_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace assignment2_custom_msgs_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ModifyFixedPoint_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: new_x
  {
    out << "new_x: ";
    rosidl_generator_traits::value_to_yaml(msg.new_x, out);
    out << ", ";
  }

  // member: new_y
  {
    out << "new_y: ";
    rosidl_generator_traits::value_to_yaml(msg.new_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ModifyFixedPoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: new_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_x: ";
    rosidl_generator_traits::value_to_yaml(msg.new_x, out);
    out << "\n";
  }

  // member: new_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_y: ";
    rosidl_generator_traits::value_to_yaml(msg.new_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ModifyFixedPoint_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs

namespace rosidl_generator_traits
{

[[deprecated("use assignment2_custom_msgs_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  assignment2_custom_msgs_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use assignment2_custom_msgs_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request & msg)
{
  return assignment2_custom_msgs_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request>()
{
  return "assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request";
}

template<>
inline const char * name<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request>()
{
  return "assignment2_custom_msgs_srvs/srv/ModifyFixedPoint_Request";
}

template<>
struct has_fixed_size<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace assignment2_custom_msgs_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ModifyFixedPoint_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: changed
  {
    out << "changed: ";
    rosidl_generator_traits::value_to_yaml(msg.changed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ModifyFixedPoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: changed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "changed: ";
    rosidl_generator_traits::value_to_yaml(msg.changed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ModifyFixedPoint_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs

namespace rosidl_generator_traits
{

[[deprecated("use assignment2_custom_msgs_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  assignment2_custom_msgs_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use assignment2_custom_msgs_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response & msg)
{
  return assignment2_custom_msgs_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response>()
{
  return "assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response";
}

template<>
inline const char * name<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response>()
{
  return "assignment2_custom_msgs_srvs/srv/ModifyFixedPoint_Response";
}

template<>
struct has_fixed_size<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace assignment2_custom_msgs_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ModifyFixedPoint_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ModifyFixedPoint_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ModifyFixedPoint_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs

namespace rosidl_generator_traits
{

[[deprecated("use assignment2_custom_msgs_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  assignment2_custom_msgs_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use assignment2_custom_msgs_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event & msg)
{
  return assignment2_custom_msgs_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event>()
{
  return "assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event";
}

template<>
inline const char * name<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event>()
{
  return "assignment2_custom_msgs_srvs/srv/ModifyFixedPoint_Event";
}

template<>
struct has_fixed_size<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event>
  : std::integral_constant<bool, has_bounded_size<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request>::value && has_bounded_size<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint>()
{
  return "assignment2_custom_msgs_srvs::srv::ModifyFixedPoint";
}

template<>
inline const char * name<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint>()
{
  return "assignment2_custom_msgs_srvs/srv/ModifyFixedPoint";
}

template<>
struct has_fixed_size<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint>
  : std::integral_constant<
    bool,
    has_fixed_size<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request>::value &&
    has_fixed_size<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response>::value
  >
{
};

template<>
struct has_bounded_size<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint>
  : std::integral_constant<
    bool,
    has_bounded_size<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request>::value &&
    has_bounded_size<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response>::value
  >
{
};

template<>
struct is_service<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint>
  : std::true_type
{
};

template<>
struct is_service_request<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request>
  : std::true_type
{
};

template<>
struct is_service_response<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__MODIFY_FIXED_POINT__TRAITS_HPP_
