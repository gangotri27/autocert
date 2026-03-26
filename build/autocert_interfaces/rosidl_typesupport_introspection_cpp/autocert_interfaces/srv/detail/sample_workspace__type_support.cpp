// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autocert_interfaces:srv/SampleWorkspace.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autocert_interfaces/srv/detail/sample_workspace__functions.h"
#include "autocert_interfaces/srv/detail/sample_workspace__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autocert_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SampleWorkspace_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autocert_interfaces::srv::SampleWorkspace_Request(_init);
}

void SampleWorkspace_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autocert_interfaces::srv::SampleWorkspace_Request *>(message_memory);
  typed_message->~SampleWorkspace_Request();
}

size_t size_function__SampleWorkspace_Request__seed_configuration(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SampleWorkspace_Request__seed_configuration(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SampleWorkspace_Request__seed_configuration(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SampleWorkspace_Request__seed_configuration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SampleWorkspace_Request__seed_configuration(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SampleWorkspace_Request__seed_configuration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SampleWorkspace_Request__seed_configuration(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SampleWorkspace_Request__seed_configuration(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SampleWorkspace_Request_message_member_array[4] = {
  {
    "sampling_strategy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces::srv::SampleWorkspace_Request, sampling_strategy),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_samples",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces::srv::SampleWorkspace_Request, num_samples),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "seed_configuration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces::srv::SampleWorkspace_Request, seed_configuration),  // bytes offset in struct
    nullptr,  // default value
    size_function__SampleWorkspace_Request__seed_configuration,  // size() function pointer
    get_const_function__SampleWorkspace_Request__seed_configuration,  // get_const(index) function pointer
    get_function__SampleWorkspace_Request__seed_configuration,  // get(index) function pointer
    fetch_function__SampleWorkspace_Request__seed_configuration,  // fetch(index, &value) function pointer
    assign_function__SampleWorkspace_Request__seed_configuration,  // assign(index, value) function pointer
    resize_function__SampleWorkspace_Request__seed_configuration  // resize(index) function pointer
  },
  {
    "enable_collision_checking",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces::srv::SampleWorkspace_Request, enable_collision_checking),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SampleWorkspace_Request_message_members = {
  "autocert_interfaces::srv",  // message namespace
  "SampleWorkspace_Request",  // message name
  4,  // number of fields
  sizeof(autocert_interfaces::srv::SampleWorkspace_Request),
  false,  // has_any_key_member_
  SampleWorkspace_Request_message_member_array,  // message members
  SampleWorkspace_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SampleWorkspace_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SampleWorkspace_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SampleWorkspace_Request_message_members,
  get_message_typesupport_handle_function,
  &autocert_interfaces__srv__SampleWorkspace_Request__get_type_hash,
  &autocert_interfaces__srv__SampleWorkspace_Request__get_type_description,
  &autocert_interfaces__srv__SampleWorkspace_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace autocert_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autocert_interfaces::srv::SampleWorkspace_Request>()
{
  return &::autocert_interfaces::srv::rosidl_typesupport_introspection_cpp::SampleWorkspace_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autocert_interfaces, srv, SampleWorkspace_Request)() {
  return &::autocert_interfaces::srv::rosidl_typesupport_introspection_cpp::SampleWorkspace_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__functions.h"
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autocert_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SampleWorkspace_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autocert_interfaces::srv::SampleWorkspace_Response(_init);
}

void SampleWorkspace_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autocert_interfaces::srv::SampleWorkspace_Response *>(message_memory);
  typed_message->~SampleWorkspace_Response();
}

size_t size_function__SampleWorkspace_Response__joint_samples(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SampleWorkspace_Response__joint_samples(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SampleWorkspace_Response__joint_samples(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SampleWorkspace_Response__joint_samples(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SampleWorkspace_Response__joint_samples(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SampleWorkspace_Response__joint_samples(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SampleWorkspace_Response__joint_samples(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SampleWorkspace_Response__joint_samples(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SampleWorkspace_Response__poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SampleWorkspace_Response__poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void * get_function__SampleWorkspace_Response__poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void fetch_function__SampleWorkspace_Response__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose *>(
    get_const_function__SampleWorkspace_Response__poses(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose *>(untyped_value);
  value = item;
}

void assign_function__SampleWorkspace_Response__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose *>(
    get_function__SampleWorkspace_Response__poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose *>(untyped_value);
  item = value;
}

void resize_function__SampleWorkspace_Response__poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SampleWorkspace_Response__valid_indices(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SampleWorkspace_Response__valid_indices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SampleWorkspace_Response__valid_indices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SampleWorkspace_Response__valid_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__SampleWorkspace_Response__valid_indices(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__SampleWorkspace_Response__valid_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__SampleWorkspace_Response__valid_indices(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__SampleWorkspace_Response__valid_indices(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SampleWorkspace_Response_message_member_array[5] = {
  {
    "joint_samples",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces::srv::SampleWorkspace_Response, joint_samples),  // bytes offset in struct
    nullptr,  // default value
    size_function__SampleWorkspace_Response__joint_samples,  // size() function pointer
    get_const_function__SampleWorkspace_Response__joint_samples,  // get_const(index) function pointer
    get_function__SampleWorkspace_Response__joint_samples,  // get(index) function pointer
    fetch_function__SampleWorkspace_Response__joint_samples,  // fetch(index, &value) function pointer
    assign_function__SampleWorkspace_Response__joint_samples,  // assign(index, value) function pointer
    resize_function__SampleWorkspace_Response__joint_samples  // resize(index) function pointer
  },
  {
    "poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces::srv::SampleWorkspace_Response, poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__SampleWorkspace_Response__poses,  // size() function pointer
    get_const_function__SampleWorkspace_Response__poses,  // get_const(index) function pointer
    get_function__SampleWorkspace_Response__poses,  // get(index) function pointer
    fetch_function__SampleWorkspace_Response__poses,  // fetch(index, &value) function pointer
    assign_function__SampleWorkspace_Response__poses,  // assign(index, value) function pointer
    resize_function__SampleWorkspace_Response__poses  // resize(index) function pointer
  },
  {
    "valid_indices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces::srv::SampleWorkspace_Response, valid_indices),  // bytes offset in struct
    nullptr,  // default value
    size_function__SampleWorkspace_Response__valid_indices,  // size() function pointer
    get_const_function__SampleWorkspace_Response__valid_indices,  // get_const(index) function pointer
    get_function__SampleWorkspace_Response__valid_indices,  // get(index) function pointer
    fetch_function__SampleWorkspace_Response__valid_indices,  // fetch(index, &value) function pointer
    assign_function__SampleWorkspace_Response__valid_indices,  // assign(index, value) function pointer
    resize_function__SampleWorkspace_Response__valid_indices  // resize(index) function pointer
  },
  {
    "reachability_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces::srv::SampleWorkspace_Response, reachability_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "workspace_volume",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces::srv::SampleWorkspace_Response, workspace_volume),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SampleWorkspace_Response_message_members = {
  "autocert_interfaces::srv",  // message namespace
  "SampleWorkspace_Response",  // message name
  5,  // number of fields
  sizeof(autocert_interfaces::srv::SampleWorkspace_Response),
  false,  // has_any_key_member_
  SampleWorkspace_Response_message_member_array,  // message members
  SampleWorkspace_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SampleWorkspace_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SampleWorkspace_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SampleWorkspace_Response_message_members,
  get_message_typesupport_handle_function,
  &autocert_interfaces__srv__SampleWorkspace_Response__get_type_hash,
  &autocert_interfaces__srv__SampleWorkspace_Response__get_type_description,
  &autocert_interfaces__srv__SampleWorkspace_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace autocert_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autocert_interfaces::srv::SampleWorkspace_Response>()
{
  return &::autocert_interfaces::srv::rosidl_typesupport_introspection_cpp::SampleWorkspace_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autocert_interfaces, srv, SampleWorkspace_Response)() {
  return &::autocert_interfaces::srv::rosidl_typesupport_introspection_cpp::SampleWorkspace_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__functions.h"
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autocert_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SampleWorkspace_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autocert_interfaces::srv::SampleWorkspace_Event(_init);
}

void SampleWorkspace_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autocert_interfaces::srv::SampleWorkspace_Event *>(message_memory);
  typed_message->~SampleWorkspace_Event();
}

size_t size_function__SampleWorkspace_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autocert_interfaces::srv::SampleWorkspace_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SampleWorkspace_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autocert_interfaces::srv::SampleWorkspace_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__SampleWorkspace_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autocert_interfaces::srv::SampleWorkspace_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__SampleWorkspace_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autocert_interfaces::srv::SampleWorkspace_Request *>(
    get_const_function__SampleWorkspace_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<autocert_interfaces::srv::SampleWorkspace_Request *>(untyped_value);
  value = item;
}

void assign_function__SampleWorkspace_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autocert_interfaces::srv::SampleWorkspace_Request *>(
    get_function__SampleWorkspace_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const autocert_interfaces::srv::SampleWorkspace_Request *>(untyped_value);
  item = value;
}

void resize_function__SampleWorkspace_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autocert_interfaces::srv::SampleWorkspace_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SampleWorkspace_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autocert_interfaces::srv::SampleWorkspace_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SampleWorkspace_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autocert_interfaces::srv::SampleWorkspace_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__SampleWorkspace_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autocert_interfaces::srv::SampleWorkspace_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__SampleWorkspace_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autocert_interfaces::srv::SampleWorkspace_Response *>(
    get_const_function__SampleWorkspace_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<autocert_interfaces::srv::SampleWorkspace_Response *>(untyped_value);
  value = item;
}

void assign_function__SampleWorkspace_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autocert_interfaces::srv::SampleWorkspace_Response *>(
    get_function__SampleWorkspace_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const autocert_interfaces::srv::SampleWorkspace_Response *>(untyped_value);
  item = value;
}

void resize_function__SampleWorkspace_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autocert_interfaces::srv::SampleWorkspace_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SampleWorkspace_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces::srv::SampleWorkspace_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autocert_interfaces::srv::SampleWorkspace_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(autocert_interfaces::srv::SampleWorkspace_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__SampleWorkspace_Event__request,  // size() function pointer
    get_const_function__SampleWorkspace_Event__request,  // get_const(index) function pointer
    get_function__SampleWorkspace_Event__request,  // get(index) function pointer
    fetch_function__SampleWorkspace_Event__request,  // fetch(index, &value) function pointer
    assign_function__SampleWorkspace_Event__request,  // assign(index, value) function pointer
    resize_function__SampleWorkspace_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autocert_interfaces::srv::SampleWorkspace_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(autocert_interfaces::srv::SampleWorkspace_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__SampleWorkspace_Event__response,  // size() function pointer
    get_const_function__SampleWorkspace_Event__response,  // get_const(index) function pointer
    get_function__SampleWorkspace_Event__response,  // get(index) function pointer
    fetch_function__SampleWorkspace_Event__response,  // fetch(index, &value) function pointer
    assign_function__SampleWorkspace_Event__response,  // assign(index, value) function pointer
    resize_function__SampleWorkspace_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SampleWorkspace_Event_message_members = {
  "autocert_interfaces::srv",  // message namespace
  "SampleWorkspace_Event",  // message name
  3,  // number of fields
  sizeof(autocert_interfaces::srv::SampleWorkspace_Event),
  false,  // has_any_key_member_
  SampleWorkspace_Event_message_member_array,  // message members
  SampleWorkspace_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  SampleWorkspace_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SampleWorkspace_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SampleWorkspace_Event_message_members,
  get_message_typesupport_handle_function,
  &autocert_interfaces__srv__SampleWorkspace_Event__get_type_hash,
  &autocert_interfaces__srv__SampleWorkspace_Event__get_type_description,
  &autocert_interfaces__srv__SampleWorkspace_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace autocert_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autocert_interfaces::srv::SampleWorkspace_Event>()
{
  return &::autocert_interfaces::srv::rosidl_typesupport_introspection_cpp::SampleWorkspace_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autocert_interfaces, srv, SampleWorkspace_Event)() {
  return &::autocert_interfaces::srv::rosidl_typesupport_introspection_cpp::SampleWorkspace_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__functions.h"
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace autocert_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SampleWorkspace_service_members = {
  "autocert_interfaces::srv",  // service namespace
  "SampleWorkspace",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<autocert_interfaces::srv::SampleWorkspace>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t SampleWorkspace_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SampleWorkspace_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autocert_interfaces::srv::SampleWorkspace_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autocert_interfaces::srv::SampleWorkspace_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autocert_interfaces::srv::SampleWorkspace_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<autocert_interfaces::srv::SampleWorkspace>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<autocert_interfaces::srv::SampleWorkspace>,
  &autocert_interfaces__srv__SampleWorkspace__get_type_hash,
  &autocert_interfaces__srv__SampleWorkspace__get_type_description,
  &autocert_interfaces__srv__SampleWorkspace__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace autocert_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<autocert_interfaces::srv::SampleWorkspace>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::autocert_interfaces::srv::rosidl_typesupport_introspection_cpp::SampleWorkspace_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::autocert_interfaces::srv::SampleWorkspace_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::autocert_interfaces::srv::SampleWorkspace_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::autocert_interfaces::srv::SampleWorkspace_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autocert_interfaces, srv, SampleWorkspace)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<autocert_interfaces::srv::SampleWorkspace>();
}

#ifdef __cplusplus
}
#endif
