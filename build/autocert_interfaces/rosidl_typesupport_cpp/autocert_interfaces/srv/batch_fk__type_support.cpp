// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from autocert_interfaces:srv/BatchFK.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "autocert_interfaces/srv/detail/batch_fk__functions.h"
#include "autocert_interfaces/srv/detail/batch_fk__struct.hpp"
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

typedef struct _BatchFK_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatchFK_Request_type_support_ids_t;

static const _BatchFK_Request_type_support_ids_t _BatchFK_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatchFK_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatchFK_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatchFK_Request_type_support_symbol_names_t _BatchFK_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autocert_interfaces, srv, BatchFK_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autocert_interfaces, srv, BatchFK_Request)),
  }
};

typedef struct _BatchFK_Request_type_support_data_t
{
  void * data[2];
} _BatchFK_Request_type_support_data_t;

static _BatchFK_Request_type_support_data_t _BatchFK_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatchFK_Request_message_typesupport_map = {
  2,
  "autocert_interfaces",
  &_BatchFK_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BatchFK_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BatchFK_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatchFK_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatchFK_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &autocert_interfaces__srv__BatchFK_Request__get_type_hash,
  &autocert_interfaces__srv__BatchFK_Request__get_type_description,
  &autocert_interfaces__srv__BatchFK_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace autocert_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autocert_interfaces::srv::BatchFK_Request>()
{
  return &::autocert_interfaces::srv::rosidl_typesupport_cpp::BatchFK_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, autocert_interfaces, srv, BatchFK_Request)() {
  return get_message_type_support_handle<autocert_interfaces::srv::BatchFK_Request>();
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
// #include "autocert_interfaces/srv/detail/batch_fk__functions.h"
// already included above
// #include "autocert_interfaces/srv/detail/batch_fk__struct.hpp"
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

typedef struct _BatchFK_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatchFK_Response_type_support_ids_t;

static const _BatchFK_Response_type_support_ids_t _BatchFK_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatchFK_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatchFK_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatchFK_Response_type_support_symbol_names_t _BatchFK_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autocert_interfaces, srv, BatchFK_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autocert_interfaces, srv, BatchFK_Response)),
  }
};

typedef struct _BatchFK_Response_type_support_data_t
{
  void * data[2];
} _BatchFK_Response_type_support_data_t;

static _BatchFK_Response_type_support_data_t _BatchFK_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatchFK_Response_message_typesupport_map = {
  2,
  "autocert_interfaces",
  &_BatchFK_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BatchFK_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BatchFK_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatchFK_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatchFK_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &autocert_interfaces__srv__BatchFK_Response__get_type_hash,
  &autocert_interfaces__srv__BatchFK_Response__get_type_description,
  &autocert_interfaces__srv__BatchFK_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace autocert_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autocert_interfaces::srv::BatchFK_Response>()
{
  return &::autocert_interfaces::srv::rosidl_typesupport_cpp::BatchFK_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, autocert_interfaces, srv, BatchFK_Response)() {
  return get_message_type_support_handle<autocert_interfaces::srv::BatchFK_Response>();
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
// #include "autocert_interfaces/srv/detail/batch_fk__functions.h"
// already included above
// #include "autocert_interfaces/srv/detail/batch_fk__struct.hpp"
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

typedef struct _BatchFK_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatchFK_Event_type_support_ids_t;

static const _BatchFK_Event_type_support_ids_t _BatchFK_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatchFK_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatchFK_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatchFK_Event_type_support_symbol_names_t _BatchFK_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autocert_interfaces, srv, BatchFK_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autocert_interfaces, srv, BatchFK_Event)),
  }
};

typedef struct _BatchFK_Event_type_support_data_t
{
  void * data[2];
} _BatchFK_Event_type_support_data_t;

static _BatchFK_Event_type_support_data_t _BatchFK_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatchFK_Event_message_typesupport_map = {
  2,
  "autocert_interfaces",
  &_BatchFK_Event_message_typesupport_ids.typesupport_identifier[0],
  &_BatchFK_Event_message_typesupport_symbol_names.symbol_name[0],
  &_BatchFK_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatchFK_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatchFK_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &autocert_interfaces__srv__BatchFK_Event__get_type_hash,
  &autocert_interfaces__srv__BatchFK_Event__get_type_description,
  &autocert_interfaces__srv__BatchFK_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace autocert_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autocert_interfaces::srv::BatchFK_Event>()
{
  return &::autocert_interfaces::srv::rosidl_typesupport_cpp::BatchFK_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, autocert_interfaces, srv, BatchFK_Event)() {
  return get_message_type_support_handle<autocert_interfaces::srv::BatchFK_Event>();
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
// #include "autocert_interfaces/srv/detail/batch_fk__struct.hpp"
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

typedef struct _BatchFK_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatchFK_type_support_ids_t;

static const _BatchFK_type_support_ids_t _BatchFK_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatchFK_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatchFK_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatchFK_type_support_symbol_names_t _BatchFK_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autocert_interfaces, srv, BatchFK)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autocert_interfaces, srv, BatchFK)),
  }
};

typedef struct _BatchFK_type_support_data_t
{
  void * data[2];
} _BatchFK_type_support_data_t;

static _BatchFK_type_support_data_t _BatchFK_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatchFK_service_typesupport_map = {
  2,
  "autocert_interfaces",
  &_BatchFK_service_typesupport_ids.typesupport_identifier[0],
  &_BatchFK_service_typesupport_symbol_names.symbol_name[0],
  &_BatchFK_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BatchFK_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatchFK_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<autocert_interfaces::srv::BatchFK_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<autocert_interfaces::srv::BatchFK_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<autocert_interfaces::srv::BatchFK_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<autocert_interfaces::srv::BatchFK>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<autocert_interfaces::srv::BatchFK>,
  &autocert_interfaces__srv__BatchFK__get_type_hash,
  &autocert_interfaces__srv__BatchFK__get_type_description,
  &autocert_interfaces__srv__BatchFK__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace autocert_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<autocert_interfaces::srv::BatchFK>()
{
  return &::autocert_interfaces::srv::rosidl_typesupport_cpp::BatchFK_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, autocert_interfaces, srv, BatchFK)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<autocert_interfaces::srv::BatchFK>();
}

#ifdef __cplusplus
}
#endif
