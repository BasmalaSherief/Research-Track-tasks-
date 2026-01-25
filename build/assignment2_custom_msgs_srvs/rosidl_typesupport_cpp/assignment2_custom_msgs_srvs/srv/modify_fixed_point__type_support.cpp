// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from assignment2_custom_msgs_srvs:srv/ModifyFixedPoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__functions.h"
#include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__struct.hpp"
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

typedef struct _ModifyFixedPoint_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ModifyFixedPoint_Request_type_support_ids_t;

static const _ModifyFixedPoint_Request_type_support_ids_t _ModifyFixedPoint_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ModifyFixedPoint_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ModifyFixedPoint_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ModifyFixedPoint_Request_type_support_symbol_names_t _ModifyFixedPoint_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Request)),
  }
};

typedef struct _ModifyFixedPoint_Request_type_support_data_t
{
  void * data[2];
} _ModifyFixedPoint_Request_type_support_data_t;

static _ModifyFixedPoint_Request_type_support_data_t _ModifyFixedPoint_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ModifyFixedPoint_Request_message_typesupport_map = {
  2,
  "assignment2_custom_msgs_srvs",
  &_ModifyFixedPoint_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ModifyFixedPoint_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ModifyFixedPoint_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ModifyFixedPoint_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ModifyFixedPoint_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__get_type_hash,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__get_type_description,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request>()
{
  return &::assignment2_custom_msgs_srvs::srv::rosidl_typesupport_cpp::ModifyFixedPoint_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Request)() {
  return get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request>();
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
// #include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__functions.h"
// already included above
// #include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__struct.hpp"
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

typedef struct _ModifyFixedPoint_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ModifyFixedPoint_Response_type_support_ids_t;

static const _ModifyFixedPoint_Response_type_support_ids_t _ModifyFixedPoint_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ModifyFixedPoint_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ModifyFixedPoint_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ModifyFixedPoint_Response_type_support_symbol_names_t _ModifyFixedPoint_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Response)),
  }
};

typedef struct _ModifyFixedPoint_Response_type_support_data_t
{
  void * data[2];
} _ModifyFixedPoint_Response_type_support_data_t;

static _ModifyFixedPoint_Response_type_support_data_t _ModifyFixedPoint_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ModifyFixedPoint_Response_message_typesupport_map = {
  2,
  "assignment2_custom_msgs_srvs",
  &_ModifyFixedPoint_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ModifyFixedPoint_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ModifyFixedPoint_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ModifyFixedPoint_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ModifyFixedPoint_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__get_type_hash,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__get_type_description,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response>()
{
  return &::assignment2_custom_msgs_srvs::srv::rosidl_typesupport_cpp::ModifyFixedPoint_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Response)() {
  return get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response>();
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
// #include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__functions.h"
// already included above
// #include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__struct.hpp"
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

typedef struct _ModifyFixedPoint_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ModifyFixedPoint_Event_type_support_ids_t;

static const _ModifyFixedPoint_Event_type_support_ids_t _ModifyFixedPoint_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ModifyFixedPoint_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ModifyFixedPoint_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ModifyFixedPoint_Event_type_support_symbol_names_t _ModifyFixedPoint_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Event)),
  }
};

typedef struct _ModifyFixedPoint_Event_type_support_data_t
{
  void * data[2];
} _ModifyFixedPoint_Event_type_support_data_t;

static _ModifyFixedPoint_Event_type_support_data_t _ModifyFixedPoint_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ModifyFixedPoint_Event_message_typesupport_map = {
  2,
  "assignment2_custom_msgs_srvs",
  &_ModifyFixedPoint_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ModifyFixedPoint_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ModifyFixedPoint_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ModifyFixedPoint_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ModifyFixedPoint_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__get_type_hash,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__get_type_description,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event>()
{
  return &::assignment2_custom_msgs_srvs::srv::rosidl_typesupport_cpp::ModifyFixedPoint_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint_Event)() {
  return get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event>();
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
// #include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__struct.hpp"
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

typedef struct _ModifyFixedPoint_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ModifyFixedPoint_type_support_ids_t;

static const _ModifyFixedPoint_type_support_ids_t _ModifyFixedPoint_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ModifyFixedPoint_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ModifyFixedPoint_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ModifyFixedPoint_type_support_symbol_names_t _ModifyFixedPoint_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint)),
  }
};

typedef struct _ModifyFixedPoint_type_support_data_t
{
  void * data[2];
} _ModifyFixedPoint_type_support_data_t;

static _ModifyFixedPoint_type_support_data_t _ModifyFixedPoint_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ModifyFixedPoint_service_typesupport_map = {
  2,
  "assignment2_custom_msgs_srvs",
  &_ModifyFixedPoint_service_typesupport_ids.typesupport_identifier[0],
  &_ModifyFixedPoint_service_typesupport_symbol_names.symbol_name[0],
  &_ModifyFixedPoint_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ModifyFixedPoint_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ModifyFixedPoint_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint>,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__get_type_hash,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__get_type_description,
  &assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace assignment2_custom_msgs_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint>()
{
  return &::assignment2_custom_msgs_srvs::srv::rosidl_typesupport_cpp::ModifyFixedPoint_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment2_custom_msgs_srvs, srv, ModifyFixedPoint)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<assignment2_custom_msgs_srvs::srv::ModifyFixedPoint>();
}

#ifdef __cplusplus
}
#endif
