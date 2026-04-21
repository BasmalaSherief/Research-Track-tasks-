// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from action_interfaces:action/Movetogoal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "action_interfaces/action/movetogoal.h"


#ifndef ACTION_INTERFACES__ACTION__DETAIL__MOVETOGOAL__TYPE_SUPPORT_H_
#define ACTION_INTERFACES__ACTION__DETAIL__MOVETOGOAL__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "action_interfaces/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/action_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_action_interfaces
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c,
  action_interfaces,
  action,
  Movetogoal
)(void);

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  action_interfaces,
  action,
  Movetogoal_Goal
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  action_interfaces,
  action,
  Movetogoal_Result
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  action_interfaces,
  action,
  Movetogoal_Feedback
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  action_interfaces,
  action,
  Movetogoal_SendGoal_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  action_interfaces,
  action,
  Movetogoal_SendGoal_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  action_interfaces,
  action,
  Movetogoal_SendGoal_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_action_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  action_interfaces,
  action,
  Movetogoal_SendGoal
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_action_interfaces
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  action_interfaces,
  action,
  Movetogoal_SendGoal
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_action_interfaces
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  action_interfaces,
  action,
  Movetogoal_SendGoal
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  action_interfaces,
  action,
  Movetogoal_GetResult_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  action_interfaces,
  action,
  Movetogoal_GetResult_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  action_interfaces,
  action,
  Movetogoal_GetResult_Event
)(void);

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_action_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  action_interfaces,
  action,
  Movetogoal_GetResult
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_action_interfaces
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  action_interfaces,
  action,
  Movetogoal_GetResult
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_action_interfaces
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  action_interfaces,
  action,
  Movetogoal_GetResult
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  action_interfaces,
  action,
  Movetogoal_FeedbackMessage
)(void);

#ifdef __cplusplus
}
#endif

#endif  // ACTION_INTERFACES__ACTION__DETAIL__MOVETOGOAL__TYPE_SUPPORT_H_
