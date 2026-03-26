// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from autocert_interfaces:srv/SampleWorkspace.idl
// generated code does not contain a copyright notice

#include "autocert_interfaces/srv/detail/sample_workspace__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
const rosidl_type_hash_t *
autocert_interfaces__srv__SampleWorkspace__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0xee, 0x5c, 0xa0, 0x7e, 0xf8, 0x2b, 0xc8,
      0x48, 0xfe, 0x02, 0x50, 0x52, 0x46, 0x6a, 0xc2,
      0x7f, 0x46, 0xc5, 0x38, 0x77, 0x56, 0x95, 0xe2,
      0xaa, 0xdc, 0xa5, 0x58, 0xc6, 0xbe, 0x59, 0xd0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
const rosidl_type_hash_t *
autocert_interfaces__srv__SampleWorkspace_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x84, 0x9d, 0x61, 0x7e, 0x49, 0x8e, 0x8a, 0xfd,
      0xeb, 0x00, 0xce, 0x7a, 0xbf, 0x59, 0xe9, 0x63,
      0xc1, 0xdb, 0x2a, 0xb1, 0x9e, 0x2a, 0xbb, 0x31,
      0xb7, 0x77, 0xd2, 0x2d, 0xe6, 0xd5, 0x40, 0x8b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
const rosidl_type_hash_t *
autocert_interfaces__srv__SampleWorkspace_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc8, 0x68, 0x98, 0x1e, 0x6c, 0xad, 0x28, 0x0b,
      0xe4, 0x59, 0x43, 0x2c, 0x93, 0x0f, 0x70, 0x4c,
      0x95, 0xe6, 0x56, 0xd0, 0x6c, 0xe7, 0xe1, 0x4a,
      0x07, 0xb2, 0xa2, 0xb6, 0x3c, 0x57, 0x5f, 0xc2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
const rosidl_type_hash_t *
autocert_interfaces__srv__SampleWorkspace_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x40, 0xdb, 0xe9, 0x17, 0xa1, 0xce, 0xb6, 0x12,
      0x2f, 0xda, 0x60, 0x2f, 0x6d, 0x1a, 0x93, 0x7c,
      0xff, 0x0f, 0x71, 0x29, 0x11, 0x55, 0xc1, 0xce,
      0x02, 0xcd, 0xde, 0xbd, 0xd9, 0xff, 0xea, 0x0a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char autocert_interfaces__srv__SampleWorkspace__TYPE_NAME[] = "autocert_interfaces/srv/SampleWorkspace";
static char autocert_interfaces__srv__SampleWorkspace_Event__TYPE_NAME[] = "autocert_interfaces/srv/SampleWorkspace_Event";
static char autocert_interfaces__srv__SampleWorkspace_Request__TYPE_NAME[] = "autocert_interfaces/srv/SampleWorkspace_Request";
static char autocert_interfaces__srv__SampleWorkspace_Response__TYPE_NAME[] = "autocert_interfaces/srv/SampleWorkspace_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char autocert_interfaces__srv__SampleWorkspace__FIELD_NAME__request_message[] = "request_message";
static char autocert_interfaces__srv__SampleWorkspace__FIELD_NAME__response_message[] = "response_message";
static char autocert_interfaces__srv__SampleWorkspace__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field autocert_interfaces__srv__SampleWorkspace__FIELDS[] = {
  {
    {autocert_interfaces__srv__SampleWorkspace__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {autocert_interfaces__srv__SampleWorkspace_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__SampleWorkspace__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {autocert_interfaces__srv__SampleWorkspace_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__SampleWorkspace__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {autocert_interfaces__srv__SampleWorkspace_Event__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription autocert_interfaces__srv__SampleWorkspace__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {autocert_interfaces__srv__SampleWorkspace_Event__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__SampleWorkspace_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__SampleWorkspace_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
autocert_interfaces__srv__SampleWorkspace__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {autocert_interfaces__srv__SampleWorkspace__TYPE_NAME, 39, 39},
      {autocert_interfaces__srv__SampleWorkspace__FIELDS, 3, 3},
    },
    {autocert_interfaces__srv__SampleWorkspace__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = autocert_interfaces__srv__SampleWorkspace_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = autocert_interfaces__srv__SampleWorkspace_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = autocert_interfaces__srv__SampleWorkspace_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char autocert_interfaces__srv__SampleWorkspace_Request__FIELD_NAME__sampling_strategy[] = "sampling_strategy";
static char autocert_interfaces__srv__SampleWorkspace_Request__FIELD_NAME__num_samples[] = "num_samples";
static char autocert_interfaces__srv__SampleWorkspace_Request__FIELD_NAME__seed_configuration[] = "seed_configuration";
static char autocert_interfaces__srv__SampleWorkspace_Request__FIELD_NAME__enable_collision_checking[] = "enable_collision_checking";

static rosidl_runtime_c__type_description__Field autocert_interfaces__srv__SampleWorkspace_Request__FIELDS[] = {
  {
    {autocert_interfaces__srv__SampleWorkspace_Request__FIELD_NAME__sampling_strategy, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__SampleWorkspace_Request__FIELD_NAME__num_samples, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__SampleWorkspace_Request__FIELD_NAME__seed_configuration, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__SampleWorkspace_Request__FIELD_NAME__enable_collision_checking, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
autocert_interfaces__srv__SampleWorkspace_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {autocert_interfaces__srv__SampleWorkspace_Request__TYPE_NAME, 47, 47},
      {autocert_interfaces__srv__SampleWorkspace_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char autocert_interfaces__srv__SampleWorkspace_Response__FIELD_NAME__joint_samples[] = "joint_samples";
static char autocert_interfaces__srv__SampleWorkspace_Response__FIELD_NAME__poses[] = "poses";
static char autocert_interfaces__srv__SampleWorkspace_Response__FIELD_NAME__valid_indices[] = "valid_indices";
static char autocert_interfaces__srv__SampleWorkspace_Response__FIELD_NAME__reachability_index[] = "reachability_index";
static char autocert_interfaces__srv__SampleWorkspace_Response__FIELD_NAME__workspace_volume[] = "workspace_volume";

static rosidl_runtime_c__type_description__Field autocert_interfaces__srv__SampleWorkspace_Response__FIELDS[] = {
  {
    {autocert_interfaces__srv__SampleWorkspace_Response__FIELD_NAME__joint_samples, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__SampleWorkspace_Response__FIELD_NAME__poses, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__SampleWorkspace_Response__FIELD_NAME__valid_indices, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__SampleWorkspace_Response__FIELD_NAME__reachability_index, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__SampleWorkspace_Response__FIELD_NAME__workspace_volume, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription autocert_interfaces__srv__SampleWorkspace_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
autocert_interfaces__srv__SampleWorkspace_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {autocert_interfaces__srv__SampleWorkspace_Response__TYPE_NAME, 48, 48},
      {autocert_interfaces__srv__SampleWorkspace_Response__FIELDS, 5, 5},
    },
    {autocert_interfaces__srv__SampleWorkspace_Response__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char autocert_interfaces__srv__SampleWorkspace_Event__FIELD_NAME__info[] = "info";
static char autocert_interfaces__srv__SampleWorkspace_Event__FIELD_NAME__request[] = "request";
static char autocert_interfaces__srv__SampleWorkspace_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field autocert_interfaces__srv__SampleWorkspace_Event__FIELDS[] = {
  {
    {autocert_interfaces__srv__SampleWorkspace_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__SampleWorkspace_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {autocert_interfaces__srv__SampleWorkspace_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__SampleWorkspace_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {autocert_interfaces__srv__SampleWorkspace_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription autocert_interfaces__srv__SampleWorkspace_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {autocert_interfaces__srv__SampleWorkspace_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__srv__SampleWorkspace_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
autocert_interfaces__srv__SampleWorkspace_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {autocert_interfaces__srv__SampleWorkspace_Event__TYPE_NAME, 45, 45},
      {autocert_interfaces__srv__SampleWorkspace_Event__FIELDS, 3, 3},
    },
    {autocert_interfaces__srv__SampleWorkspace_Event__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = autocert_interfaces__srv__SampleWorkspace_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = autocert_interfaces__srv__SampleWorkspace_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Request: Generate workspace samples\n"
  "string sampling_strategy        # \"random\", \"latin\", \"halton\", \"grid\"\n"
  "int32 num_samples               # Number of samples to generate\n"
  "float64[] seed_configuration    # Optional seed configuration\n"
  "bool enable_collision_checking  # Whether to check collisions\n"
  "---\n"
  "# Response: Generated workspace data\n"
  "float64[] joint_samples          # Flattened joint samples\n"
  "geometry_msgs/Pose[] poses       # Corresponding end-effector poses\n"
  "int32[] valid_indices            # Indices of collision-free samples\n"
  "float64 reachability_index       # Percentage of reachable configurations\n"
  "float64 workspace_volume         # Estimated workspace volume (if computed)";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
autocert_interfaces__srv__SampleWorkspace__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {autocert_interfaces__srv__SampleWorkspace__TYPE_NAME, 39, 39},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 682, 682},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
autocert_interfaces__srv__SampleWorkspace_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {autocert_interfaces__srv__SampleWorkspace_Request__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
autocert_interfaces__srv__SampleWorkspace_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {autocert_interfaces__srv__SampleWorkspace_Response__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
autocert_interfaces__srv__SampleWorkspace_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {autocert_interfaces__srv__SampleWorkspace_Event__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
autocert_interfaces__srv__SampleWorkspace__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *autocert_interfaces__srv__SampleWorkspace__get_individual_type_description_source(NULL),
    sources[1] = *autocert_interfaces__srv__SampleWorkspace_Event__get_individual_type_description_source(NULL);
    sources[2] = *autocert_interfaces__srv__SampleWorkspace_Request__get_individual_type_description_source(NULL);
    sources[3] = *autocert_interfaces__srv__SampleWorkspace_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[8] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
autocert_interfaces__srv__SampleWorkspace_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *autocert_interfaces__srv__SampleWorkspace_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
autocert_interfaces__srv__SampleWorkspace_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *autocert_interfaces__srv__SampleWorkspace_Response__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
autocert_interfaces__srv__SampleWorkspace_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *autocert_interfaces__srv__SampleWorkspace_Event__get_individual_type_description_source(NULL),
    sources[1] = *autocert_interfaces__srv__SampleWorkspace_Request__get_individual_type_description_source(NULL);
    sources[2] = *autocert_interfaces__srv__SampleWorkspace_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
