// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assignment2_custom_msgs_srvs:srv/ModifyFixedPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msgs_srvs/srv/modify_fixed_point.h"


#ifndef ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__MODIFY_FIXED_POINT__STRUCT_H_
#define ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__MODIFY_FIXED_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ModifyFixedPoint in the package assignment2_custom_msgs_srvs.
typedef struct assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request
{
  float new_x;
  float new_y;
} assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request;

// Struct for a sequence of assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request.
typedef struct assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__Sequence
{
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ModifyFixedPoint in the package assignment2_custom_msgs_srvs.
typedef struct assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response
{
  bool changed;
} assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response;

// Struct for a sequence of assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response.
typedef struct assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__Sequence
{
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__request__MAX_SIZE = 1
};
// response
enum
{
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ModifyFixedPoint in the package assignment2_custom_msgs_srvs.
typedef struct assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event
{
  service_msgs__msg__ServiceEventInfo info;
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__Sequence request;
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__Sequence response;
} assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event;

// Struct for a sequence of assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event.
typedef struct assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__Sequence
{
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__MODIFY_FIXED_POINT__STRUCT_H_
