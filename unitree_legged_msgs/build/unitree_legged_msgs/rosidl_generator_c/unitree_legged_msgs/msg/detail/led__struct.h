// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_legged_msgs:msg/LED.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__LED__STRUCT_H_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/LED in the package unitree_legged_msgs.
typedef struct unitree_legged_msgs__msg__LED
{
  int8_t r;
  int8_t g;
  int8_t b;
} unitree_legged_msgs__msg__LED;

// Struct for a sequence of unitree_legged_msgs__msg__LED.
typedef struct unitree_legged_msgs__msg__LED__Sequence
{
  unitree_legged_msgs__msg__LED * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_legged_msgs__msg__LED__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__LED__STRUCT_H_
