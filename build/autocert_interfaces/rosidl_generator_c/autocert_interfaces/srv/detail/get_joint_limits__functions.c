// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autocert_interfaces:srv/GetJointLimits.idl
// generated code does not contain a copyright notice
#include "autocert_interfaces/srv/detail/get_joint_limits__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `planning_group`
#include "rosidl_runtime_c/string_functions.h"

bool
autocert_interfaces__srv__GetJointLimits_Request__init(autocert_interfaces__srv__GetJointLimits_Request * msg)
{
  if (!msg) {
    return false;
  }
  // planning_group
  if (!rosidl_runtime_c__String__init(&msg->planning_group)) {
    autocert_interfaces__srv__GetJointLimits_Request__fini(msg);
    return false;
  }
  return true;
}

void
autocert_interfaces__srv__GetJointLimits_Request__fini(autocert_interfaces__srv__GetJointLimits_Request * msg)
{
  if (!msg) {
    return;
  }
  // planning_group
  rosidl_runtime_c__String__fini(&msg->planning_group);
}

bool
autocert_interfaces__srv__GetJointLimits_Request__are_equal(const autocert_interfaces__srv__GetJointLimits_Request * lhs, const autocert_interfaces__srv__GetJointLimits_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // planning_group
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->planning_group), &(rhs->planning_group)))
  {
    return false;
  }
  return true;
}

bool
autocert_interfaces__srv__GetJointLimits_Request__copy(
  const autocert_interfaces__srv__GetJointLimits_Request * input,
  autocert_interfaces__srv__GetJointLimits_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // planning_group
  if (!rosidl_runtime_c__String__copy(
      &(input->planning_group), &(output->planning_group)))
  {
    return false;
  }
  return true;
}

autocert_interfaces__srv__GetJointLimits_Request *
autocert_interfaces__srv__GetJointLimits_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetJointLimits_Request * msg = (autocert_interfaces__srv__GetJointLimits_Request *)allocator.allocate(sizeof(autocert_interfaces__srv__GetJointLimits_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autocert_interfaces__srv__GetJointLimits_Request));
  bool success = autocert_interfaces__srv__GetJointLimits_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autocert_interfaces__srv__GetJointLimits_Request__destroy(autocert_interfaces__srv__GetJointLimits_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autocert_interfaces__srv__GetJointLimits_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autocert_interfaces__srv__GetJointLimits_Request__Sequence__init(autocert_interfaces__srv__GetJointLimits_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetJointLimits_Request * data = NULL;

  if (size) {
    data = (autocert_interfaces__srv__GetJointLimits_Request *)allocator.zero_allocate(size, sizeof(autocert_interfaces__srv__GetJointLimits_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autocert_interfaces__srv__GetJointLimits_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autocert_interfaces__srv__GetJointLimits_Request__fini(&data[i - 1]);
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
autocert_interfaces__srv__GetJointLimits_Request__Sequence__fini(autocert_interfaces__srv__GetJointLimits_Request__Sequence * array)
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
      autocert_interfaces__srv__GetJointLimits_Request__fini(&array->data[i]);
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

autocert_interfaces__srv__GetJointLimits_Request__Sequence *
autocert_interfaces__srv__GetJointLimits_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetJointLimits_Request__Sequence * array = (autocert_interfaces__srv__GetJointLimits_Request__Sequence *)allocator.allocate(sizeof(autocert_interfaces__srv__GetJointLimits_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autocert_interfaces__srv__GetJointLimits_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autocert_interfaces__srv__GetJointLimits_Request__Sequence__destroy(autocert_interfaces__srv__GetJointLimits_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autocert_interfaces__srv__GetJointLimits_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autocert_interfaces__srv__GetJointLimits_Request__Sequence__are_equal(const autocert_interfaces__srv__GetJointLimits_Request__Sequence * lhs, const autocert_interfaces__srv__GetJointLimits_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autocert_interfaces__srv__GetJointLimits_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autocert_interfaces__srv__GetJointLimits_Request__Sequence__copy(
  const autocert_interfaces__srv__GetJointLimits_Request__Sequence * input,
  autocert_interfaces__srv__GetJointLimits_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autocert_interfaces__srv__GetJointLimits_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autocert_interfaces__srv__GetJointLimits_Request * data =
      (autocert_interfaces__srv__GetJointLimits_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autocert_interfaces__srv__GetJointLimits_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autocert_interfaces__srv__GetJointLimits_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autocert_interfaces__srv__GetJointLimits_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `joint_names`
// Member `planning_group`
// Member `end_effector_link`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `min_limits`
// Member `max_limits`
// Member `velocity_limits`
// Member `acceleration_limits`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
autocert_interfaces__srv__GetJointLimits_Response__init(autocert_interfaces__srv__GetJointLimits_Response * msg)
{
  if (!msg) {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 0)) {
    autocert_interfaces__srv__GetJointLimits_Response__fini(msg);
    return false;
  }
  // min_limits
  if (!rosidl_runtime_c__double__Sequence__init(&msg->min_limits, 0)) {
    autocert_interfaces__srv__GetJointLimits_Response__fini(msg);
    return false;
  }
  // max_limits
  if (!rosidl_runtime_c__double__Sequence__init(&msg->max_limits, 0)) {
    autocert_interfaces__srv__GetJointLimits_Response__fini(msg);
    return false;
  }
  // velocity_limits
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocity_limits, 0)) {
    autocert_interfaces__srv__GetJointLimits_Response__fini(msg);
    return false;
  }
  // acceleration_limits
  if (!rosidl_runtime_c__double__Sequence__init(&msg->acceleration_limits, 0)) {
    autocert_interfaces__srv__GetJointLimits_Response__fini(msg);
    return false;
  }
  // planning_group
  if (!rosidl_runtime_c__String__init(&msg->planning_group)) {
    autocert_interfaces__srv__GetJointLimits_Response__fini(msg);
    return false;
  }
  // end_effector_link
  if (!rosidl_runtime_c__String__init(&msg->end_effector_link)) {
    autocert_interfaces__srv__GetJointLimits_Response__fini(msg);
    return false;
  }
  // num_joints
  return true;
}

void
autocert_interfaces__srv__GetJointLimits_Response__fini(autocert_interfaces__srv__GetJointLimits_Response * msg)
{
  if (!msg) {
    return;
  }
  // joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_names);
  // min_limits
  rosidl_runtime_c__double__Sequence__fini(&msg->min_limits);
  // max_limits
  rosidl_runtime_c__double__Sequence__fini(&msg->max_limits);
  // velocity_limits
  rosidl_runtime_c__double__Sequence__fini(&msg->velocity_limits);
  // acceleration_limits
  rosidl_runtime_c__double__Sequence__fini(&msg->acceleration_limits);
  // planning_group
  rosidl_runtime_c__String__fini(&msg->planning_group);
  // end_effector_link
  rosidl_runtime_c__String__fini(&msg->end_effector_link);
  // num_joints
}

bool
autocert_interfaces__srv__GetJointLimits_Response__are_equal(const autocert_interfaces__srv__GetJointLimits_Response * lhs, const autocert_interfaces__srv__GetJointLimits_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->joint_names), &(rhs->joint_names)))
  {
    return false;
  }
  // min_limits
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->min_limits), &(rhs->min_limits)))
  {
    return false;
  }
  // max_limits
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->max_limits), &(rhs->max_limits)))
  {
    return false;
  }
  // velocity_limits
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->velocity_limits), &(rhs->velocity_limits)))
  {
    return false;
  }
  // acceleration_limits
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->acceleration_limits), &(rhs->acceleration_limits)))
  {
    return false;
  }
  // planning_group
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->planning_group), &(rhs->planning_group)))
  {
    return false;
  }
  // end_effector_link
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->end_effector_link), &(rhs->end_effector_link)))
  {
    return false;
  }
  // num_joints
  if (lhs->num_joints != rhs->num_joints) {
    return false;
  }
  return true;
}

bool
autocert_interfaces__srv__GetJointLimits_Response__copy(
  const autocert_interfaces__srv__GetJointLimits_Response * input,
  autocert_interfaces__srv__GetJointLimits_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->joint_names), &(output->joint_names)))
  {
    return false;
  }
  // min_limits
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->min_limits), &(output->min_limits)))
  {
    return false;
  }
  // max_limits
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->max_limits), &(output->max_limits)))
  {
    return false;
  }
  // velocity_limits
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->velocity_limits), &(output->velocity_limits)))
  {
    return false;
  }
  // acceleration_limits
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->acceleration_limits), &(output->acceleration_limits)))
  {
    return false;
  }
  // planning_group
  if (!rosidl_runtime_c__String__copy(
      &(input->planning_group), &(output->planning_group)))
  {
    return false;
  }
  // end_effector_link
  if (!rosidl_runtime_c__String__copy(
      &(input->end_effector_link), &(output->end_effector_link)))
  {
    return false;
  }
  // num_joints
  output->num_joints = input->num_joints;
  return true;
}

autocert_interfaces__srv__GetJointLimits_Response *
autocert_interfaces__srv__GetJointLimits_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetJointLimits_Response * msg = (autocert_interfaces__srv__GetJointLimits_Response *)allocator.allocate(sizeof(autocert_interfaces__srv__GetJointLimits_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autocert_interfaces__srv__GetJointLimits_Response));
  bool success = autocert_interfaces__srv__GetJointLimits_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autocert_interfaces__srv__GetJointLimits_Response__destroy(autocert_interfaces__srv__GetJointLimits_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autocert_interfaces__srv__GetJointLimits_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autocert_interfaces__srv__GetJointLimits_Response__Sequence__init(autocert_interfaces__srv__GetJointLimits_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetJointLimits_Response * data = NULL;

  if (size) {
    data = (autocert_interfaces__srv__GetJointLimits_Response *)allocator.zero_allocate(size, sizeof(autocert_interfaces__srv__GetJointLimits_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autocert_interfaces__srv__GetJointLimits_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autocert_interfaces__srv__GetJointLimits_Response__fini(&data[i - 1]);
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
autocert_interfaces__srv__GetJointLimits_Response__Sequence__fini(autocert_interfaces__srv__GetJointLimits_Response__Sequence * array)
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
      autocert_interfaces__srv__GetJointLimits_Response__fini(&array->data[i]);
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

autocert_interfaces__srv__GetJointLimits_Response__Sequence *
autocert_interfaces__srv__GetJointLimits_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetJointLimits_Response__Sequence * array = (autocert_interfaces__srv__GetJointLimits_Response__Sequence *)allocator.allocate(sizeof(autocert_interfaces__srv__GetJointLimits_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autocert_interfaces__srv__GetJointLimits_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autocert_interfaces__srv__GetJointLimits_Response__Sequence__destroy(autocert_interfaces__srv__GetJointLimits_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autocert_interfaces__srv__GetJointLimits_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autocert_interfaces__srv__GetJointLimits_Response__Sequence__are_equal(const autocert_interfaces__srv__GetJointLimits_Response__Sequence * lhs, const autocert_interfaces__srv__GetJointLimits_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autocert_interfaces__srv__GetJointLimits_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autocert_interfaces__srv__GetJointLimits_Response__Sequence__copy(
  const autocert_interfaces__srv__GetJointLimits_Response__Sequence * input,
  autocert_interfaces__srv__GetJointLimits_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autocert_interfaces__srv__GetJointLimits_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autocert_interfaces__srv__GetJointLimits_Response * data =
      (autocert_interfaces__srv__GetJointLimits_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autocert_interfaces__srv__GetJointLimits_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autocert_interfaces__srv__GetJointLimits_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autocert_interfaces__srv__GetJointLimits_Response__copy(
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
// #include "autocert_interfaces/srv/detail/get_joint_limits__functions.h"

bool
autocert_interfaces__srv__GetJointLimits_Event__init(autocert_interfaces__srv__GetJointLimits_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    autocert_interfaces__srv__GetJointLimits_Event__fini(msg);
    return false;
  }
  // request
  if (!autocert_interfaces__srv__GetJointLimits_Request__Sequence__init(&msg->request, 0)) {
    autocert_interfaces__srv__GetJointLimits_Event__fini(msg);
    return false;
  }
  // response
  if (!autocert_interfaces__srv__GetJointLimits_Response__Sequence__init(&msg->response, 0)) {
    autocert_interfaces__srv__GetJointLimits_Event__fini(msg);
    return false;
  }
  return true;
}

void
autocert_interfaces__srv__GetJointLimits_Event__fini(autocert_interfaces__srv__GetJointLimits_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  autocert_interfaces__srv__GetJointLimits_Request__Sequence__fini(&msg->request);
  // response
  autocert_interfaces__srv__GetJointLimits_Response__Sequence__fini(&msg->response);
}

bool
autocert_interfaces__srv__GetJointLimits_Event__are_equal(const autocert_interfaces__srv__GetJointLimits_Event * lhs, const autocert_interfaces__srv__GetJointLimits_Event * rhs)
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
  if (!autocert_interfaces__srv__GetJointLimits_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!autocert_interfaces__srv__GetJointLimits_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
autocert_interfaces__srv__GetJointLimits_Event__copy(
  const autocert_interfaces__srv__GetJointLimits_Event * input,
  autocert_interfaces__srv__GetJointLimits_Event * output)
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
  if (!autocert_interfaces__srv__GetJointLimits_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!autocert_interfaces__srv__GetJointLimits_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

autocert_interfaces__srv__GetJointLimits_Event *
autocert_interfaces__srv__GetJointLimits_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetJointLimits_Event * msg = (autocert_interfaces__srv__GetJointLimits_Event *)allocator.allocate(sizeof(autocert_interfaces__srv__GetJointLimits_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autocert_interfaces__srv__GetJointLimits_Event));
  bool success = autocert_interfaces__srv__GetJointLimits_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autocert_interfaces__srv__GetJointLimits_Event__destroy(autocert_interfaces__srv__GetJointLimits_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autocert_interfaces__srv__GetJointLimits_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autocert_interfaces__srv__GetJointLimits_Event__Sequence__init(autocert_interfaces__srv__GetJointLimits_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetJointLimits_Event * data = NULL;

  if (size) {
    data = (autocert_interfaces__srv__GetJointLimits_Event *)allocator.zero_allocate(size, sizeof(autocert_interfaces__srv__GetJointLimits_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autocert_interfaces__srv__GetJointLimits_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autocert_interfaces__srv__GetJointLimits_Event__fini(&data[i - 1]);
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
autocert_interfaces__srv__GetJointLimits_Event__Sequence__fini(autocert_interfaces__srv__GetJointLimits_Event__Sequence * array)
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
      autocert_interfaces__srv__GetJointLimits_Event__fini(&array->data[i]);
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

autocert_interfaces__srv__GetJointLimits_Event__Sequence *
autocert_interfaces__srv__GetJointLimits_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetJointLimits_Event__Sequence * array = (autocert_interfaces__srv__GetJointLimits_Event__Sequence *)allocator.allocate(sizeof(autocert_interfaces__srv__GetJointLimits_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autocert_interfaces__srv__GetJointLimits_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autocert_interfaces__srv__GetJointLimits_Event__Sequence__destroy(autocert_interfaces__srv__GetJointLimits_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autocert_interfaces__srv__GetJointLimits_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autocert_interfaces__srv__GetJointLimits_Event__Sequence__are_equal(const autocert_interfaces__srv__GetJointLimits_Event__Sequence * lhs, const autocert_interfaces__srv__GetJointLimits_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autocert_interfaces__srv__GetJointLimits_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autocert_interfaces__srv__GetJointLimits_Event__Sequence__copy(
  const autocert_interfaces__srv__GetJointLimits_Event__Sequence * input,
  autocert_interfaces__srv__GetJointLimits_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autocert_interfaces__srv__GetJointLimits_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autocert_interfaces__srv__GetJointLimits_Event * data =
      (autocert_interfaces__srv__GetJointLimits_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autocert_interfaces__srv__GetJointLimits_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autocert_interfaces__srv__GetJointLimits_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autocert_interfaces__srv__GetJointLimits_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
