// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from assignment2_custom_msgs_srvs:srv/ModifyFixedPoint.idl
// generated code does not contain a copyright notice

#include "assignment2_custom_msgs_srvs/srv/detail/modify_fixed_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_assignment2_custom_msgs_srvs
const rosidl_type_hash_t *
assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x59, 0xfb, 0xa1, 0xe5, 0x04, 0x9e, 0xc2, 0xc6,
      0x46, 0x97, 0x38, 0x8b, 0x01, 0x09, 0x73, 0xb3,
      0x79, 0x43, 0xc1, 0x6d, 0xe1, 0xb1, 0x2f, 0xb1,
      0x1e, 0xe0, 0xd0, 0x7f, 0x40, 0xa5, 0x5b, 0xa9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_assignment2_custom_msgs_srvs
const rosidl_type_hash_t *
assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x65, 0x09, 0x4f, 0x72, 0x79, 0x02, 0xae, 0x9a,
      0x65, 0x72, 0x1b, 0xca, 0x0e, 0x81, 0x72, 0xcf,
      0x18, 0x8b, 0x33, 0x8f, 0x90, 0xcc, 0x90, 0x51,
      0x3d, 0x65, 0xa4, 0xcd, 0xef, 0x7b, 0xb2, 0x71,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_assignment2_custom_msgs_srvs
const rosidl_type_hash_t *
assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0x62, 0x1f, 0xfd, 0xdf, 0x58, 0xed, 0x4f,
      0xd2, 0x55, 0xec, 0x5d, 0x01, 0xb6, 0x99, 0xae,
      0xdf, 0x11, 0x85, 0x9e, 0xfa, 0x3a, 0xc5, 0xb5,
      0xe5, 0xd7, 0x86, 0x8f, 0x2a, 0xd4, 0x5c, 0x31,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_assignment2_custom_msgs_srvs
const rosidl_type_hash_t *
assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0xf1, 0xb4, 0x54, 0x59, 0x88, 0xa3, 0xa9,
      0xf9, 0x5a, 0x24, 0xe2, 0x67, 0x2c, 0xef, 0xfd,
      0xbb, 0xfd, 0xd3, 0x55, 0x8a, 0xd0, 0x9b, 0xaa,
      0x75, 0x9c, 0x07, 0x70, 0xb8, 0xae, 0x5e, 0x2a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__TYPE_NAME[] = "assignment2_custom_msgs_srvs/srv/ModifyFixedPoint";
static char assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__TYPE_NAME[] = "assignment2_custom_msgs_srvs/srv/ModifyFixedPoint_Event";
static char assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__TYPE_NAME[] = "assignment2_custom_msgs_srvs/srv/ModifyFixedPoint_Request";
static char assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__TYPE_NAME[] = "assignment2_custom_msgs_srvs/srv/ModifyFixedPoint_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__FIELD_NAME__request_message[] = "request_message";
static char assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__FIELD_NAME__response_message[] = "response_message";
static char assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__FIELDS[] = {
  {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__TYPE_NAME, 58, 58},
    },
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__TYPE_NAME, 58, 58},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__TYPE_NAME, 49, 49},
      {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__FIELDS, 3, 3},
    },
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__FIELD_NAME__new_x[] = "new_x";
static char assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__FIELD_NAME__new_y[] = "new_y";

static rosidl_runtime_c__type_description__Field assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__FIELDS[] = {
  {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__FIELD_NAME__new_x, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__FIELD_NAME__new_y, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__TYPE_NAME, 57, 57},
      {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__FIELD_NAME__changed[] = "changed";

static rosidl_runtime_c__type_description__Field assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__FIELDS[] = {
  {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__FIELD_NAME__changed, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__TYPE_NAME, 58, 58},
      {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__FIELD_NAME__info[] = "info";
static char assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__FIELD_NAME__request[] = "request";
static char assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__FIELDS[] = {
  {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__TYPE_NAME, 58, 58},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__TYPE_NAME, 58, 58},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__TYPE_NAME, 55, 55},
      {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__FIELDS, 3, 3},
    },
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 new_x\n"
  "float32 new_y\n"
  "---\n"
  "bool changed";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__TYPE_NAME, 49, 49},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 44, 44},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__TYPE_NAME, 57, 57},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__TYPE_NAME, 58, 58},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__TYPE_NAME, 55, 55},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *assignment2_custom_msgs_srvs__srv__ModifyFixedPoint__get_individual_type_description_source(NULL),
    sources[1] = *assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__get_individual_type_description_source(NULL);
    sources[2] = *assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__get_individual_type_description_source(NULL);
    sources[3] = *assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Event__get_individual_type_description_source(NULL),
    sources[1] = *assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Request__get_individual_type_description_source(NULL);
    sources[2] = *assignment2_custom_msgs_srvs__srv__ModifyFixedPoint_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
