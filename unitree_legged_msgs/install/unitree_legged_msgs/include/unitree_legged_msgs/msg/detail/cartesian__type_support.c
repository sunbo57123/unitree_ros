// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unitree_legged_msgs:msg/Cartesian.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unitree_legged_msgs/msg/detail/cartesian__rosidl_typesupport_introspection_c.h"
#include "unitree_legged_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unitree_legged_msgs/msg/detail/cartesian__functions.h"
#include "unitree_legged_msgs/msg/detail/cartesian__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Cartesian__rosidl_typesupport_introspection_c__Cartesian_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unitree_legged_msgs__msg__Cartesian__init(message_memory);
}

void Cartesian__rosidl_typesupport_introspection_c__Cartesian_fini_function(void * message_memory)
{
  unitree_legged_msgs__msg__Cartesian__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Cartesian__rosidl_typesupport_introspection_c__Cartesian_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__Cartesian, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__Cartesian, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__Cartesian, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Cartesian__rosidl_typesupport_introspection_c__Cartesian_message_members = {
  "unitree_legged_msgs__msg",  // message namespace
  "Cartesian",  // message name
  3,  // number of fields
  sizeof(unitree_legged_msgs__msg__Cartesian),
  Cartesian__rosidl_typesupport_introspection_c__Cartesian_message_member_array,  // message members
  Cartesian__rosidl_typesupport_introspection_c__Cartesian_init_function,  // function to initialize message memory (memory has to be allocated)
  Cartesian__rosidl_typesupport_introspection_c__Cartesian_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Cartesian__rosidl_typesupport_introspection_c__Cartesian_message_type_support_handle = {
  0,
  &Cartesian__rosidl_typesupport_introspection_c__Cartesian_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unitree_legged_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_legged_msgs, msg, Cartesian)() {
  if (!Cartesian__rosidl_typesupport_introspection_c__Cartesian_message_type_support_handle.typesupport_identifier) {
    Cartesian__rosidl_typesupport_introspection_c__Cartesian_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Cartesian__rosidl_typesupport_introspection_c__Cartesian_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
