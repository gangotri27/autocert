// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from autocert_interfaces:srv/CheckCollision.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "autocert_interfaces/srv/detail/check_collision__functions.h"
#include "autocert_interfaces/srv/detail/check_collision__struct.hpp"
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

typedef struct _CheckCollision_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckCollision_Request_type_support_ids_t;

static const _CheckCollision_Request_type_support_ids_t _CheckCollision_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CheckCollision_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CheckCollision_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CheckCollision_Request_type_support_symbol_names_t _CheckCollision_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autocert_interfaces, srv, CheckCollision_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autocert_interfaces, srv, CheckCollision_Request)),
  }
};

typedef struct _CheckCollision_Request_type_support_data_t
{
  void * data[2];
} _CheckCollision_Request_type_support_data_t;

static _CheckCollision_Request_type_support_data_t _CheckCollision_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CheckCollision_Request_message_typesupport_map = {
  2,
  "autocert_interfaces",
  &_CheckCollision_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CheckCollision_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CheckCollision_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CheckCollision_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckCollision_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &autocert_interfaces__srv__CheckCollision_Request__get_type_hash,
  &autocert_interfaces__srv__CheckCollision_Request__get_type_description,
  &autocert_interfaces__srv__CheckCollision_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace autocert_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autocert_interfaces::srv::CheckCollision_Request>()
{
  return &::autocert_interfaces::srv::rosidl_typesupport_cpp::CheckCollision_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, autocert_interfaces, srv, CheckCollision_Request)() {
  return get_message_type_support_handle<autocert_interfaces::srv::CheckCollision_Request>();
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
// #include "autocert_interfaces/srv/detail/check_collision__functions.h"
// already included above
// #include "autocert_interfaces/srv/detail/check_collision__struct.hpp"
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

typedef struct _CheckCollision_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckCollision_Response_type_support_ids_t;

static const _CheckCollision_Response_type_support_ids_t _CheckCollision_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CheckCollision_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CheckCollision_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CheckCollision_Response_type_support_symbol_names_t _CheckCollision_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autocert_interfaces, srv, CheckCollision_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autocert_interfaces, srv, CheckCollision_Response)),
  }
};

typedef struct _CheckCollision_Response_type_support_data_t
{
  void * data[2];
} _CheckCollision_Response_type_support_data_t;

static _CheckCollision_Response_type_support_data_t _CheckCollision_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CheckCollision_Response_message_typesupport_map = {
  2,
  "autocert_interfaces",
  &_CheckCollision_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CheckCollision_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CheckCollision_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CheckCollision_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckCollision_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &autocert_interfaces__srv__CheckCollision_Response__get_type_hash,
  &autocert_interfaces__srv__CheckCollision_Response__get_type_description,
  &autocert_interfaces__srv__CheckCollision_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace autocert_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autocert_interfaces::srv::CheckCollision_Response>()
{
  return &::autocert_interfaces::srv::rosidl_typesupport_cpp::CheckCollision_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, autocert_interfaces, srv, CheckCollision_Response)() {
  return get_message_type_support_handle<autocert_interfaces::srv::CheckCollision_Response>();
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
// #include "autocert_interfaces/srv/detail/check_collision__functions.h"
// already included above
// #include "autocert_interfaces/srv/detail/check_collision__struct.hpp"
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

typedef struct _CheckCollision_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckCollision_Event_type_support_ids_t;

static const _CheckCollision_Event_type_support_ids_t _CheckCollision_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CheckCollision_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CheckCollision_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CheckCollision_Event_type_support_symbol_names_t _CheckCollision_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autocert_interfaces, srv, CheckCollision_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autocert_interfaces, srv, CheckCollision_Event)),
  }
};

typedef struct _CheckCollision_Event_type_support_data_t
{
  void * data[2];
} _CheckCollision_Event_type_support_data_t;

static _CheckCollision_Event_type_support_data_t _CheckCollision_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CheckCollision_Event_message_typesupport_map = {
  2,
  "autocert_interfaces",
  &_CheckCollision_Event_message_typesupport_ids.typesupport_identifier[0],
  &_CheckCollision_Event_message_typesupport_symbol_names.symbol_name[0],
  &_CheckCollision_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CheckCollision_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckCollision_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &autocert_interfaces__srv__CheckCollision_Event__get_type_hash,
  &autocert_interfaces__srv__CheckCollision_Event__get_type_description,
  &autocert_interfaces__srv__CheckCollision_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace autocert_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autocert_interfaces::srv::CheckCollision_Event>()
{
  return &::autocert_interfaces::srv::rosidl_typesupport_cpp::CheckCollision_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, autocert_interfaces, srv, CheckCollision_Event)() {
  return get_message_type_support_handle<autocert_interfaces::srv::CheckCollision_Event>();
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
// #include "autocert_interfaces/srv/detail/check_collision__struct.hpp"
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

typedef struct _CheckCollision_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckCollision_type_support_ids_t;

static const _CheckCollision_type_support_ids_t _CheckCollision_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CheckCollision_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CheckCollision_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CheckCollision_type_support_symbol_names_t _CheckCollision_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autocert_interfaces, srv, CheckCollision)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autocert_interfaces, srv, CheckCollision)),
  }
};

typedef struct _CheckCollision_type_support_data_t
{
  void * data[2];
} _CheckCollision_type_support_data_t;

static _CheckCollision_type_support_data_t _CheckCollision_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CheckCollision_service_typesupport_map = {
  2,
  "autocert_interfaces",
  &_CheckCollision_service_typesupport_ids.typesupport_identifier[0],
  &_CheckCollision_service_typesupport_symbol_names.symbol_name[0],
  &_CheckCollision_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CheckCollision_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckCollision_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<autocert_interfaces::srv::CheckCollision_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<autocert_interfaces::srv::CheckCollision_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<autocert_interfaces::srv::CheckCollision_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<autocert_interfaces::srv::CheckCollision>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<autocert_interfaces::srv::CheckCollision>,
  &autocert_interfaces__srv__CheckCollision__get_type_hash,
  &autocert_interfaces__srv__CheckCollision__get_type_description,
  &autocert_interfaces__srv__CheckCollision__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace autocert_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<autocert_interfaces::srv::CheckCollision>()
{
  return &::autocert_interfaces::srv::rosidl_typesupport_cpp::CheckCollision_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, autocert_interfaces, srv, CheckCollision)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<autocert_interfaces::srv::CheckCollision>();
}

#ifdef __cplusplus
}
#endif
