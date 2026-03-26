// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from autocert_interfaces:srv/CheckCollision.idl
// generated code does not contain a copyright notice

#include "autocert_interfaces/srv/detail/check_collision__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
const rosidl_type_hash_t *
autocert_interfaces__srv__CheckCollision__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0xa5, 0xf4, 0x94, 0x2a, 0x02, 0xd5, 0x17,
      0x02, 0x20, 0xc7, 0x9a, 0x78, 0x01, 0x7e, 0xa6,
      0x5f, 0xdf, 0x54, 0xa8, 0xa9, 0x93, 0x90, 0xab,
      0xdf, 0x20, 0xe6, 0xc0, 0xd2, 0x9e, 0xe2, 0x0d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
const rosidl_type_hash_t *
autocert_interfaces__srv__CheckCollision_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0x66, 0xac, 0xdb, 0x0b, 0x72, 0x22, 0x23,
      0xcc, 0x5f, 0xa2, 0x9c, 0x93, 0x81, 0x32, 0xcb,
      0x05, 0xf5, 0x91, 0xf8, 0x9b, 0x4d, 0x0f, 0x85,
      0x61, 0xff, 0x51, 0x05, 0xa9, 0xa1, 0x85, 0xfb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
const rosidl_type_hash_t *
autocert_interfaces__srv__CheckCollision_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x47, 0x19, 0x16, 0x8a, 0x99, 0x30, 0xeb, 0x18,
      0x66, 0x44, 0xfb, 0x97, 0x01, 0x98, 0x4b, 0xc9,
      0xe8, 0x66, 0xb2, 0xed, 0x8c, 0x92, 0xbe, 0x18,
      0x42, 0xb3, 0x4f, 0xb4, 0xeb, 0x5f, 0x3a, 0x0f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
const rosidl_type_hash_t *
autocert_interfaces__srv__CheckCollision_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0x65, 0x59, 0x60, 0x02, 0x78, 0x61, 0x3d,
      0xac, 0x43, 0x53, 0x59, 0xfe, 0x35, 0x30, 0x15,
      0xcf, 0x7f, 0x0e, 0x33, 0xbb, 0x7d, 0xa9, 0x06,
      0x6a, 0x21, 0xe8, 0x4a, 0x1e, 0x85, 0xcd, 0xe7,
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

static char autocert_interfaces__srv__CheckCollision__TYPE_NAME[] = "autocert_interfaces/srv/CheckCollision";
static char autocert_interfaces__srv__CheckCollision_Event__TYPE_NAME[] = "autocert_interfaces/srv/CheckCollision_Event";
static char autocert_interfaces__srv__CheckCollision_Request__TYPE_NAME[] = "autocert_interfaces/srv/CheckCollision_Request";
static char autocert_interfaces__srv__CheckCollision_Response__TYPE_NAME[] = "autocert_interfaces/srv/CheckCollision_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char autocert_interfaces__srv__CheckCollision__FIELD_NAME__request_message[] = "request_message";
static char autocert_interfaces__srv__CheckCollision__FIELD_NAME__response_message[] = "response_message";
static char autocert_interfaces__srv__CheckCollision__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field autocert_interfaces__srv__CheckCollision__FIELDS[] = {
  {
    {autocert_interfaces__srv__CheckCollision__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {autocert_interfaces__srv__CheckCollision_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__CheckCollision__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {autocert_interfaces__srv__CheckCollision_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__CheckCollision__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {autocert_interfaces__srv__CheckCollision_Event__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription autocert_interfaces__srv__CheckCollision__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {autocert_interfaces__srv__CheckCollision_Event__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__CheckCollision_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__CheckCollision_Response__TYPE_NAME, 47, 47},
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
autocert_interfaces__srv__CheckCollision__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {autocert_interfaces__srv__CheckCollision__TYPE_NAME, 38, 38},
      {autocert_interfaces__srv__CheckCollision__FIELDS, 3, 3},
    },
    {autocert_interfaces__srv__CheckCollision__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = autocert_interfaces__srv__CheckCollision_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = autocert_interfaces__srv__CheckCollision_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = autocert_interfaces__srv__CheckCollision_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char autocert_interfaces__srv__CheckCollision_Request__FIELD_NAME__joint_positions[] = "joint_positions";
static char autocert_interfaces__srv__CheckCollision_Request__FIELD_NAME__planning_group[] = "planning_group";

static rosidl_runtime_c__type_description__Field autocert_interfaces__srv__CheckCollision_Request__FIELDS[] = {
  {
    {autocert_interfaces__srv__CheckCollision_Request__FIELD_NAME__joint_positions, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__CheckCollision_Request__FIELD_NAME__planning_group, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
autocert_interfaces__srv__CheckCollision_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {autocert_interfaces__srv__CheckCollision_Request__TYPE_NAME, 46, 46},
      {autocert_interfaces__srv__CheckCollision_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char autocert_interfaces__srv__CheckCollision_Response__FIELD_NAME__in_collision[] = "in_collision";
static char autocert_interfaces__srv__CheckCollision_Response__FIELD_NAME__self_collision[] = "self_collision";
static char autocert_interfaces__srv__CheckCollision_Response__FIELD_NAME__environment_collision[] = "environment_collision";
static char autocert_interfaces__srv__CheckCollision_Response__FIELD_NAME__colliding_links[] = "colliding_links";
static char autocert_interfaces__srv__CheckCollision_Response__FIELD_NAME__contact_points[] = "contact_points";

static rosidl_runtime_c__type_description__Field autocert_interfaces__srv__CheckCollision_Response__FIELDS[] = {
  {
    {autocert_interfaces__srv__CheckCollision_Response__FIELD_NAME__in_collision, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__CheckCollision_Response__FIELD_NAME__self_collision, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__CheckCollision_Response__FIELD_NAME__environment_collision, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__CheckCollision_Response__FIELD_NAME__colliding_links, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__CheckCollision_Response__FIELD_NAME__contact_points, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
autocert_interfaces__srv__CheckCollision_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {autocert_interfaces__srv__CheckCollision_Response__TYPE_NAME, 47, 47},
      {autocert_interfaces__srv__CheckCollision_Response__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char autocert_interfaces__srv__CheckCollision_Event__FIELD_NAME__info[] = "info";
static char autocert_interfaces__srv__CheckCollision_Event__FIELD_NAME__request[] = "request";
static char autocert_interfaces__srv__CheckCollision_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field autocert_interfaces__srv__CheckCollision_Event__FIELDS[] = {
  {
    {autocert_interfaces__srv__CheckCollision_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__CheckCollision_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {autocert_interfaces__srv__CheckCollision_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__CheckCollision_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {autocert_interfaces__srv__CheckCollision_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription autocert_interfaces__srv__CheckCollision_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {autocert_interfaces__srv__CheckCollision_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__CheckCollision_Response__TYPE_NAME, 47, 47},
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
autocert_interfaces__srv__CheckCollision_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {autocert_interfaces__srv__CheckCollision_Event__TYPE_NAME, 44, 44},
      {autocert_interfaces__srv__CheckCollision_Event__FIELDS, 3, 3},
    },
    {autocert_interfaces__srv__CheckCollision_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = autocert_interfaces__srv__CheckCollision_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = autocert_interfaces__srv__CheckCollision_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Check collision for joint configuration\n"
  "float64[] joint_positions\n"
  "string planning_group\n"
  "---\n"
  "bool in_collision\n"
  "bool self_collision\n"
  "bool environment_collision\n"
  "string[] colliding_links\n"
  "float64[] contact_points";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
autocert_interfaces__srv__CheckCollision__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {autocert_interfaces__srv__CheckCollision__TYPE_NAME, 38, 38},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 208, 208},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
autocert_interfaces__srv__CheckCollision_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {autocert_interfaces__srv__CheckCollision_Request__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
autocert_interfaces__srv__CheckCollision_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {autocert_interfaces__srv__CheckCollision_Response__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
autocert_interfaces__srv__CheckCollision_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {autocert_interfaces__srv__CheckCollision_Event__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
autocert_interfaces__srv__CheckCollision__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *autocert_interfaces__srv__CheckCollision__get_individual_type_description_source(NULL),
    sources[1] = *autocert_interfaces__srv__CheckCollision_Event__get_individual_type_description_source(NULL);
    sources[2] = *autocert_interfaces__srv__CheckCollision_Request__get_individual_type_description_source(NULL);
    sources[3] = *autocert_interfaces__srv__CheckCollision_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
autocert_interfaces__srv__CheckCollision_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *autocert_interfaces__srv__CheckCollision_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
autocert_interfaces__srv__CheckCollision_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *autocert_interfaces__srv__CheckCollision_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
autocert_interfaces__srv__CheckCollision_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *autocert_interfaces__srv__CheckCollision_Event__get_individual_type_description_source(NULL),
    sources[1] = *autocert_interfaces__srv__CheckCollision_Request__get_individual_type_description_source(NULL);
    sources[2] = *autocert_interfaces__srv__CheckCollision_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
