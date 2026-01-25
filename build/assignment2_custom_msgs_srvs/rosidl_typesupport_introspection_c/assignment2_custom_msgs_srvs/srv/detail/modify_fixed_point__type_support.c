// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from assignment2_custom_msgs_srvs:srv/ModifyFixedPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__rosidl_typesupport_introspection_c.h"
#include "assignment2_custom_msgs_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__functions.h"
#include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__rosidl_typesupport_introspection_c__ModifyFixedPoint_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__init(message_memory);
}

void assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__rosidl_typesupport_introspection_c__ModifyFixedPoint_Request_fini_function(void * message_memory)
{
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__rosidl_typesupport_introspection_c__ModifyFixedPoint_Request_message_member_array[2] = {
  {
    "new_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request, new_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "new_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request, new_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__rosidl_typesupport_introspection_c__ModifyFixedPoint_Request_message_members = {
  "assignment2_custom_msgs_srvs__srv",  // message namespace
  "ModifyFixedPoint_Request",  // message name
  2,  // number of fields
  sizeof(assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request),
  false,  // has_any_key_member_
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__rosidl_typesupport_introspection_c__ModifyFixedPoint_Request_message_member_array,  // message members
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__rosidl_typesupport_introspection_c__ModifyFixedPoint_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__rosidl_typesupport_introspection_c__ModifyFixedPoint_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__rosidl_typesupport_introspection_c__ModifyFixedPoint_Request_message_type_support_handle = {
  0,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__rosidl_typesupport_introspection_c__ModifyFixedPoint_Request_message_members,
  get_message_typesupport_handle_function,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__get_type_hash,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__get_type_description,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_assignment2_custom_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Request)() {
  if (!assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__rosidl_typesupport_introspection_c__ModifyFixedPoint_Request_message_type_support_handle.typesupport_identifier) {
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__rosidl_typesupport_introspection_c__ModifyFixedPoint_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__rosidl_typesupport_introspection_c__ModifyFixedPoint_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "assignment2_custom_msgs_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__functions.h"
// already included above
// #include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__rosidl_typesupport_introspection_c__ModifyFixedPoint_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__init(message_memory);
}

void assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__rosidl_typesupport_introspection_c__ModifyFixedPoint_Response_fini_function(void * message_memory)
{
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__rosidl_typesupport_introspection_c__ModifyFixedPoint_Response_message_member_array[1] = {
  {
    "changed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response, changed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__rosidl_typesupport_introspection_c__ModifyFixedPoint_Response_message_members = {
  "assignment2_custom_msgs_srvs__srv",  // message namespace
  "ModifyFixedPoint_Response",  // message name
  1,  // number of fields
  sizeof(assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response),
  false,  // has_any_key_member_
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__rosidl_typesupport_introspection_c__ModifyFixedPoint_Response_message_member_array,  // message members
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__rosidl_typesupport_introspection_c__ModifyFixedPoint_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__rosidl_typesupport_introspection_c__ModifyFixedPoint_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__rosidl_typesupport_introspection_c__ModifyFixedPoint_Response_message_type_support_handle = {
  0,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__rosidl_typesupport_introspection_c__ModifyFixedPoint_Response_message_members,
  get_message_typesupport_handle_function,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__get_type_hash,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__get_type_description,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_assignment2_custom_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Response)() {
  if (!assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__rosidl_typesupport_introspection_c__ModifyFixedPoint_Response_message_type_support_handle.typesupport_identifier) {
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__rosidl_typesupport_introspection_c__ModifyFixedPoint_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__rosidl_typesupport_introspection_c__ModifyFixedPoint_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "assignment2_custom_msgs_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__functions.h"
// already included above
// #include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "assignment2_custom_msgs_srvs/srv/modify_fixed_point.h"
// Member `request`
// Member `response`
// already included above
// #include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__ModifyFixedPoint_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__init(message_memory);
}

void assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__ModifyFixedPoint_Event_fini_function(void * message_memory)
{
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__fini(message_memory);
}

size_t assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__size_function__ModifyFixedPoint_Event__request(
  const void * untyped_member)
{
  const assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__Sequence * member =
    (const assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__get_const_function__ModifyFixedPoint_Event__request(
  const void * untyped_member, size_t index)
{
  const assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__Sequence * member =
    (const assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__get_function__ModifyFixedPoint_Event__request(
  void * untyped_member, size_t index)
{
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__Sequence * member =
    (assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__fetch_function__ModifyFixedPoint_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request * item =
    ((const assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request *)
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__get_const_function__ModifyFixedPoint_Event__request(untyped_member, index));
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request * value =
    (assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request *)(untyped_value);
  *value = *item;
}

void assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__assign_function__ModifyFixedPoint_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request * item =
    ((assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request *)
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__get_function__ModifyFixedPoint_Event__request(untyped_member, index));
  const assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request * value =
    (const assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request *)(untyped_value);
  *item = *value;
}

bool assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__resize_function__ModifyFixedPoint_Event__request(
  void * untyped_member, size_t size)
{
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__Sequence * member =
    (assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__Sequence *)(untyped_member);
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__Sequence__fini(member);
  return assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__Sequence__init(member, size);
}

size_t assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__size_function__ModifyFixedPoint_Event__response(
  const void * untyped_member)
{
  const assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__Sequence * member =
    (const assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__get_const_function__ModifyFixedPoint_Event__response(
  const void * untyped_member, size_t index)
{
  const assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__Sequence * member =
    (const assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__get_function__ModifyFixedPoint_Event__response(
  void * untyped_member, size_t index)
{
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__Sequence * member =
    (assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__fetch_function__ModifyFixedPoint_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response * item =
    ((const assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response *)
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__get_const_function__ModifyFixedPoint_Event__response(untyped_member, index));
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response * value =
    (assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response *)(untyped_value);
  *value = *item;
}

void assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__assign_function__ModifyFixedPoint_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response * item =
    ((assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response *)
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__get_function__ModifyFixedPoint_Event__response(untyped_member, index));
  const assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response * value =
    (const assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response *)(untyped_value);
  *item = *value;
}

bool assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__resize_function__ModifyFixedPoint_Event__response(
  void * untyped_member, size_t size)
{
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__Sequence * member =
    (assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__Sequence *)(untyped_member);
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__Sequence__fini(member);
  return assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__ModifyFixedPoint_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event, request),  // bytes offset in struct
    NULL,  // default value
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__size_function__ModifyFixedPoint_Event__request,  // size() function pointer
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__get_const_function__ModifyFixedPoint_Event__request,  // get_const(index) function pointer
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__get_function__ModifyFixedPoint_Event__request,  // get(index) function pointer
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__fetch_function__ModifyFixedPoint_Event__request,  // fetch(index, &value) function pointer
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__assign_function__ModifyFixedPoint_Event__request,  // assign(index, value) function pointer
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__resize_function__ModifyFixedPoint_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event, response),  // bytes offset in struct
    NULL,  // default value
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__size_function__ModifyFixedPoint_Event__response,  // size() function pointer
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__get_const_function__ModifyFixedPoint_Event__response,  // get_const(index) function pointer
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__get_function__ModifyFixedPoint_Event__response,  // get(index) function pointer
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__fetch_function__ModifyFixedPoint_Event__response,  // fetch(index, &value) function pointer
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__assign_function__ModifyFixedPoint_Event__response,  // assign(index, value) function pointer
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__resize_function__ModifyFixedPoint_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__ModifyFixedPoint_Event_message_members = {
  "assignment2_custom_msgs_srvs__srv",  // message namespace
  "ModifyFixedPoint_Event",  // message name
  3,  // number of fields
  sizeof(assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event),
  false,  // has_any_key_member_
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__ModifyFixedPoint_Event_message_member_array,  // message members
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__ModifyFixedPoint_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__ModifyFixedPoint_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__ModifyFixedPoint_Event_message_type_support_handle = {
  0,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__ModifyFixedPoint_Event_message_members,
  get_message_typesupport_handle_function,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__get_type_hash,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__get_type_description,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_assignment2_custom_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Event)() {
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__ModifyFixedPoint_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__ModifyFixedPoint_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Request)();
  assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__ModifyFixedPoint_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Response)();
  if (!assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__ModifyFixedPoint_Event_message_type_support_handle.typesupport_identifier) {
    assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__ModifyFixedPoint_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__ModifyFixedPoint_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "assignment2_custom_msgs_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers assignment2_custom_msgs_srvs__srv__detail__modify_fixed_point__rosidl_typesupport_introspection_c__ModifyFixedPoint_service_members = {
  "assignment2_custom_msgs_srvs__srv",  // service namespace
  "ModifyFixedPoint",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // assignment2_custom_msgs_srvs__srv__detail__modify_fixed_point__rosidl_typesupport_introspection_c__ModifyFixedPoint_Request_message_type_support_handle,
  NULL,  // response message
  // assignment2_custom_msgs_srvs__srv__detail__modify_fixed_point__rosidl_typesupport_introspection_c__ModifyFixedPoint_Response_message_type_support_handle
  NULL  // event_message
  // assignment2_custom_msgs_srvs__srv__detail__modify_fixed_point__rosidl_typesupport_introspection_c__ModifyFixedPoint_Response_message_type_support_handle
};


static rosidl_service_type_support_t assignment2_custom_msgs_srvs__srv__detail__modify_fixed_point__rosidl_typesupport_introspection_c__ModifyFixedPoint_service_type_support_handle = {
  0,
  &assignment2_custom_msgs_srvs__srv__detail__modify_fixed_point__rosidl_typesupport_introspection_c__ModifyFixedPoint_service_members,
  get_service_typesupport_handle_function,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__rosidl_typesupport_introspection_c__ModifyFixedPoint_Request_message_type_support_handle,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__rosidl_typesupport_introspection_c__ModifyFixedPoint_Response_message_type_support_handle,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__rosidl_typesupport_introspection_c__ModifyFixedPoint_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    assignment2_custom_msgs_srvs,
    srv,
    ModifyFixedPoint
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    assignment2_custom_msgs_srvs,
    srv,
    ModifyFixedPoint
  ),
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__get_type_hash,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__get_type_description,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_assignment2_custom_msgs_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint)(void) {
  if (!assignment2_custom_msgs_srvs__srv__detail__modify_fixed_point__rosidl_typesupport_introspection_c__ModifyFixedPoint_service_type_support_handle.typesupport_identifier) {
    assignment2_custom_msgs_srvs__srv__detail__modify_fixed_point__rosidl_typesupport_introspection_c__ModifyFixedPoint_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)assignment2_custom_msgs_srvs__srv__detail__modify_fixed_point__rosidl_typesupport_introspection_c__ModifyFixedPoint_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Event)()->data;
  }

  return &assignment2_custom_msgs_srvs__srv__detail__modify_fixed_point__rosidl_typesupport_introspection_c__ModifyFixedPoint_service_type_support_handle;
}
