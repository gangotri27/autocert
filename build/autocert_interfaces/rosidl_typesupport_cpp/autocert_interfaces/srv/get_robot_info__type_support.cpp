// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from autocert_interfaces:srv/GetRobotInfo.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "autocert_interfaces/srv/detail/get_robot_info__functions.h"
#include "autocert_interfaces/srv/detail/get_robot_info__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace autocert_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetRobotInfo_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotInfo_Request_type_support_ids_t;

static const _GetRobotInfo_Request_type_support_ids_t _GetRobotInfo_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autocert_interfaces, srv, GetRobotInfo_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autocert_interfaces, srv, GetRobotInfo_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotInfo_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &autocert_interfaces__srv__GetRobotInfo_Request__get_type_hash,
  &autocert_interfaces__srv__GetRobotInfo_Request__get_type_description,
  &autocert_interfaces__srv__GetRobotInfo_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace autocert_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autocert_interfaces::srv::GetRobotInfo_Request>()
{
  return &::autocert_interfaces::srv::rosidl_typesupport_cpp::GetRobotInfo_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, autocert_interfaces, srv, GetRobotInfo_Request)() {
  return get_message_type_support_handle<autocert_interfaces::srv::GetRobotInfo_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__functions.h"
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace autocert_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetRobotInfo_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotInfo_Response_type_support_ids_t;

static const _GetRobotInfo_Response_type_support_ids_t _GetRobotInfo_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autocert_interfaces, srv, GetRobotInfo_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autocert_interfaces, srv, GetRobotInfo_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotInfo_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &autocert_interfaces__srv__GetRobotInfo_Response__get_type_hash,
  &autocert_interfaces__srv__GetRobotInfo_Response__get_type_description,
  &autocert_interfaces__srv__GetRobotInfo_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace autocert_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autocert_interfaces::srv::GetRobotInfo_Response>()
{
  return &::autocert_interfaces::srv::rosidl_typesupport_cpp::GetRobotInfo_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, autocert_interfaces, srv, GetRobotInfo_Response)() {
  return get_message_type_support_handle<autocert_interfaces::srv::GetRobotInfo_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__functions.h"
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace autocert_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetRobotInfo_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotInfo_Event_type_support_ids_t;

static const _GetRobotInfo_Event_type_support_ids_t _GetRobotInfo_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autocert_interfaces, srv, GetRobotInfo_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autocert_interfaces, srv, GetRobotInfo_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotInfo_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &autocert_interfaces__srv__GetRobotInfo_Event__get_type_hash,
  &autocert_interfaces__srv__GetRobotInfo_Event__get_type_description,
  &autocert_interfaces__srv__GetRobotInfo_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace autocert_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autocert_interfaces::srv::GetRobotInfo_Event>()
{
  return &::autocert_interfaces::srv::rosidl_typesupport_cpp::GetRobotInfo_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, autocert_interfaces, srv, GetRobotInfo_Event)() {
  return get_message_type_support_handle<autocert_interfaces::srv::GetRobotInfo_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace autocert_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetRobotInfo_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotInfo_type_support_ids_t;

static const _GetRobotInfo_type_support_ids_t _GetRobotInfo_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autocert_interfaces, srv, GetRobotInfo)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autocert_interfaces, srv, GetRobotInfo)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotInfo_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<autocert_interfaces::srv::GetRobotInfo_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<autocert_interfaces::srv::GetRobotInfo_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<autocert_interfaces::srv::GetRobotInfo_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<autocert_interfaces::srv::GetRobotInfo>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<autocert_interfaces::srv::GetRobotInfo>,
  &autocert_interfaces__srv__GetRobotInfo__get_type_hash,
  &autocert_interfaces__srv__GetRobotInfo__get_type_description,
  &autocert_interfaces__srv__GetRobotInfo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace autocert_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<autocert_interfaces::srv::GetRobotInfo>()
{
  return &::autocert_interfaces::srv::rosidl_typesupport_cpp::GetRobotInfo_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, autocert_interfaces, srv, GetRobotInfo)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<autocert_interfaces::srv::GetRobotInfo>();
}

#ifdef __cplusplus
}
#endif
