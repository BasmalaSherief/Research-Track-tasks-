// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assignment2_custom_msgs_srvs:msg/Obstacle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msgs_srvs/msg/obstacle.h"


#ifndef ASSIGNMENT2_CUSTOM_MSGS_SRVS__MSG__DETAIL__OBSTACLE__STRUCT_H_
#define ASSIGNMENT2_CUSTOM_MSGS_SRVS__MSG__DETAIL__OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'obstacle_direction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Obstacle in the package assignment2_custom_msgs_srvs.
typedef struct assignment2_custom_msgs_srvs__msg__Obstacle
{
  float obstacle_distance;
  rosidl_runtime_c__String obstacle_direction;
  float threshold;
} assignment2_custom_msgs_srvs__msg__Obstacle;

// Struct for a sequence of assignment2_custom_msgs_srvs__msg__Obstacle.
typedef struct assignment2_custom_msgs_srvs__msg__Obstacle__Sequence
{
  assignment2_custom_msgs_srvs__msg__Obstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment2_custom_msgs_srvs__msg__Obstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSIGNMENT2_CUSTOM_MSGS_SRVS__MSG__DETAIL__OBSTACLE__STRUCT_H_
