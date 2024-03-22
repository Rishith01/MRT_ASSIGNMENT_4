// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:srv/Path.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__PATH__STRUCT_H_
#define CUSTOM_MSGS__SRV__DETAIL__PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ids'
// Member 'corners'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Path in the package custom_msgs.
typedef struct custom_msgs__srv__Path_Request
{
  rosidl_runtime_c__int64__Sequence ids;
  rosidl_runtime_c__int64__Sequence corners;
} custom_msgs__srv__Path_Request;

// Struct for a sequence of custom_msgs__srv__Path_Request.
typedef struct custom_msgs__srv__Path_Request__Sequence
{
  custom_msgs__srv__Path_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__srv__Path_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'path'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Path in the package custom_msgs.
typedef struct custom_msgs__srv__Path_Response
{
  rosidl_runtime_c__int64__Sequence path;
} custom_msgs__srv__Path_Response;

// Struct for a sequence of custom_msgs__srv__Path_Response.
typedef struct custom_msgs__srv__Path_Response__Sequence
{
  custom_msgs__srv__Path_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__srv__Path_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__SRV__DETAIL__PATH__STRUCT_H_
