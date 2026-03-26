// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from autocert_interfaces:msg/PoseMeasurement.idl
// generated code does not contain a copyright notice

#include "autocert_interfaces/msg/detail/pose_measurement__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
const rosidl_type_hash_t *
autocert_interfaces__msg__PoseMeasurement__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa7, 0xa4, 0x20, 0x82, 0xae, 0xc2, 0xd6, 0x6a,
      0xea, 0x26, 0x9d, 0x6a, 0xb1, 0x14, 0x3a, 0xb5,
      0xdd, 0x02, 0xae, 0x1b, 0x11, 0xa4, 0x3b, 0x12,
      0x38, 0xc8, 0x00, 0xb2, 0xba, 0x70, 0x18, 0x99,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
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
#endif

static char autocert_interfaces__msg__PoseMeasurement__TYPE_NAME[] = "autocert_interfaces/msg/PoseMeasurement";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";

// Define type names, field names, and default values
static char autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__pose_id[] = "pose_id";
static char autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__repetition[] = "repetition";
static char autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__pose_label[] = "pose_label";
static char autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__commanded_pose[] = "commanded_pose";
static char autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__measured_pose[] = "measured_pose";
static char autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__timestamp[] = "timestamp";
static char autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__measurement_system[] = "measurement_system";
static char autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__measurement_frame[] = "measurement_frame";
static char autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__measurement_quality[] = "measurement_quality";

static rosidl_runtime_c__type_description__Field autocert_interfaces__msg__PoseMeasurement__FIELDS[] = {
  {
    {autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__pose_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__repetition, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__pose_label, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__commanded_pose, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__measured_pose, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__measurement_system, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__measurement_frame, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {autocert_interfaces__msg__PoseMeasurement__FIELD_NAME__measurement_quality, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription autocert_interfaces__msg__PoseMeasurement__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
};

const rosidl_runtime_c__type_description__TypeDescription *
autocert_interfaces__msg__PoseMeasurement__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {autocert_interfaces__msg__PoseMeasurement__TYPE_NAME, 39, 39},
      {autocert_interfaces__msg__PoseMeasurement__FIELDS, 9, 9},
    },
    {autocert_interfaces__msg__PoseMeasurement__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# ISO-9283 compliant pose measurement message\n"
  "\n"
  "# Test identification\n"
  "int32 pose_id          # Pose identifier (1-5 for ISO test)\n"
  "int32 repetition       # Repetition number (1-30)\n"
  "string pose_label      # Optional label (e.g., \"P1\", \"CENTER\")\n"
  "\n"
  "# Commanded pose (from robot controller)\n"
  "geometry_msgs/Pose commanded_pose\n"
  "\n"
  "# Measured pose (from external measurement system)\n"
  "geometry_msgs/Pose measured_pose\n"
  "\n"
  "# Measurement metadata\n"
  "builtin_interfaces/Time timestamp\n"
  "string measurement_system   # e.g., \"laser_tracker\", \"motion_capture\"\n"
  "string measurement_frame    # Frame ID of measurement\n"
  "float64 measurement_quality # Quality metric (0-1)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
autocert_interfaces__msg__PoseMeasurement__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {autocert_interfaces__msg__PoseMeasurement__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 635, 635},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
autocert_interfaces__msg__PoseMeasurement__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *autocert_interfaces__msg__PoseMeasurement__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
