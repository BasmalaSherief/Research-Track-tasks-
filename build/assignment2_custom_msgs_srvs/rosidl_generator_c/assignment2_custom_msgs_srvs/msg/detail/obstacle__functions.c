// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from assignment2_custom_msgs_srvs:msg/Obstacle.idl
// generated code does not contain a copyright notice
#include "assignment2_custom_msgs_srvs/msg/detail/obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `obstacle_direction`
#include "rosidl_runtime_c/string_functions.h"

bool
assignment2_custom_msgs_srvs__msg__Obstacle__init(assignment2_custom_msgs_srvs__msg__Obstacle * msg)
{
  if (!msg) {
    return false;
  }
  // obstacle_distance
  // obstacle_direction
  if (!rosidl_runtime_c__String__init(&msg->obstacle_direction)) {
    assignment2_custom_msgs_srvs__msg__Obstacle__fini(msg);
    return false;
  }
  // threshold
  return true;
}

void
assignment2_custom_msgs_srvs__msg__Obstacle__fini(assignment2_custom_msgs_srvs__msg__Obstacle * msg)
{
  if (!msg) {
    return;
  }
  // obstacle_distance
  // obstacle_direction
  rosidl_runtime_c__String__fini(&msg->obstacle_direction);
  // threshold
}

bool
assignment2_custom_msgs_srvs__msg__Obstacle__are_equal(const assignment2_custom_msgs_srvs__msg__Obstacle * lhs, const assignment2_custom_msgs_srvs__msg__Obstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obstacle_distance
  if (lhs->obstacle_distance != rhs->obstacle_distance) {
    return false;
  }
  // obstacle_direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->obstacle_direction), &(rhs->obstacle_direction)))
  {
    return false;
  }
  // threshold
  if (lhs->threshold != rhs->threshold) {
    return false;
  }
  return true;
}

bool
assignment2_custom_msgs_srvs__msg__Obstacle__copy(
  const assignment2_custom_msgs_srvs__msg__Obstacle * input,
  assignment2_custom_msgs_srvs__msg__Obstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // obstacle_distance
  output->obstacle_distance = input->obstacle_distance;
  // obstacle_direction
  if (!rosidl_runtime_c__String__copy(
      &(input->obstacle_direction), &(output->obstacle_direction)))
  {
    return false;
  }
  // threshold
  output->threshold = input->threshold;
  return true;
}

assignment2_custom_msgs_srvs__msg__Obstacle *
assignment2_custom_msgs_srvs__msg__Obstacle__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment2_custom_msgs_srvs__msg__Obstacle * msg = (assignment2_custom_msgs_srvs__msg__Obstacle *)allocator.allocate(sizeof(assignment2_custom_msgs_srvs__msg__Obstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assignment2_custom_msgs_srvs__msg__Obstacle));
  bool success = assignment2_custom_msgs_srvs__msg__Obstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
assignment2_custom_msgs_srvs__msg__Obstacle__destroy(assignment2_custom_msgs_srvs__msg__Obstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    assignment2_custom_msgs_srvs__msg__Obstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
assignment2_custom_msgs_srvs__msg__Obstacle__Sequence__init(assignment2_custom_msgs_srvs__msg__Obstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment2_custom_msgs_srvs__msg__Obstacle * data = NULL;

  if (size) {
    data = (assignment2_custom_msgs_srvs__msg__Obstacle *)allocator.zero_allocate(size, sizeof(assignment2_custom_msgs_srvs__msg__Obstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assignment2_custom_msgs_srvs__msg__Obstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assignment2_custom_msgs_srvs__msg__Obstacle__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
assignment2_custom_msgs_srvs__msg__Obstacle__Sequence__fini(assignment2_custom_msgs_srvs__msg__Obstacle__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      assignment2_custom_msgs_srvs__msg__Obstacle__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

assignment2_custom_msgs_srvs__msg__Obstacle__Sequence *
assignment2_custom_msgs_srvs__msg__Obstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment2_custom_msgs_srvs__msg__Obstacle__Sequence * array = (assignment2_custom_msgs_srvs__msg__Obstacle__Sequence *)allocator.allocate(sizeof(assignment2_custom_msgs_srvs__msg__Obstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = assignment2_custom_msgs_srvs__msg__Obstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
assignment2_custom_msgs_srvs__msg__Obstacle__Sequence__destroy(assignment2_custom_msgs_srvs__msg__Obstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    assignment2_custom_msgs_srvs__msg__Obstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
assignment2_custom_msgs_srvs__msg__Obstacle__Sequence__are_equal(const assignment2_custom_msgs_srvs__msg__Obstacle__Sequence * lhs, const assignment2_custom_msgs_srvs__msg__Obstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assignment2_custom_msgs_srvs__msg__Obstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assignment2_custom_msgs_srvs__msg__Obstacle__Sequence__copy(
  const assignment2_custom_msgs_srvs__msg__Obstacle__Sequence * input,
  assignment2_custom_msgs_srvs__msg__Obstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assignment2_custom_msgs_srvs__msg__Obstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    assignment2_custom_msgs_srvs__msg__Obstacle * data =
      (assignment2_custom_msgs_srvs__msg__Obstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assignment2_custom_msgs_srvs__msg__Obstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          assignment2_custom_msgs_srvs__msg__Obstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!assignment2_custom_msgs_srvs__msg__Obstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
