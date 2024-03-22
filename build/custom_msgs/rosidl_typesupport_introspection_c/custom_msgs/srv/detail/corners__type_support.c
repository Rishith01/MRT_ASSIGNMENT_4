// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:srv/Corners.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/srv/detail/corners__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/srv/detail/corners__functions.h"
#include "custom_msgs/srv/detail/corners__struct.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_msgs__srv__Corners_Request__rosidl_typesupport_introspection_c__Corners_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__srv__Corners_Request__init(message_memory);
}

void custom_msgs__srv__Corners_Request__rosidl_typesupport_introspection_c__Corners_Request_fini_function(void * message_memory)
{
  custom_msgs__srv__Corners_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_msgs__srv__Corners_Request__rosidl_typesupport_introspection_c__Corners_Request_message_member_array[1] = {
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__srv__Corners_Request, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_msgs__srv__Corners_Request__rosidl_typesupport_introspection_c__Corners_Request_message_members = {
  "custom_msgs__srv",  // message namespace
  "Corners_Request",  // message name
  1,  // number of fields
  sizeof(custom_msgs__srv__Corners_Request),
  custom_msgs__srv__Corners_Request__rosidl_typesupport_introspection_c__Corners_Request_message_member_array,  // message members
  custom_msgs__srv__Corners_Request__rosidl_typesupport_introspection_c__Corners_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_msgs__srv__Corners_Request__rosidl_typesupport_introspection_c__Corners_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_msgs__srv__Corners_Request__rosidl_typesupport_introspection_c__Corners_Request_message_type_support_handle = {
  0,
  &custom_msgs__srv__Corners_Request__rosidl_typesupport_introspection_c__Corners_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, Corners_Request)() {
  custom_msgs__srv__Corners_Request__rosidl_typesupport_introspection_c__Corners_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!custom_msgs__srv__Corners_Request__rosidl_typesupport_introspection_c__Corners_Request_message_type_support_handle.typesupport_identifier) {
    custom_msgs__srv__Corners_Request__rosidl_typesupport_introspection_c__Corners_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_msgs__srv__Corners_Request__rosidl_typesupport_introspection_c__Corners_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_msgs/srv/detail/corners__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_msgs/srv/detail/corners__functions.h"
// already included above
// #include "custom_msgs/srv/detail/corners__struct.h"


// Include directives for member types
// Member `ids`
// Member `corners`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__Corners_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__srv__Corners_Response__init(message_memory);
}

void custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__Corners_Response_fini_function(void * message_memory)
{
  custom_msgs__srv__Corners_Response__fini(message_memory);
}

size_t custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__size_function__Corners_Response__ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__get_const_function__Corners_Response__ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__get_function__Corners_Response__ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__fetch_function__Corners_Response__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__get_const_function__Corners_Response__ids(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__assign_function__Corners_Response__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__get_function__Corners_Response__ids(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__resize_function__Corners_Response__ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__size_function__Corners_Response__corners(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__get_const_function__Corners_Response__corners(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__get_function__Corners_Response__corners(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__fetch_function__Corners_Response__corners(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__get_const_function__Corners_Response__corners(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__assign_function__Corners_Response__corners(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__get_function__Corners_Response__corners(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__resize_function__Corners_Response__corners(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__Corners_Response_message_member_array[2] = {
  {
    "ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__srv__Corners_Response, ids),  // bytes offset in struct
    NULL,  // default value
    custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__size_function__Corners_Response__ids,  // size() function pointer
    custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__get_const_function__Corners_Response__ids,  // get_const(index) function pointer
    custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__get_function__Corners_Response__ids,  // get(index) function pointer
    custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__fetch_function__Corners_Response__ids,  // fetch(index, &value) function pointer
    custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__assign_function__Corners_Response__ids,  // assign(index, value) function pointer
    custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__resize_function__Corners_Response__ids  // resize(index) function pointer
  },
  {
    "corners",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__srv__Corners_Response, corners),  // bytes offset in struct
    NULL,  // default value
    custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__size_function__Corners_Response__corners,  // size() function pointer
    custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__get_const_function__Corners_Response__corners,  // get_const(index) function pointer
    custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__get_function__Corners_Response__corners,  // get(index) function pointer
    custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__fetch_function__Corners_Response__corners,  // fetch(index, &value) function pointer
    custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__assign_function__Corners_Response__corners,  // assign(index, value) function pointer
    custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__resize_function__Corners_Response__corners  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__Corners_Response_message_members = {
  "custom_msgs__srv",  // message namespace
  "Corners_Response",  // message name
  2,  // number of fields
  sizeof(custom_msgs__srv__Corners_Response),
  custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__Corners_Response_message_member_array,  // message members
  custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__Corners_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__Corners_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__Corners_Response_message_type_support_handle = {
  0,
  &custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__Corners_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, Corners_Response)() {
  if (!custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__Corners_Response_message_type_support_handle.typesupport_identifier) {
    custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__Corners_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_msgs__srv__Corners_Response__rosidl_typesupport_introspection_c__Corners_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "custom_msgs/srv/detail/corners__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers custom_msgs__srv__detail__corners__rosidl_typesupport_introspection_c__Corners_service_members = {
  "custom_msgs__srv",  // service namespace
  "Corners",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // custom_msgs__srv__detail__corners__rosidl_typesupport_introspection_c__Corners_Request_message_type_support_handle,
  NULL  // response message
  // custom_msgs__srv__detail__corners__rosidl_typesupport_introspection_c__Corners_Response_message_type_support_handle
};

static rosidl_service_type_support_t custom_msgs__srv__detail__corners__rosidl_typesupport_introspection_c__Corners_service_type_support_handle = {
  0,
  &custom_msgs__srv__detail__corners__rosidl_typesupport_introspection_c__Corners_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, Corners_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, Corners_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, Corners)() {
  if (!custom_msgs__srv__detail__corners__rosidl_typesupport_introspection_c__Corners_service_type_support_handle.typesupport_identifier) {
    custom_msgs__srv__detail__corners__rosidl_typesupport_introspection_c__Corners_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)custom_msgs__srv__detail__corners__rosidl_typesupport_introspection_c__Corners_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, Corners_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, Corners_Response)()->data;
  }

  return &custom_msgs__srv__detail__corners__rosidl_typesupport_introspection_c__Corners_service_type_support_handle;
}
