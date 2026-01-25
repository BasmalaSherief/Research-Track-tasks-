// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from assignment2_custom_msgs_srvs:srv/ChangeThreshold.idl
// generated code does not contain a copyright notice
#include "assignment2_custom_msgs_srvs/srv/detail/change_threshold__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__init(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request * msg)
{
  if (!msg) {
    return false;
  }
  // new_threshold
  return true;
}

void
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__fini(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request * msg)
{
  if (!msg) {
    return;
  }
  // new_threshold
}

bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__are_equal(const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request * lhs, const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // new_threshold
  if (lhs->new_threshold != rhs->new_threshold) {
    return false;
  }
  return true;
}

bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__copy(
  const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request * input,
  assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // new_threshold
  output->new_threshold = input->new_threshold;
  return true;
}

assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request *
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request * msg = (assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request *)allocator.allocate(sizeof(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request));
  bool success = assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__destroy(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence__init(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request * data = NULL;

  if (size) {
    data = (assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request *)allocator.zero_allocate(size, sizeof(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__fini(&data[i - 1]);
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
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence__fini(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence * array)
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
      assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__fini(&array->data[i]);
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

assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence *
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence * array = (assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence *)allocator.allocate(sizeof(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence__destroy(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence__are_equal(const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence * lhs, const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence__copy(
  const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence * input,
  assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request * data =
      (assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__init(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__fini(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__are_equal(const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response * lhs, const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__copy(
  const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response * input,
  assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response *
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response * msg = (assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response *)allocator.allocate(sizeof(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response));
  bool success = assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__destroy(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence__init(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response * data = NULL;

  if (size) {
    data = (assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response *)allocator.zero_allocate(size, sizeof(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__fini(&data[i - 1]);
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
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence__fini(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence * array)
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
      assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__fini(&array->data[i]);
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

assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence *
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence * array = (assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence *)allocator.allocate(sizeof(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence__destroy(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence__are_equal(const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence * lhs, const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence__copy(
  const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence * input,
  assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response * data =
      (assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "assignment2_custom_msgs_srvs/srv/detail/change_threshold__functions.h"

bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__init(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__fini(msg);
    return false;
  }
  // request
  if (!assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence__init(&msg->request, 0)) {
    assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__fini(msg);
    return false;
  }
  // response
  if (!assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence__init(&msg->response, 0)) {
    assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__fini(msg);
    return false;
  }
  return true;
}

void
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__fini(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence__fini(&msg->request);
  // response
  assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence__fini(&msg->response);
}

bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__are_equal(const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event * lhs, const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__copy(
  const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event * input,
  assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!assignment2_custom_msgs_srvs__srv__ChangeThreshold_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!assignment2_custom_msgs_srvs__srv__ChangeThreshold_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event *
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event * msg = (assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event *)allocator.allocate(sizeof(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event));
  bool success = assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__destroy(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence__init(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event * data = NULL;

  if (size) {
    data = (assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event *)allocator.zero_allocate(size, sizeof(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__fini(&data[i - 1]);
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
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence__fini(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence * array)
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
      assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__fini(&array->data[i]);
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

assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence *
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence * array = (assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence *)allocator.allocate(sizeof(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence__destroy(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence__are_equal(const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence * lhs, const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence__copy(
  const assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence * input,
  assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event * data =
      (assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!assignment2_custom_msgs_srvs__srv__ChangeThreshold_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
