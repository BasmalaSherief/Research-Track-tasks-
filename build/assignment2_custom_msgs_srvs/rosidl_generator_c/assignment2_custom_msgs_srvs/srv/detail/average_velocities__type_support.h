// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from assignment2_custom_msgs_srvs:srv/AverageVelocities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msgs_srvs/srv/average_velocities.h"


#ifndef ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__AVERAGE_VELOCITIES__TYPE_SUPPORT_H_
#define ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__AVERAGE_VELOCITIES__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "assignment2_custom_msgs_srvs/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_assignment2_custom_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  assignment2_custom_msgs_srvs,
  srv,
  AverageVelocities_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_assignment2_custom_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  assignment2_custom_msgs_srvs,
  srv,
  AverageVelocities_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_assignment2_custom_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  assignment2_custom_msgs_srvs,
  srv,
  AverageVelocities_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_assignment2_custom_msgs_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  assignment2_custom_msgs_srvs,
  srv,
  AverageVelocities
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_assignment2_custom_msgs_srvs
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  assignment2_custom_msgs_srvs,
  srv,
  AverageVelocities
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_assignment2_custom_msgs_srvs
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  assignment2_custom_msgs_srvs,
  srv,
  AverageVelocities
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // ASSIGNMENT2_CUSTOM_MSGS_SRVS__SRV__DETAIL__AVERAGE_VELOCITIES__TYPE_SUPPORT_H_
