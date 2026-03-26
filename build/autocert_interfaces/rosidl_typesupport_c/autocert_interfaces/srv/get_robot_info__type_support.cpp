// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from autocert_interfaces:srv/GetRobotInfo.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "autocert_interfaces/srv/detail/get_robot_info__struct.h"
#include "autocert_interfaces/srv/detail/get_robot_info__type_support.h"
#include "autocert_interfaces/srv/detail/get_robot_info__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace autocert_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetRobotInfo_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotInfo_Request_type_support_ids_t;

static const _GetRobotInfo_Request_type_support_ids_t _GetRobotInfo_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetRobotInfo_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetRobotInfo_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetRobotInfo_Request_type_support_symbol_names_t _GetRobotInfo_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocert_interfaces, srv, GetRobotInfo_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, GetRobotInfo_Request)),
  }
};

typedef struct _GetRobotInfo_Request_type_support_data_t
{
  void * data[2];
} _GetRobotInfo_Request_type_support_data_t;

static _GetRobotInfo_Request_type_support_data_t _GetRobotInfo_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetRobotInfo_Request_message_typesupport_map = {
  2,
  "autocert_interfaces",
  &_GetRobotInfo_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetRobotInfo_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetRobotInfo_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetRobotInfo_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotInfo_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &autocert_interfaces__srv__GetRobotInfo_Request__get_type_hash,
  &autocert_interfaces__srv__GetRobotInfo_Request__get_type_description,
  &autocert_interfaces__srv__GetRobotInfo_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace autocert_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autocert_interfaces, srv, GetRobotInfo_Request)() {
  return &::autocert_interfaces::srv::rosidl_typesupport_c::GetRobotInfo_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__struct.h"
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__type_support.h"
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace autocert_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetRobotInfo_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotInfo_Response_type_support_ids_t;

static const _GetRobotInfo_Response_type_support_ids_t _GetRobotInfo_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetRobotInfo_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetRobotInfo_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetRobotInfo_Response_type_support_symbol_names_t _GetRobotInfo_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocert_interfaces, srv, GetRobotInfo_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, GetRobotInfo_Response)),
  }
};

typedef struct _GetRobotInfo_Response_type_support_data_t
{
  void * data[2];
} _GetRobotInfo_Response_type_support_data_t;

static _GetRobotInfo_Response_type_support_data_t _GetRobotInfo_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetRobotInfo_Response_message_typesupport_map = {
  2,
  "autocert_interfaces",
  &_GetRobotInfo_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetRobotInfo_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetRobotInfo_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetRobotInfo_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotInfo_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &autocert_interfaces__srv__GetRobotInfo_Response__get_type_hash,
  &autocert_interfaces__srv__GetRobotInfo_Response__get_type_description,
  &autocert_interfaces__srv__GetRobotInfo_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace autocert_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autocert_interfaces, srv, GetRobotInfo_Response)() {
  return &::autocert_interfaces::srv::rosidl_typesupport_c::GetRobotInfo_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__struct.h"
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__type_support.h"
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace autocert_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetRobotInfo_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotInfo_Event_type_support_ids_t;

static const _GetRobotInfo_Event_type_support_ids_t _GetRobotInfo_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetRobotInfo_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetRobotInfo_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetRobotInfo_Event_type_support_symbol_names_t _GetRobotInfo_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocert_interfaces, srv, GetRobotInfo_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, GetRobotInfo_Event)),
  }
};

typedef struct _GetRobotInfo_Event_type_support_data_t
{
  void * data[2];
} _GetRobotInfo_Event_type_support_data_t;

static _GetRobotInfo_Event_type_support_data_t _GetRobotInfo_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetRobotInfo_Event_message_typesupport_map = {
  2,
  "autocert_interfaces",
  &_GetRobotInfo_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetRobotInfo_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetRobotInfo_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetRobotInfo_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotInfo_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &autocert_interfaces__srv__GetRobotInfo_Event__get_type_hash,
  &autocert_interfaces__srv__GetRobotInfo_Event__get_type_description,
  &autocert_interfaces__srv__GetRobotInfo_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace autocert_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autocert_interfaces, srv, GetRobotInfo_Event)() {
  return &::autocert_interfaces::srv::rosidl_typesupport_c::GetRobotInfo_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace autocert_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetRobotInfo_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotInfo_type_support_ids_t;

static const _GetRobotInfo_type_support_ids_t _GetRobotInfo_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetRobotInfo_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetRobotInfo_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetRobotInfo_type_support_symbol_names_t _GetRobotInfo_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocert_interfaces, srv, GetRobotInfo)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, GetRobotInfo)),
  }
};

typedef struct _GetRobotInfo_type_support_data_t
{
  void * data[2];
} _GetRobotInfo_type_support_data_t;

static _GetRobotInfo_type_support_data_t _GetRobotInfo_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetRobotInfo_service_typesupport_map = {
  2,
  "autocert_interfaces",
  &_GetRobotInfo_service_typesupport_ids.typesupport_identifier[0],
  &_GetRobotInfo_service_typesupport_symbol_names.symbol_name[0],
  &_GetRobotInfo_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetRobotInfo_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotInfo_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetRobotInfo_Request_message_type_support_handle,
  &GetRobotInfo_Response_message_type_support_handle,
  &GetRobotInfo_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    autocert_interfaces,
    srv,
    GetRobotInfo
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    autocert_interfaces,
    srv,
    GetRobotInfo
  ),
  &autocert_interfaces__srv__GetRobotInfo__get_type_hash,
  &autocert_interfaces__srv__GetRobotInfo__get_type_description,
  &autocert_interfaces__srv__GetRobotInfo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace autocert_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, autocert_interfaces, srv, GetRobotInfo)() {
  return &::autocert_interfaces::srv::rosidl_typesupport_c::GetRobotInfo_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
