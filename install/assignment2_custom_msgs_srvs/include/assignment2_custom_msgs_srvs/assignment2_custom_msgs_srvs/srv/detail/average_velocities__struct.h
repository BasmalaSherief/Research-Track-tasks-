// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assignment2_custom_msgs_srvs:srv/AverageVelocities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msgs_srvs/srv/average_velocities.h"


#ifndef ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__AVERAGE_VELOCITIES__STRUCT_H_
#define ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__AVERAGE_VELOCITIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lin_vel_request'
// Member 'ang_vel_request'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/AverageVelocities in the package assignment2_custom_msgs_srvs.
typedef struct assignment2_custom_msgs_srvs__srv__AverageVelocities_Request
{
  rosidl_runtime_c__float__Sequence lin_vel_request;
  rosidl_runtime_c__float__Sequence ang_vel_request;
} assignment2_custom_msgs_srvs__srv__AverageVelocities_Request;

// Struct for a sequence of assignment2_custom_msgs_srvs__srv__AverageVelocities_Request.
typedef struct assignment2_custom_msgs_srvs__srv__AverageVelocities_Request__Sequence
{
  assignment2_custom_msgs_srvs__srv__AverageVelocities_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment2_custom_msgs_srvs__srv__AverageVelocities_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/AverageVelocities in the package assignment2_custom_msgs_srvs.
typedef struct assignment2_custom_msgs_srvs__srv__AverageVelocities_Response
{
  float avg_lin_vel;
  float avg_ang_vel;
} assignment2_custom_msgs_srvs__srv__AverageVelocities_Response;

// Struct for a sequence of assignment2_custom_msgs_srvs__srv__AverageVelocities_Response.
typedef struct assignment2_custom_msgs_srvs__srv__AverageVelocities_Response__Sequence
{
  assignment2_custom_msgs_srvs__srv__AverageVelocities_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment2_custom_msgs_srvs__srv__AverageVelocities_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  assignment2_custom_msgs_srvs__srv__AverageVelocities_Event__request__MAX_SIZE = 1
};
// response
enum
{
  assignment2_custom_msgs_srvs__srv__AverageVelocities_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AverageVelocities in the package assignment2_custom_msgs_srvs.
typedef struct assignment2_custom_msgs_srvs__srv__AverageVelocities_Event
{
  service_msgs__msg__ServiceEventInfo info;
  assignment2_custom_msgs_srvs__srv__AverageVelocities_Request__Sequence request;
  assignment2_custom_msgs_srvs__srv__AverageVelocities_Response__Sequence response;
} assignment2_custom_msgs_srvs__srv__AverageVelocities_Event;

// Struct for a sequence of assignment2_custom_msgs_srvs__srv__AverageVelocities_Event.
typedef struct assignment2_custom_msgs_srvs__srv__AverageVelocities_Event__Sequence
{
  assignment2_custom_msgs_srvs__srv__AverageVelocities_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment2_custom_msgs_srvs__srv__AverageVelocities_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__AVERAGE_VELOCITIES__STRUCT_H_
