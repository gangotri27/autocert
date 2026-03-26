// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autocert_interfaces:srv/SampleWorkspace.idl
// generated code does not contain a copyright notice
#include "autocert_interfaces/srv/detail/sample_workspace__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autocert_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autocert_interfaces/srv/detail/sample_workspace__struct.h"
#include "autocert_interfaces/srv/detail/sample_workspace__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // seed_configuration
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // seed_configuration
#include "rosidl_runtime_c/string.h"  // sampling_strategy
#include "rosidl_runtime_c/string_functions.h"  // sampling_strategy

// forward declare type support functions


using _SampleWorkspace_Request__ros_msg_type = autocert_interfaces__srv__SampleWorkspace_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
bool cdr_serialize_autocert_interfaces__srv__SampleWorkspace_Request(
  const autocert_interfaces__srv__SampleWorkspace_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: sampling_strategy
  {
    const rosidl_runtime_c__String * str = &ros_message->sampling_strategy;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: num_samples
  {
    cdr << ros_message->num_samples;
  }

  // Field name: seed_configuration
  {
    size_t size = ros_message->seed_configuration.size;
    auto array_ptr = ros_message->seed_configuration.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: enable_collision_checking
  {
    cdr << (ros_message->enable_collision_checking ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
bool cdr_deserialize_autocert_interfaces__srv__SampleWorkspace_Request(
  eprosima::fastcdr::Cdr & cdr,
  autocert_interfaces__srv__SampleWorkspace_Request * ros_message)
{
  // Field name: sampling_strategy
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sampling_strategy.data) {
      rosidl_runtime_c__String__init(&ros_message->sampling_strategy);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sampling_strategy,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sampling_strategy'\n");
      return false;
    }
  }

  // Field name: num_samples
  {
    cdr >> ros_message->num_samples;
  }

  // Field name: seed_configuration
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->seed_configuration.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->seed_configuration);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->seed_configuration, size)) {
      fprintf(stderr, "failed to create array for field 'seed_configuration'");
      return false;
    }
    auto array_ptr = ros_message->seed_configuration.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: enable_collision_checking
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enable_collision_checking = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
size_t get_serialized_size_autocert_interfaces__srv__SampleWorkspace_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SampleWorkspace_Request__ros_msg_type * ros_message = static_cast<const _SampleWorkspace_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: sampling_strategy
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sampling_strategy.size + 1);

  // Field name: num_samples
  {
    size_t item_size = sizeof(ros_message->num_samples);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: seed_configuration
  {
    size_t array_size = ros_message->seed_configuration.size;
    auto array_ptr = ros_message->seed_configuration.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: enable_collision_checking
  {
    size_t item_size = sizeof(ros_message->enable_collision_checking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
size_t max_serialized_size_autocert_interfaces__srv__SampleWorkspace_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: sampling_strategy
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: num_samples
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: seed_configuration
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: enable_collision_checking
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autocert_interfaces__srv__SampleWorkspace_Request;
    is_plain =
      (
      offsetof(DataType, enable_collision_checking) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
bool cdr_serialize_key_autocert_interfaces__srv__SampleWorkspace_Request(
  const autocert_interfaces__srv__SampleWorkspace_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: sampling_strategy
  {
    const rosidl_runtime_c__String * str = &ros_message->sampling_strategy;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: num_samples
  {
    cdr << ros_message->num_samples;
  }

  // Field name: seed_configuration
  {
    size_t size = ros_message->seed_configuration.size;
    auto array_ptr = ros_message->seed_configuration.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: enable_collision_checking
  {
    cdr << (ros_message->enable_collision_checking ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
size_t get_serialized_size_key_autocert_interfaces__srv__SampleWorkspace_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SampleWorkspace_Request__ros_msg_type * ros_message = static_cast<const _SampleWorkspace_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: sampling_strategy
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sampling_strategy.size + 1);

  // Field name: num_samples
  {
    size_t item_size = sizeof(ros_message->num_samples);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: seed_configuration
  {
    size_t array_size = ros_message->seed_configuration.size;
    auto array_ptr = ros_message->seed_configuration.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: enable_collision_checking
  {
    size_t item_size = sizeof(ros_message->enable_collision_checking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
size_t max_serialized_size_key_autocert_interfaces__srv__SampleWorkspace_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: sampling_strategy
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: num_samples
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: seed_configuration
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: enable_collision_checking
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autocert_interfaces__srv__SampleWorkspace_Request;
    is_plain =
      (
      offsetof(DataType, enable_collision_checking) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SampleWorkspace_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const autocert_interfaces__srv__SampleWorkspace_Request * ros_message = static_cast<const autocert_interfaces__srv__SampleWorkspace_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_autocert_interfaces__srv__SampleWorkspace_Request(ros_message, cdr);
}

static bool _SampleWorkspace_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  autocert_interfaces__srv__SampleWorkspace_Request * ros_message = static_cast<autocert_interfaces__srv__SampleWorkspace_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_autocert_interfaces__srv__SampleWorkspace_Request(cdr, ros_message);
}

static uint32_t _SampleWorkspace_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autocert_interfaces__srv__SampleWorkspace_Request(
      untyped_ros_message, 0));
}

static size_t _SampleWorkspace_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autocert_interfaces__srv__SampleWorkspace_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SampleWorkspace_Request = {
  "autocert_interfaces::srv",
  "SampleWorkspace_Request",
  _SampleWorkspace_Request__cdr_serialize,
  _SampleWorkspace_Request__cdr_deserialize,
  _SampleWorkspace_Request__get_serialized_size,
  _SampleWorkspace_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SampleWorkspace_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SampleWorkspace_Request,
  get_message_typesupport_handle_function,
  &autocert_interfaces__srv__SampleWorkspace_Request__get_type_hash,
  &autocert_interfaces__srv__SampleWorkspace_Request__get_type_description,
  &autocert_interfaces__srv__SampleWorkspace_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocert_interfaces, srv, SampleWorkspace_Request)() {
  return &_SampleWorkspace_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "autocert_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__struct.h"
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose__functions.h"  // poses
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // joint_samples, valid_indices
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // joint_samples, valid_indices

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autocert_interfaces
bool cdr_serialize_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autocert_interfaces
bool cdr_deserialize_geometry_msgs__msg__Pose(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Pose * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autocert_interfaces
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autocert_interfaces
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autocert_interfaces
bool cdr_serialize_key_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autocert_interfaces
size_t get_serialized_size_key_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autocert_interfaces
size_t max_serialized_size_key_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autocert_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();


using _SampleWorkspace_Response__ros_msg_type = autocert_interfaces__srv__SampleWorkspace_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
bool cdr_serialize_autocert_interfaces__srv__SampleWorkspace_Response(
  const autocert_interfaces__srv__SampleWorkspace_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: joint_samples
  {
    size_t size = ros_message->joint_samples.size;
    auto array_ptr = ros_message->joint_samples.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: poses
  {
    size_t size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Pose(
        &array_ptr[i], cdr);
    }
  }

  // Field name: valid_indices
  {
    size_t size = ros_message->valid_indices.size;
    auto array_ptr = ros_message->valid_indices.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: reachability_index
  {
    cdr << ros_message->reachability_index;
  }

  // Field name: workspace_volume
  {
    cdr << ros_message->workspace_volume;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
bool cdr_deserialize_autocert_interfaces__srv__SampleWorkspace_Response(
  eprosima::fastcdr::Cdr & cdr,
  autocert_interfaces__srv__SampleWorkspace_Response * ros_message)
{
  // Field name: joint_samples
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->joint_samples.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->joint_samples);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->joint_samples, size)) {
      fprintf(stderr, "failed to create array for field 'joint_samples'");
      return false;
    }
    auto array_ptr = ros_message->joint_samples.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: poses
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->poses.data) {
      geometry_msgs__msg__Pose__Sequence__fini(&ros_message->poses);
    }
    if (!geometry_msgs__msg__Pose__Sequence__init(&ros_message->poses, size)) {
      fprintf(stderr, "failed to create array for field 'poses'");
      return false;
    }
    auto array_ptr = ros_message->poses.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Pose(cdr, &array_ptr[i]);
    }
  }

  // Field name: valid_indices
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->valid_indices.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->valid_indices);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->valid_indices, size)) {
      fprintf(stderr, "failed to create array for field 'valid_indices'");
      return false;
    }
    auto array_ptr = ros_message->valid_indices.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: reachability_index
  {
    cdr >> ros_message->reachability_index;
  }

  // Field name: workspace_volume
  {
    cdr >> ros_message->workspace_volume;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
size_t get_serialized_size_autocert_interfaces__srv__SampleWorkspace_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SampleWorkspace_Response__ros_msg_type * ros_message = static_cast<const _SampleWorkspace_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: joint_samples
  {
    size_t array_size = ros_message->joint_samples.size;
    auto array_ptr = ros_message->joint_samples.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: poses
  {
    size_t array_size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: valid_indices
  {
    size_t array_size = ros_message->valid_indices.size;
    auto array_ptr = ros_message->valid_indices.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reachability_index
  {
    size_t item_size = sizeof(ros_message->reachability_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: workspace_volume
  {
    size_t item_size = sizeof(ros_message->workspace_volume);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
size_t max_serialized_size_autocert_interfaces__srv__SampleWorkspace_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: joint_samples
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: poses
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: valid_indices
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: reachability_index
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: workspace_volume
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autocert_interfaces__srv__SampleWorkspace_Response;
    is_plain =
      (
      offsetof(DataType, workspace_volume) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
bool cdr_serialize_key_autocert_interfaces__srv__SampleWorkspace_Response(
  const autocert_interfaces__srv__SampleWorkspace_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: joint_samples
  {
    size_t size = ros_message->joint_samples.size;
    auto array_ptr = ros_message->joint_samples.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: poses
  {
    size_t size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Pose(
        &array_ptr[i], cdr);
    }
  }

  // Field name: valid_indices
  {
    size_t size = ros_message->valid_indices.size;
    auto array_ptr = ros_message->valid_indices.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: reachability_index
  {
    cdr << ros_message->reachability_index;
  }

  // Field name: workspace_volume
  {
    cdr << ros_message->workspace_volume;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
size_t get_serialized_size_key_autocert_interfaces__srv__SampleWorkspace_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SampleWorkspace_Response__ros_msg_type * ros_message = static_cast<const _SampleWorkspace_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: joint_samples
  {
    size_t array_size = ros_message->joint_samples.size;
    auto array_ptr = ros_message->joint_samples.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: poses
  {
    size_t array_size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: valid_indices
  {
    size_t array_size = ros_message->valid_indices.size;
    auto array_ptr = ros_message->valid_indices.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reachability_index
  {
    size_t item_size = sizeof(ros_message->reachability_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: workspace_volume
  {
    size_t item_size = sizeof(ros_message->workspace_volume);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
size_t max_serialized_size_key_autocert_interfaces__srv__SampleWorkspace_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: joint_samples
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: poses
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: valid_indices
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: reachability_index
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: workspace_volume
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autocert_interfaces__srv__SampleWorkspace_Response;
    is_plain =
      (
      offsetof(DataType, workspace_volume) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SampleWorkspace_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const autocert_interfaces__srv__SampleWorkspace_Response * ros_message = static_cast<const autocert_interfaces__srv__SampleWorkspace_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_autocert_interfaces__srv__SampleWorkspace_Response(ros_message, cdr);
}

static bool _SampleWorkspace_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  autocert_interfaces__srv__SampleWorkspace_Response * ros_message = static_cast<autocert_interfaces__srv__SampleWorkspace_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_autocert_interfaces__srv__SampleWorkspace_Response(cdr, ros_message);
}

static uint32_t _SampleWorkspace_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autocert_interfaces__srv__SampleWorkspace_Response(
      untyped_ros_message, 0));
}

static size_t _SampleWorkspace_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autocert_interfaces__srv__SampleWorkspace_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SampleWorkspace_Response = {
  "autocert_interfaces::srv",
  "SampleWorkspace_Response",
  _SampleWorkspace_Response__cdr_serialize,
  _SampleWorkspace_Response__cdr_deserialize,
  _SampleWorkspace_Response__get_serialized_size,
  _SampleWorkspace_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SampleWorkspace_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SampleWorkspace_Response,
  get_message_typesupport_handle_function,
  &autocert_interfaces__srv__SampleWorkspace_Response__get_type_hash,
  &autocert_interfaces__srv__SampleWorkspace_Response__get_type_description,
  &autocert_interfaces__srv__SampleWorkspace_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocert_interfaces, srv, SampleWorkspace_Response)() {
  return &_SampleWorkspace_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "autocert_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__struct.h"
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_autocert_interfaces__srv__SampleWorkspace_Request(
  const autocert_interfaces__srv__SampleWorkspace_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_autocert_interfaces__srv__SampleWorkspace_Request(
  eprosima::fastcdr::Cdr & cdr,
  autocert_interfaces__srv__SampleWorkspace_Request * ros_message);

size_t get_serialized_size_autocert_interfaces__srv__SampleWorkspace_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autocert_interfaces__srv__SampleWorkspace_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_autocert_interfaces__srv__SampleWorkspace_Request(
  const autocert_interfaces__srv__SampleWorkspace_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_autocert_interfaces__srv__SampleWorkspace_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_autocert_interfaces__srv__SampleWorkspace_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocert_interfaces, srv, SampleWorkspace_Request)();

bool cdr_serialize_autocert_interfaces__srv__SampleWorkspace_Response(
  const autocert_interfaces__srv__SampleWorkspace_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_autocert_interfaces__srv__SampleWorkspace_Response(
  eprosima::fastcdr::Cdr & cdr,
  autocert_interfaces__srv__SampleWorkspace_Response * ros_message);

size_t get_serialized_size_autocert_interfaces__srv__SampleWorkspace_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autocert_interfaces__srv__SampleWorkspace_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_autocert_interfaces__srv__SampleWorkspace_Response(
  const autocert_interfaces__srv__SampleWorkspace_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_autocert_interfaces__srv__SampleWorkspace_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_autocert_interfaces__srv__SampleWorkspace_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocert_interfaces, srv, SampleWorkspace_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autocert_interfaces
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autocert_interfaces
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autocert_interfaces
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autocert_interfaces
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autocert_interfaces
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autocert_interfaces
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autocert_interfaces
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autocert_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _SampleWorkspace_Event__ros_msg_type = autocert_interfaces__srv__SampleWorkspace_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
bool cdr_serialize_autocert_interfaces__srv__SampleWorkspace_Event(
  const autocert_interfaces__srv__SampleWorkspace_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_autocert_interfaces__srv__SampleWorkspace_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_autocert_interfaces__srv__SampleWorkspace_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
bool cdr_deserialize_autocert_interfaces__srv__SampleWorkspace_Event(
  eprosima::fastcdr::Cdr & cdr,
  autocert_interfaces__srv__SampleWorkspace_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->request.data) {
      autocert_interfaces__srv__SampleWorkspace_Request__Sequence__fini(&ros_message->request);
    }
    if (!autocert_interfaces__srv__SampleWorkspace_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_autocert_interfaces__srv__SampleWorkspace_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->response.data) {
      autocert_interfaces__srv__SampleWorkspace_Response__Sequence__fini(&ros_message->response);
    }
    if (!autocert_interfaces__srv__SampleWorkspace_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_autocert_interfaces__srv__SampleWorkspace_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
size_t get_serialized_size_autocert_interfaces__srv__SampleWorkspace_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SampleWorkspace_Event__ros_msg_type * ros_message = static_cast<const _SampleWorkspace_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_autocert_interfaces__srv__SampleWorkspace_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_autocert_interfaces__srv__SampleWorkspace_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
size_t max_serialized_size_autocert_interfaces__srv__SampleWorkspace_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_autocert_interfaces__srv__SampleWorkspace_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_autocert_interfaces__srv__SampleWorkspace_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autocert_interfaces__srv__SampleWorkspace_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
bool cdr_serialize_key_autocert_interfaces__srv__SampleWorkspace_Event(
  const autocert_interfaces__srv__SampleWorkspace_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_autocert_interfaces__srv__SampleWorkspace_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_autocert_interfaces__srv__SampleWorkspace_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
size_t get_serialized_size_key_autocert_interfaces__srv__SampleWorkspace_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SampleWorkspace_Event__ros_msg_type * ros_message = static_cast<const _SampleWorkspace_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_autocert_interfaces__srv__SampleWorkspace_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_autocert_interfaces__srv__SampleWorkspace_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
size_t max_serialized_size_key_autocert_interfaces__srv__SampleWorkspace_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_autocert_interfaces__srv__SampleWorkspace_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_autocert_interfaces__srv__SampleWorkspace_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autocert_interfaces__srv__SampleWorkspace_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SampleWorkspace_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const autocert_interfaces__srv__SampleWorkspace_Event * ros_message = static_cast<const autocert_interfaces__srv__SampleWorkspace_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_autocert_interfaces__srv__SampleWorkspace_Event(ros_message, cdr);
}

static bool _SampleWorkspace_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  autocert_interfaces__srv__SampleWorkspace_Event * ros_message = static_cast<autocert_interfaces__srv__SampleWorkspace_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_autocert_interfaces__srv__SampleWorkspace_Event(cdr, ros_message);
}

static uint32_t _SampleWorkspace_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autocert_interfaces__srv__SampleWorkspace_Event(
      untyped_ros_message, 0));
}

static size_t _SampleWorkspace_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autocert_interfaces__srv__SampleWorkspace_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SampleWorkspace_Event = {
  "autocert_interfaces::srv",
  "SampleWorkspace_Event",
  _SampleWorkspace_Event__cdr_serialize,
  _SampleWorkspace_Event__cdr_deserialize,
  _SampleWorkspace_Event__get_serialized_size,
  _SampleWorkspace_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SampleWorkspace_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SampleWorkspace_Event,
  get_message_typesupport_handle_function,
  &autocert_interfaces__srv__SampleWorkspace_Event__get_type_hash,
  &autocert_interfaces__srv__SampleWorkspace_Event__get_type_description,
  &autocert_interfaces__srv__SampleWorkspace_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocert_interfaces, srv, SampleWorkspace_Event)() {
  return &_SampleWorkspace_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "autocert_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autocert_interfaces/srv/sample_workspace.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SampleWorkspace__callbacks = {
  "autocert_interfaces::srv",
  "SampleWorkspace",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocert_interfaces, srv, SampleWorkspace_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocert_interfaces, srv, SampleWorkspace_Response)(),
};

static rosidl_service_type_support_t SampleWorkspace__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SampleWorkspace__callbacks,
  get_service_typesupport_handle_function,
  &_SampleWorkspace_Request__type_support,
  &_SampleWorkspace_Response__type_support,
  &_SampleWorkspace_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    autocert_interfaces,
    srv,
    SampleWorkspace
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    autocert_interfaces,
    srv,
    SampleWorkspace
  ),
  &autocert_interfaces__srv__SampleWorkspace__get_type_hash,
  &autocert_interfaces__srv__SampleWorkspace__get_type_description,
  &autocert_interfaces__srv__SampleWorkspace__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocert_interfaces, srv, SampleWorkspace)() {
  return &SampleWorkspace__handle;
}

#if defined(__cplusplus)
}
#endif
