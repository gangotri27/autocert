// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from autocert_interfaces:msg/PoseMeasurement.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "autocert_interfaces/msg/detail/pose_measurement__struct.h"
#include "autocert_interfaces/msg/detail/pose_measurement__type_support.h"
#include "autocert_interfaces/msg/detail/pose_measurement__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace autocert_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _PoseMeasurement_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseMeasurement_type_support_ids_t;

static const _PoseMeasurement_type_support_ids_t _PoseMeasurement_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PoseMeasurement_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseMeasurement_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseMeasurement_type_support_symbol_names_t _PoseMeasurement_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocert_interfaces, msg, PoseMeasurement)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, msg, PoseMeasurement)),
  }
};

typedef struct _PoseMeasurement_type_support_data_t
{
  void * data[2];
} _PoseMeasurement_type_support_data_t;

static _PoseMeasurement_type_support_data_t _PoseMeasurement_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseMeasurement_message_typesupport_map = {
  2,
  "autocert_interfaces",
  &_PoseMeasurement_message_typesupport_ids.typesupport_identifier[0],
  &_PoseMeasurement_message_typesupport_symbol_names.symbol_name[0],
  &_PoseMeasurement_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseMeasurement_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseMeasurement_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &autocert_interfaces__msg__PoseMeasurement__get_type_hash,
  &autocert_interfaces__msg__PoseMeasurement__get_type_description,
  &autocert_interfaces__msg__PoseMeasurement__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace autocert_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autocert_interfaces, msg, PoseMeasurement)() {
  return &::autocert_interfaces::msg::rosidl_typesupport_c::PoseMeasurement_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
