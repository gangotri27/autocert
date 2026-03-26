// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autocert_interfaces:srv/GetRobotInfo.idl
// generated code does not contain a copyright notice
#include "autocert_interfaces/srv/detail/get_robot_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
autocert_interfaces__srv__GetRobotInfo_Request__init(autocert_interfaces__srv__GetRobotInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
autocert_interfaces__srv__GetRobotInfo_Request__fini(autocert_interfaces__srv__GetRobotInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
autocert_interfaces__srv__GetRobotInfo_Request__are_equal(const autocert_interfaces__srv__GetRobotInfo_Request * lhs, const autocert_interfaces__srv__GetRobotInfo_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
autocert_interfaces__srv__GetRobotInfo_Request__copy(
  const autocert_interfaces__srv__GetRobotInfo_Request * input,
  autocert_interfaces__srv__GetRobotInfo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

autocert_interfaces__srv__GetRobotInfo_Request *
autocert_interfaces__srv__GetRobotInfo_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetRobotInfo_Request * msg = (autocert_interfaces__srv__GetRobotInfo_Request *)allocator.allocate(sizeof(autocert_interfaces__srv__GetRobotInfo_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autocert_interfaces__srv__GetRobotInfo_Request));
  bool success = autocert_interfaces__srv__GetRobotInfo_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autocert_interfaces__srv__GetRobotInfo_Request__destroy(autocert_interfaces__srv__GetRobotInfo_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autocert_interfaces__srv__GetRobotInfo_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autocert_interfaces__srv__GetRobotInfo_Request__Sequence__init(autocert_interfaces__srv__GetRobotInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetRobotInfo_Request * data = NULL;

  if (size) {
    data = (autocert_interfaces__srv__GetRobotInfo_Request *)allocator.zero_allocate(size, sizeof(autocert_interfaces__srv__GetRobotInfo_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autocert_interfaces__srv__GetRobotInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autocert_interfaces__srv__GetRobotInfo_Request__fini(&data[i - 1]);
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
autocert_interfaces__srv__GetRobotInfo_Request__Sequence__fini(autocert_interfaces__srv__GetRobotInfo_Request__Sequence * array)
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
      autocert_interfaces__srv__GetRobotInfo_Request__fini(&array->data[i]);
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

autocert_interfaces__srv__GetRobotInfo_Request__Sequence *
autocert_interfaces__srv__GetRobotInfo_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetRobotInfo_Request__Sequence * array = (autocert_interfaces__srv__GetRobotInfo_Request__Sequence *)allocator.allocate(sizeof(autocert_interfaces__srv__GetRobotInfo_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autocert_interfaces__srv__GetRobotInfo_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autocert_interfaces__srv__GetRobotInfo_Request__Sequence__destroy(autocert_interfaces__srv__GetRobotInfo_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autocert_interfaces__srv__GetRobotInfo_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autocert_interfaces__srv__GetRobotInfo_Request__Sequence__are_equal(const autocert_interfaces__srv__GetRobotInfo_Request__Sequence * lhs, const autocert_interfaces__srv__GetRobotInfo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autocert_interfaces__srv__GetRobotInfo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autocert_interfaces__srv__GetRobotInfo_Request__Sequence__copy(
  const autocert_interfaces__srv__GetRobotInfo_Request__Sequence * input,
  autocert_interfaces__srv__GetRobotInfo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autocert_interfaces__srv__GetRobotInfo_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autocert_interfaces__srv__GetRobotInfo_Request * data =
      (autocert_interfaces__srv__GetRobotInfo_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autocert_interfaces__srv__GetRobotInfo_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autocert_interfaces__srv__GetRobotInfo_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autocert_interfaces__srv__GetRobotInfo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `robot_name`
// Member `planning_group`
// Member `end_effector_link`
// Member `joint_names`
// Member `link_names`
// Member `group_names`
// Member `kinematics_solver_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `joint_min_limits`
// Member `joint_max_limits`
// Member `joint_velocity_limits`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
autocert_interfaces__srv__GetRobotInfo_Response__init(autocert_interfaces__srv__GetRobotInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    autocert_interfaces__srv__GetRobotInfo_Response__fini(msg);
    return false;
  }
  // planning_group
  if (!rosidl_runtime_c__String__init(&msg->planning_group)) {
    autocert_interfaces__srv__GetRobotInfo_Response__fini(msg);
    return false;
  }
  // end_effector_link
  if (!rosidl_runtime_c__String__init(&msg->end_effector_link)) {
    autocert_interfaces__srv__GetRobotInfo_Response__fini(msg);
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 0)) {
    autocert_interfaces__srv__GetRobotInfo_Response__fini(msg);
    return false;
  }
  // link_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->link_names, 0)) {
    autocert_interfaces__srv__GetRobotInfo_Response__fini(msg);
    return false;
  }
  // group_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->group_names, 0)) {
    autocert_interfaces__srv__GetRobotInfo_Response__fini(msg);
    return false;
  }
  // joint_min_limits
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_min_limits, 0)) {
    autocert_interfaces__srv__GetRobotInfo_Response__fini(msg);
    return false;
  }
  // joint_max_limits
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_max_limits, 0)) {
    autocert_interfaces__srv__GetRobotInfo_Response__fini(msg);
    return false;
  }
  // joint_velocity_limits
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_velocity_limits, 0)) {
    autocert_interfaces__srv__GetRobotInfo_Response__fini(msg);
    return false;
  }
  // num_joints
  // num_links
  // collision_checking_available
  // kinematics_solver_available
  // kinematics_solver_name
  if (!rosidl_runtime_c__String__init(&msg->kinematics_solver_name)) {
    autocert_interfaces__srv__GetRobotInfo_Response__fini(msg);
    return false;
  }
  // default_timeout
  return true;
}

void
autocert_interfaces__srv__GetRobotInfo_Response__fini(autocert_interfaces__srv__GetRobotInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // planning_group
  rosidl_runtime_c__String__fini(&msg->planning_group);
  // end_effector_link
  rosidl_runtime_c__String__fini(&msg->end_effector_link);
  // joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_names);
  // link_names
  rosidl_runtime_c__String__Sequence__fini(&msg->link_names);
  // group_names
  rosidl_runtime_c__String__Sequence__fini(&msg->group_names);
  // joint_min_limits
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_min_limits);
  // joint_max_limits
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_max_limits);
  // joint_velocity_limits
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_velocity_limits);
  // num_joints
  // num_links
  // collision_checking_available
  // kinematics_solver_available
  // kinematics_solver_name
  rosidl_runtime_c__String__fini(&msg->kinematics_solver_name);
  // default_timeout
}

bool
autocert_interfaces__srv__GetRobotInfo_Response__are_equal(const autocert_interfaces__srv__GetRobotInfo_Response * lhs, const autocert_interfaces__srv__GetRobotInfo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_name), &(rhs->robot_name)))
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
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->joint_names), &(rhs->joint_names)))
  {
    return false;
  }
  // link_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->link_names), &(rhs->link_names)))
  {
    return false;
  }
  // group_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->group_names), &(rhs->group_names)))
  {
    return false;
  }
  // joint_min_limits
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joint_min_limits), &(rhs->joint_min_limits)))
  {
    return false;
  }
  // joint_max_limits
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joint_max_limits), &(rhs->joint_max_limits)))
  {
    return false;
  }
  // joint_velocity_limits
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joint_velocity_limits), &(rhs->joint_velocity_limits)))
  {
    return false;
  }
  // num_joints
  if (lhs->num_joints != rhs->num_joints) {
    return false;
  }
  // num_links
  if (lhs->num_links != rhs->num_links) {
    return false;
  }
  // collision_checking_available
  if (lhs->collision_checking_available != rhs->collision_checking_available) {
    return false;
  }
  // kinematics_solver_available
  if (lhs->kinematics_solver_available != rhs->kinematics_solver_available) {
    return false;
  }
  // kinematics_solver_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->kinematics_solver_name), &(rhs->kinematics_solver_name)))
  {
    return false;
  }
  // default_timeout
  if (lhs->default_timeout != rhs->default_timeout) {
    return false;
  }
  return true;
}

bool
autocert_interfaces__srv__GetRobotInfo_Response__copy(
  const autocert_interfaces__srv__GetRobotInfo_Response * input,
  autocert_interfaces__srv__GetRobotInfo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_name), &(output->robot_name)))
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
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->joint_names), &(output->joint_names)))
  {
    return false;
  }
  // link_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->link_names), &(output->link_names)))
  {
    return false;
  }
  // group_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->group_names), &(output->group_names)))
  {
    return false;
  }
  // joint_min_limits
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joint_min_limits), &(output->joint_min_limits)))
  {
    return false;
  }
  // joint_max_limits
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joint_max_limits), &(output->joint_max_limits)))
  {
    return false;
  }
  // joint_velocity_limits
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joint_velocity_limits), &(output->joint_velocity_limits)))
  {
    return false;
  }
  // num_joints
  output->num_joints = input->num_joints;
  // num_links
  output->num_links = input->num_links;
  // collision_checking_available
  output->collision_checking_available = input->collision_checking_available;
  // kinematics_solver_available
  output->kinematics_solver_available = input->kinematics_solver_available;
  // kinematics_solver_name
  if (!rosidl_runtime_c__String__copy(
      &(input->kinematics_solver_name), &(output->kinematics_solver_name)))
  {
    return false;
  }
  // default_timeout
  output->default_timeout = input->default_timeout;
  return true;
}

autocert_interfaces__srv__GetRobotInfo_Response *
autocert_interfaces__srv__GetRobotInfo_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetRobotInfo_Response * msg = (autocert_interfaces__srv__GetRobotInfo_Response *)allocator.allocate(sizeof(autocert_interfaces__srv__GetRobotInfo_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autocert_interfaces__srv__GetRobotInfo_Response));
  bool success = autocert_interfaces__srv__GetRobotInfo_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autocert_interfaces__srv__GetRobotInfo_Response__destroy(autocert_interfaces__srv__GetRobotInfo_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autocert_interfaces__srv__GetRobotInfo_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autocert_interfaces__srv__GetRobotInfo_Response__Sequence__init(autocert_interfaces__srv__GetRobotInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetRobotInfo_Response * data = NULL;

  if (size) {
    data = (autocert_interfaces__srv__GetRobotInfo_Response *)allocator.zero_allocate(size, sizeof(autocert_interfaces__srv__GetRobotInfo_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autocert_interfaces__srv__GetRobotInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autocert_interfaces__srv__GetRobotInfo_Response__fini(&data[i - 1]);
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
autocert_interfaces__srv__GetRobotInfo_Response__Sequence__fini(autocert_interfaces__srv__GetRobotInfo_Response__Sequence * array)
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
      autocert_interfaces__srv__GetRobotInfo_Response__fini(&array->data[i]);
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

autocert_interfaces__srv__GetRobotInfo_Response__Sequence *
autocert_interfaces__srv__GetRobotInfo_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetRobotInfo_Response__Sequence * array = (autocert_interfaces__srv__GetRobotInfo_Response__Sequence *)allocator.allocate(sizeof(autocert_interfaces__srv__GetRobotInfo_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autocert_interfaces__srv__GetRobotInfo_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autocert_interfaces__srv__GetRobotInfo_Response__Sequence__destroy(autocert_interfaces__srv__GetRobotInfo_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autocert_interfaces__srv__GetRobotInfo_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autocert_interfaces__srv__GetRobotInfo_Response__Sequence__are_equal(const autocert_interfaces__srv__GetRobotInfo_Response__Sequence * lhs, const autocert_interfaces__srv__GetRobotInfo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autocert_interfaces__srv__GetRobotInfo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autocert_interfaces__srv__GetRobotInfo_Response__Sequence__copy(
  const autocert_interfaces__srv__GetRobotInfo_Response__Sequence * input,
  autocert_interfaces__srv__GetRobotInfo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autocert_interfaces__srv__GetRobotInfo_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autocert_interfaces__srv__GetRobotInfo_Response * data =
      (autocert_interfaces__srv__GetRobotInfo_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autocert_interfaces__srv__GetRobotInfo_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autocert_interfaces__srv__GetRobotInfo_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autocert_interfaces__srv__GetRobotInfo_Response__copy(
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
// #include "autocert_interfaces/srv/detail/get_robot_info__functions.h"

bool
autocert_interfaces__srv__GetRobotInfo_Event__init(autocert_interfaces__srv__GetRobotInfo_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    autocert_interfaces__srv__GetRobotInfo_Event__fini(msg);
    return false;
  }
  // request
  if (!autocert_interfaces__srv__GetRobotInfo_Request__Sequence__init(&msg->request, 0)) {
    autocert_interfaces__srv__GetRobotInfo_Event__fini(msg);
    return false;
  }
  // response
  if (!autocert_interfaces__srv__GetRobotInfo_Response__Sequence__init(&msg->response, 0)) {
    autocert_interfaces__srv__GetRobotInfo_Event__fini(msg);
    return false;
  }
  return true;
}

void
autocert_interfaces__srv__GetRobotInfo_Event__fini(autocert_interfaces__srv__GetRobotInfo_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  autocert_interfaces__srv__GetRobotInfo_Request__Sequence__fini(&msg->request);
  // response
  autocert_interfaces__srv__GetRobotInfo_Response__Sequence__fini(&msg->response);
}

bool
autocert_interfaces__srv__GetRobotInfo_Event__are_equal(const autocert_interfaces__srv__GetRobotInfo_Event * lhs, const autocert_interfaces__srv__GetRobotInfo_Event * rhs)
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
  if (!autocert_interfaces__srv__GetRobotInfo_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!autocert_interfaces__srv__GetRobotInfo_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
autocert_interfaces__srv__GetRobotInfo_Event__copy(
  const autocert_interfaces__srv__GetRobotInfo_Event * input,
  autocert_interfaces__srv__GetRobotInfo_Event * output)
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
  if (!autocert_interfaces__srv__GetRobotInfo_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!autocert_interfaces__srv__GetRobotInfo_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

autocert_interfaces__srv__GetRobotInfo_Event *
autocert_interfaces__srv__GetRobotInfo_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetRobotInfo_Event * msg = (autocert_interfaces__srv__GetRobotInfo_Event *)allocator.allocate(sizeof(autocert_interfaces__srv__GetRobotInfo_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autocert_interfaces__srv__GetRobotInfo_Event));
  bool success = autocert_interfaces__srv__GetRobotInfo_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autocert_interfaces__srv__GetRobotInfo_Event__destroy(autocert_interfaces__srv__GetRobotInfo_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autocert_interfaces__srv__GetRobotInfo_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autocert_interfaces__srv__GetRobotInfo_Event__Sequence__init(autocert_interfaces__srv__GetRobotInfo_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetRobotInfo_Event * data = NULL;

  if (size) {
    data = (autocert_interfaces__srv__GetRobotInfo_Event *)allocator.zero_allocate(size, sizeof(autocert_interfaces__srv__GetRobotInfo_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autocert_interfaces__srv__GetRobotInfo_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autocert_interfaces__srv__GetRobotInfo_Event__fini(&data[i - 1]);
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
autocert_interfaces__srv__GetRobotInfo_Event__Sequence__fini(autocert_interfaces__srv__GetRobotInfo_Event__Sequence * array)
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
      autocert_interfaces__srv__GetRobotInfo_Event__fini(&array->data[i]);
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

autocert_interfaces__srv__GetRobotInfo_Event__Sequence *
autocert_interfaces__srv__GetRobotInfo_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocert_interfaces__srv__GetRobotInfo_Event__Sequence * array = (autocert_interfaces__srv__GetRobotInfo_Event__Sequence *)allocator.allocate(sizeof(autocert_interfaces__srv__GetRobotInfo_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autocert_interfaces__srv__GetRobotInfo_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autocert_interfaces__srv__GetRobotInfo_Event__Sequence__destroy(autocert_interfaces__srv__GetRobotInfo_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autocert_interfaces__srv__GetRobotInfo_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autocert_interfaces__srv__GetRobotInfo_Event__Sequence__are_equal(const autocert_interfaces__srv__GetRobotInfo_Event__Sequence * lhs, const autocert_interfaces__srv__GetRobotInfo_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autocert_interfaces__srv__GetRobotInfo_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autocert_interfaces__srv__GetRobotInfo_Event__Sequence__copy(
  const autocert_interfaces__srv__GetRobotInfo_Event__Sequence * input,
  autocert_interfaces__srv__GetRobotInfo_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autocert_interfaces__srv__GetRobotInfo_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autocert_interfaces__srv__GetRobotInfo_Event * data =
      (autocert_interfaces__srv__GetRobotInfo_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autocert_interfaces__srv__GetRobotInfo_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autocert_interfaces__srv__GetRobotInfo_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autocert_interfaces__srv__GetRobotInfo_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
