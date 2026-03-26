// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autocert_interfaces:msg/PoseMeasurement.idl
// generated code does not contain a copyright notice
#include "autocert_interfaces/msg/detail/pose_measurement__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose_label`
// Member `measurement_system`
// Member `measurement_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `commanded_pose`
// Member `measured_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
autocert_interfaces__msg__PoseMeasurement__init(autocert_interfaces__msg__PoseMeasurement * msg)
{
  if (!msg) {
    return false;
  }
  // pose_id
  // repetition
  // pose_label
  if (!rosidl_runtime_c__String__init(&msg->pose_label)) {
    autocert_interfaces__msg__PoseMeasurement__fini(msg);
    return false;
  }
  // commanded_pose
  if (!geometry_msgs__msg__Pose__init(&msg->commanded_pose)) {
    autocert_interfaces__msg__PoseMeasurement__fini(msg);
    return false;
  }
  // measured_pose
  if (!geometry_msgs__msg__Pose__init(&msg->measured_pose)) {
    autocert_interfaces__msg__PoseMeasurement__fini(msg);
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    autocert_interfaces__msg__PoseMeasurement__fini(msg);
    return false;
  }
  // measurement_system
  if (!rosidl_runtime_c__String__init(&msg->measurement_system)) {
    autocert_interfaces__msg__PoseMeasurement__fini(msg);
    return false;
  }
  // measurement_frame
  if (!rosidl_runtime_c__String__init(&msg->measurement_frame)) {
    autocert_interfaces__msg__PoseMeasurement__fini(msg);
    return false;
  }
  // measurement_quality
  return true;
}

void
autocert_interfaces__msg__PoseMeasurement__fini(autocert_interfaces__msg__PoseMeasurement * msg)
{
  if (!msg) {
    return;
  }
  // pose_id
  // repetition
  // pose_label
  rosidl_runtime_c__String__fini(&msg->pose_label);
  // commanded_pose
  geometry_msgs__msg__Pose__fini(&msg->commanded_pose);
  // measured_pose
  geometry_msgs__msg__Pose__fini(&msg->measured_pose);
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // measurement_system
  rosidl_runtime_c__String__fini(&msg->measurement_system);
  // measurement_frame
  rosidl_runtime_c__String__fini(&msg->measurement_frame);
  // measurement_quality
}

bool
autocert_interfaces__msg__PoseMeasurement__are_equal(const autocert_interfaces__msg__PoseMeasurement * lhs, const autocert_interfaces__msg__PoseMeasurement * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose_id
  if (lhs->pose_id != rhs->pose_id) {
    return false;
  }
  // repetition
  if (lhs->repetition != rhs->repetition) {
    return false;
  }
  // pose_label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pose_label), &(rhs->pose_label)))
  {
    return false;
  }
  // commanded_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->commanded_pose), &(rhs->commanded_pose)))
  {
    return false;
  }
  // measured_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->measured_pose), &(rhs->measured_pose)))
  {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // measurement_system
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->measurement_system), &(rhs->measurement_system)))
  {
    return false;
  }
  // measurement_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->measurement_frame), &(rhs->measurement_frame)))
  {
    return false;
  }
  // measurement_quality
  if (lhs->measurement_quality != rhs->measurement_quality) {
    return false;
  }
  return true;
}

bool
autocert_interfaces__msg__PoseMeasurement__copy(
  const autocert_interfaces__msg__PoseMeasurement * input,
  autocert_interfaces__msg__PoseMeasurement * output)
{
  if (!input || !output) {
    return false;
  }
  // pose_id
  output->pose_id = input->pose_id;
  // repetition
  output->repetition = input->repetition;
  // pose_label
  if (!rosidl_runtime_c__String__copy(
      &(input->pose_label), &(output->pose_label)))
  {
    return false;
  }
  // commanded_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->commanded_pose), &(output->commanded_pose)))
  {
    return false;
  }
  // measured_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->measured_pose), &(output->measured_pose)))
  {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // measurement_system
  if (!rosidl_runtime_c__String__copy(
      &(input->measurement_system), &(output->measurement_system)))
  {
    return false;
  }
  // measurement_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->measurement_frame), &(output->measurement_frame)))
  {
    return false;
  }
  // measurement_quality
  output->measurement_quality = input->measurement_quality;
  return true;
}

autocert_interfaces__msg__PoseMeasurement *
autocert_interfaces__msg__PoseMeasurement__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__msg__PoseMeasurement * msg = (autocert_interfaces__msg__PoseMeasurement *)allocator.allocate(sizeof(autocert_interfaces__msg__PoseMeasurement), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autocert_interfaces__msg__PoseMeasurement));
  bool success = autocert_interfaces__msg__PoseMeasurement__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autocert_interfaces__msg__PoseMeasurement__destroy(autocert_interfaces__msg__PoseMeasurement * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autocert_interfaces__msg__PoseMeasurement__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autocert_interfaces__msg__PoseMeasurement__Sequence__init(autocert_interfaces__msg__PoseMeasurement__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__msg__PoseMeasurement * data = NULL;

  if (size) {
    data = (autocert_interfaces__msg__PoseMeasurement *)allocator.zero_allocate(size, sizeof(autocert_interfaces__msg__PoseMeasurement), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autocert_interfaces__msg__PoseMeasurement__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autocert_interfaces__msg__PoseMeasurement__fini(&data[i - 1]);
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
autocert_interfaces__msg__PoseMeasurement__Sequence__fini(autocert_interfaces__msg__PoseMeasurement__Sequence * array)
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
      autocert_interfaces__msg__PoseMeasurement__fini(&array->data[i]);
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

autocert_interfaces__msg__PoseMeasurement__Sequence *
autocert_interfaces__msg__PoseMeasurement__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__msg__PoseMeasurement__Sequence * array = (autocert_interfaces__msg__PoseMeasurement__Sequence *)allocator.allocate(sizeof(autocert_interfaces__msg__PoseMeasurement__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autocert_interfaces__msg__PoseMeasurement__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autocert_interfaces__msg__PoseMeasurement__Sequence__destroy(autocert_interfaces__msg__PoseMeasurement__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autocert_interfaces__msg__PoseMeasurement__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autocert_interfaces__msg__PoseMeasurement__Sequence__are_equal(const autocert_interfaces__msg__PoseMeasurement__Sequence * lhs, const autocert_interfaces__msg__PoseMeasurement__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autocert_interfaces__msg__PoseMeasurement__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autocert_interfaces__msg__PoseMeasurement__Sequence__copy(
  const autocert_interfaces__msg__PoseMeasurement__Sequence * input,
  autocert_interfaces__msg__PoseMeasurement__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autocert_interfaces__msg__PoseMeasurement);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autocert_interfaces__msg__PoseMeasurement * data =
      (autocert_interfaces__msg__PoseMeasurement *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autocert_interfaces__msg__PoseMeasurement__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autocert_interfaces__msg__PoseMeasurement__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autocert_interfaces__msg__PoseMeasurement__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
