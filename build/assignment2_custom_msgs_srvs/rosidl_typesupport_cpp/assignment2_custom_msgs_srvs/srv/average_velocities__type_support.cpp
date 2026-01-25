// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from assignment2_custom_msgs_srvs:srv/AverageVelocities.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "assignment2_custom_msgs_srvs/srv/detail/average_velocities__functions.h"
#include "assignment2_custom_msgs_srvs/srv/detail/average_velocities__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace assignment2_custom_msgs_srvs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AverageVelocities_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AverageVelocities_Request_type_support_ids_t;

static const _AverageVelocities_Request_type_support_ids_t _AverageVelocities_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AverageVelocities_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AverageVelocities_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AverageVelocities_Request_type_support_symbol_names_t _AverageVelocities_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment2_custom_msgs_srvs, srv, AverageVelocities_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment2_custom_msgs_srvs, srv, AverageVelocities_Request)),
  }
};

typedef struct _AverageVelocities_Request_type_support_data_t
{
  void * data[2];
} _AverageVelocities_Request_type_support_data_t;

static _AverageVelocities_Request_type_support_data_t _AverageVelocities_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AverageVelocities_Request_message_typesupport_map = {
  2,
  "assignment2_custom_msgs_srvs",
  &_AverageVelocities_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AverageVelocities_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AverageVelocities_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AverageVelocities_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AverageVelocities_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &assignment2_custom_msgs_srvs__srv__AverageVelocities_Request__get_type_hash,
  &assignment2_custom_msgs_srvs__srv__AverageVelocities_Request__get_type_description,
  &assignment2_custom_msgs_srvs__srv__AverageVelocities_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::AverageVelocities_Request>()
{
  return &::assignment2_custom_msgs_srvs::srv::rosidl_typesupport_cpp::AverageVelocities_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment2_custom_msgs_srvs, srv, AverageVelocities_Request)() {
  return get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::AverageVelocities_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "assignment2_custom_msgs_srvs/srv/detail/average_velocities__functions.h"
// already included above
// #include "assignment2_custom_msgs_srvs/srv/detail/average_velocities__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace assignment2_custom_msgs_srvs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AverageVelocities_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AverageVelocities_Response_type_support_ids_t;

static const _AverageVelocities_Response_type_support_ids_t _AverageVelocities_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AverageVelocities_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AverageVelocities_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AverageVelocities_Response_type_support_symbol_names_t _AverageVelocities_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment2_custom_msgs_srvs, srv, AverageVelocities_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment2_custom_msgs_srvs, srv, AverageVelocities_Response)),
  }
};

typedef struct _AverageVelocities_Response_type_support_data_t
{
  void * data[2];
} _AverageVelocities_Response_type_support_data_t;

static _AverageVelocities_Response_type_support_data_t _AverageVelocities_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AverageVelocities_Response_message_typesupport_map = {
  2,
  "assignment2_custom_msgs_srvs",
  &_AverageVelocities_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AverageVelocities_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AverageVelocities_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AverageVelocities_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AverageVelocities_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &assignment2_custom_msgs_srvs__srv__AverageVelocities_Response__get_type_hash,
  &assignment2_custom_msgs_srvs__srv__AverageVelocities_Response__get_type_description,
  &assignment2_custom_msgs_srvs__srv__AverageVelocities_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::AverageVelocities_Response>()
{
  return &::assignment2_custom_msgs_srvs::srv::rosidl_typesupport_cpp::AverageVelocities_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment2_custom_msgs_srvs, srv, AverageVelocities_Response)() {
  return get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::AverageVelocities_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "assignment2_custom_msgs_srvs/srv/detail/average_velocities__functions.h"
// already included above
// #include "assignment2_custom_msgs_srvs/srv/detail/average_velocities__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace assignment2_custom_msgs_srvs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AverageVelocities_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AverageVelocities_Event_type_support_ids_t;

static const _AverageVelocities_Event_type_support_ids_t _AverageVelocities_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AverageVelocities_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AverageVelocities_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AverageVelocities_Event_type_support_symbol_names_t _AverageVelocities_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment2_custom_msgs_srvs, srv, AverageVelocities_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment2_custom_msgs_srvs, srv, AverageVelocities_Event)),
  }
};

typedef struct _AverageVelocities_Event_type_support_data_t
{
  void * data[2];
} _AverageVelocities_Event_type_support_data_t;

static _AverageVelocities_Event_type_support_data_t _AverageVelocities_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AverageVelocities_Event_message_typesupport_map = {
  2,
  "assignment2_custom_msgs_srvs",
  &_AverageVelocities_Event_message_typesupport_ids.typesupport_identifier[0],
  &_AverageVelocities_Event_message_typesupport_symbol_names.symbol_name[0],
  &_AverageVelocities_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AverageVelocities_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AverageVelocities_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &assignment2_custom_msgs_srvs__srv__AverageVelocities_Event__get_type_hash,
  &assignment2_custom_msgs_srvs__srv__AverageVelocities_Event__get_type_description,
  &assignment2_custom_msgs_srvs__srv__AverageVelocities_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::AverageVelocities_Event>()
{
  return &::assignment2_custom_msgs_srvs::srv::rosidl_typesupport_cpp::AverageVelocities_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment2_custom_msgs_srvs, srv, AverageVelocities_Event)() {
  return get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::AverageVelocities_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "assignment2_custom_msgs_srvs/srv/detail/average_velocities__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace assignment2_custom_msgs_srvs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AverageVelocities_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AverageVelocities_type_support_ids_t;

static const _AverageVelocities_type_support_ids_t _AverageVelocities_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AverageVelocities_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AverageVelocities_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AverageVelocities_type_support_symbol_names_t _AverageVelocities_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment2_custom_msgs_srvs, srv, AverageVelocities)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment2_custom_msgs_srvs, srv, AverageVelocities)),
  }
};

typedef struct _AverageVelocities_type_support_data_t
{
  void * data[2];
} _AverageVelocities_type_support_data_t;

static _AverageVelocities_type_support_data_t _AverageVelocities_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AverageVelocities_service_typesupport_map = {
  2,
  "assignment2_custom_msgs_srvs",
  &_AverageVelocities_service_typesupport_ids.typesupport_identifier[0],
  &_AverageVelocities_service_typesupport_symbol_names.symbol_name[0],
  &_AverageVelocities_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AverageVelocities_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AverageVelocities_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::AverageVelocities_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::AverageVelocities_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::AverageVelocities_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<assignment2_custom_msgs_srvs::srv::AverageVelocities>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<assignment2_custom_msgs_srvs::srv::AverageVelocities>,
  &assignment2_custom_msgs_srvs__srv__AverageVelocities__get_type_hash,
  &assignment2_custom_msgs_srvs__srv__AverageVelocities__get_type_description,
  &assignment2_custom_msgs_srvs__srv__AverageVelocities__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<assignment2_custom_msgs_srvs::srv::AverageVelocities>()
{
  return &::assignment2_custom_msgs_srvs::srv::rosidl_typesupport_cpp::AverageVelocities_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment2_custom_msgs_srvs, srv, AverageVelocities)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<assignment2_custom_msgs_srvs::srv::AverageVelocities>();
}

#ifdef __cplusplus
}
#endif
