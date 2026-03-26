// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from autocert_interfaces:srv/GetRobotInfo.idl
// generated code does not contain a copyright notice

#include "autocert_interfaces/srv/detail/get_robot_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
const rosidl_type_hash_t *
autocert_interfaces__srv__GetRobotInfo__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x64, 0x86, 0x0d, 0xbc, 0xa4, 0x5d, 0xe3, 0x99,
      0x20, 0xff, 0x48, 0x96, 0xef, 0x43, 0xbc, 0xba,
      0x94, 0x0d, 0x13, 0x31, 0x1e, 0x73, 0xe2, 0xf4,
      0x3b, 0x04, 0x39, 0x30, 0x0e, 0xb4, 0x04, 0x73,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
const rosidl_type_hash_t *
autocert_interfaces__srv__GetRobotInfo_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0a, 0x05, 0x9f, 0xb8, 0x26, 0xe9, 0xf4, 0xd5,
      0x27, 0xb7, 0x89, 0xc6, 0x50, 0xc6, 0xc5, 0x81,
      0x4f, 0x6d, 0x65, 0x0d, 0xea, 0xd0, 0x16, 0xf7,
      0x14, 0xe2, 0x12, 0xd0, 0x45, 0x12, 0x9f, 0xab,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
const rosidl_type_hash_t *
autocert_interfaces__srv__GetRobotInfo_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x92, 0x11, 0x6b, 0x04, 0x00, 0x75, 0x04, 0xfc,
      0x67, 0x8b, 0x1f, 0x47, 0x71, 0xa6, 0xef, 0x30,
      0x36, 0xc4, 0x9f, 0x4e, 0x7b, 0x60, 0x23, 0x2d,
      0x7a, 0x0a, 0x2f, 0x35, 0xd9, 0xf5, 0x83, 0xec,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
const rosidl_type_hash_t *
autocert_interfaces__srv__GetRobotInfo_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4b, 0x5f, 0x8d, 0xdb, 0x2f, 0x0a, 0x4b, 0xec,
      0x4b, 0xed, 0xf9, 0x54, 0xc8, 0x4f, 0x3f, 0x5d,
      0x4c, 0xb9, 0x13, 0x10, 0x9a, 0x18, 0xe7, 0x71,
      0x6b, 0x3a, 0x4b, 0x59, 0x47, 0x37, 0x10, 0xf3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char autocert_interfaces__srv__GetRobotInfo__TYPE_NAME[] = "autocert_interfaces/srv/GetRobotInfo";
static char autocert_interfaces__srv__GetRobotInfo_Event__TYPE_NAME[] = "autocert_interfaces/srv/GetRobotInfo_Event";
static char autocert_interfaces__srv__GetRobotInfo_Request__TYPE_NAME[] = "autocert_interfaces/srv/GetRobotInfo_Request";
static char autocert_interfaces__srv__GetRobotInfo_Response__TYPE_NAME[] = "autocert_interfaces/srv/GetRobotInfo_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char autocert_interfaces__srv__GetRobotInfo__FIELD_NAME__request_message[] = "request_message";
static char autocert_interfaces__srv__GetRobotInfo__FIELD_NAME__response_message[] = "response_message";
static char autocert_interfaces__srv__GetRobotInfo__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field autocert_interfaces__srv__GetRobotInfo__FIELDS[] = {
  {
    {autocert_interfaces__srv__GetRobotInfo__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {autocert_interfaces__srv__GetRobotInfo_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {autocert_interfaces__srv__GetRobotInfo_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {autocert_interfaces__srv__GetRobotInfo_Event__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription autocert_interfaces__srv__GetRobotInfo__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {autocert_interfaces__srv__GetRobotInfo_Event__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
autocert_interfaces__srv__GetRobotInfo__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {autocert_interfaces__srv__GetRobotInfo__TYPE_NAME, 36, 36},
      {autocert_interfaces__srv__GetRobotInfo__FIELDS, 3, 3},
    },
    {autocert_interfaces__srv__GetRobotInfo__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = autocert_interfaces__srv__GetRobotInfo_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = autocert_interfaces__srv__GetRobotInfo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = autocert_interfaces__srv__GetRobotInfo_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char autocert_interfaces__srv__GetRobotInfo_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field autocert_interfaces__srv__GetRobotInfo_Request__FIELDS[] = {
  {
    {autocert_interfaces__srv__GetRobotInfo_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
autocert_interfaces__srv__GetRobotInfo_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {autocert_interfaces__srv__GetRobotInfo_Request__TYPE_NAME, 44, 44},
      {autocert_interfaces__srv__GetRobotInfo_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__robot_name[] = "robot_name";
static char autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__planning_group[] = "planning_group";
static char autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__end_effector_link[] = "end_effector_link";
static char autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__joint_names[] = "joint_names";
static char autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__link_names[] = "link_names";
static char autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__group_names[] = "group_names";
static char autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__joint_min_limits[] = "joint_min_limits";
static char autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__joint_max_limits[] = "joint_max_limits";
static char autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__joint_velocity_limits[] = "joint_velocity_limits";
static char autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__num_joints[] = "num_joints";
static char autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__num_links[] = "num_links";
static char autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__collision_checking_available[] = "collision_checking_available";
static char autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__kinematics_solver_available[] = "kinematics_solver_available";
static char autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__kinematics_solver_name[] = "kinematics_solver_name";
static char autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__default_timeout[] = "default_timeout";

static rosidl_runtime_c__type_description__Field autocert_interfaces__srv__GetRobotInfo_Response__FIELDS[] = {
  {
    {autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__robot_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__planning_group, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__end_effector_link, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__joint_names, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__link_names, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__group_names, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__joint_min_limits, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__joint_max_limits, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__joint_velocity_limits, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__num_joints, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__num_links, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__collision_checking_available, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__kinematics_solver_available, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__kinematics_solver_name, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Response__FIELD_NAME__default_timeout, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
autocert_interfaces__srv__GetRobotInfo_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {autocert_interfaces__srv__GetRobotInfo_Response__TYPE_NAME, 45, 45},
      {autocert_interfaces__srv__GetRobotInfo_Response__FIELDS, 15, 15},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char autocert_interfaces__srv__GetRobotInfo_Event__FIELD_NAME__info[] = "info";
static char autocert_interfaces__srv__GetRobotInfo_Event__FIELD_NAME__request[] = "request";
static char autocert_interfaces__srv__GetRobotInfo_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field autocert_interfaces__srv__GetRobotInfo_Event__FIELDS[] = {
  {
    {autocert_interfaces__srv__GetRobotInfo_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {autocert_interfaces__srv__GetRobotInfo_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {autocert_interfaces__srv__GetRobotInfo_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription autocert_interfaces__srv__GetRobotInfo_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {autocert_interfaces__srv__GetRobotInfo_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__GetRobotInfo_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
autocert_interfaces__srv__GetRobotInfo_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {autocert_interfaces__srv__GetRobotInfo_Event__TYPE_NAME, 42, 42},
      {autocert_interfaces__srv__GetRobotInfo_Event__FIELDS, 3, 3},
    },
    {autocert_interfaces__srv__GetRobotInfo_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = autocert_interfaces__srv__GetRobotInfo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = autocert_interfaces__srv__GetRobotInfo_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Request: Get comprehensive robot information\n"
  "---\n"
  "# Response: Complete robot metadata\n"
  "string robot_name\n"
  "string planning_group\n"
  "string end_effector_link\n"
  "string[] joint_names\n"
  "string[] link_names\n"
  "string[] group_names\n"
  "float64[] joint_min_limits\n"
  "float64[] joint_max_limits\n"
  "float64[] joint_velocity_limits\n"
  "int32 num_joints\n"
  "int32 num_links\n"
  "bool collision_checking_available\n"
  "bool kinematics_solver_available\n"
  "string kinematics_solver_name\n"
  "float64 default_timeout";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
autocert_interfaces__srv__GetRobotInfo__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {autocert_interfaces__srv__GetRobotInfo__TYPE_NAME, 36, 36},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 453, 453},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
autocert_interfaces__srv__GetRobotInfo_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {autocert_interfaces__srv__GetRobotInfo_Request__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
autocert_interfaces__srv__GetRobotInfo_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {autocert_interfaces__srv__GetRobotInfo_Response__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
autocert_interfaces__srv__GetRobotInfo_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {autocert_interfaces__srv__GetRobotInfo_Event__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
autocert_interfaces__srv__GetRobotInfo__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *autocert_interfaces__srv__GetRobotInfo__get_individual_type_description_source(NULL),
    sources[1] = *autocert_interfaces__srv__GetRobotInfo_Event__get_individual_type_description_source(NULL);
    sources[2] = *autocert_interfaces__srv__GetRobotInfo_Request__get_individual_type_description_source(NULL);
    sources[3] = *autocert_interfaces__srv__GetRobotInfo_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
autocert_interfaces__srv__GetRobotInfo_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *autocert_interfaces__srv__GetRobotInfo_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
autocert_interfaces__srv__GetRobotInfo_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *autocert_interfaces__srv__GetRobotInfo_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
autocert_interfaces__srv__GetRobotInfo_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *autocert_interfaces__srv__GetRobotInfo_Event__get_individual_type_description_source(NULL),
    sources[1] = *autocert_interfaces__srv__GetRobotInfo_Request__get_individual_type_description_source(NULL);
    sources[2] = *autocert_interfaces__srv__GetRobotInfo_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
