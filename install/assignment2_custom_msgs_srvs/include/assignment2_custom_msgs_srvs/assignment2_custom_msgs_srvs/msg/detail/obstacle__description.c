// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from assignment2_custom_msgs_srvs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#include "assignment2_custom_msgs_srvs/msg/detail/obstacle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_assignment2_custom_msgs_srvs
const rosidl_type_hash_t *
assignment2_custom_msgs_srvs__msg__Obstacle__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd6, 0x4a, 0x6e, 0xd5, 0x9e, 0xc7, 0xac, 0x99,
      0x4e, 0x65, 0xbc, 0xf5, 0x7e, 0x9b, 0xe4, 0x18,
      0x29, 0x6e, 0xe6, 0x04, 0xb2, 0xac, 0xe0, 0x85,
      0x28, 0x29, 0x98, 0xe5, 0x56, 0xfa, 0xee, 0x9d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char assignment2_custom_msgs_srvs__msg__Obstacle__TYPE_NAME[] = "assignment2_custom_msgs_srvs/msg/Obstacle";

// Define type names, field names, and default values
static char assignment2_custom_msgs_srvs__msg__Obstacle__FIELD_NAME__obstacle_distance[] = "obstacle_distance";
static char assignment2_custom_msgs_srvs__msg__Obstacle__FIELD_NAME__obstacle_direction[] = "obstacle_direction";
static char assignment2_custom_msgs_srvs__msg__Obstacle__FIELD_NAME__threshold[] = "threshold";

static rosidl_runtime_c__type_description__Field assignment2_custom_msgs_srvs__msg__Obstacle__FIELDS[] = {
  {
    {assignment2_custom_msgs_srvs__msg__Obstacle__FIELD_NAME__obstacle_distance, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msgs_srvs__msg__Obstacle__FIELD_NAME__obstacle_direction, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msgs_srvs__msg__Obstacle__FIELD_NAME__threshold, 9, 9},
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
assignment2_custom_msgs_srvs__msg__Obstacle__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {assignment2_custom_msgs_srvs__msg__Obstacle__TYPE_NAME, 41, 41},
      {assignment2_custom_msgs_srvs__msg__Obstacle__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 obstacle_distance\n"
  "string obstacle_direction\n"
  "float32 threshold";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
assignment2_custom_msgs_srvs__msg__Obstacle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {assignment2_custom_msgs_srvs__msg__Obstacle__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 69, 69},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
assignment2_custom_msgs_srvs__msg__Obstacle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *assignment2_custom_msgs_srvs__msg__Obstacle__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
