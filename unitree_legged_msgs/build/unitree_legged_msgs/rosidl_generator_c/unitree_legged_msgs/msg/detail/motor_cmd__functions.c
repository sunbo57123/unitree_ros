// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unitree_legged_msgs:msg/MotorCmd.idl
// generated code does not contain a copyright notice
#include "unitree_legged_msgs/msg/detail/motor_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
unitree_legged_msgs__msg__MotorCmd__init(unitree_legged_msgs__msg__MotorCmd * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // q
  // dq
  // tau
  // kp
  // kd
  // reserve
  return true;
}

void
unitree_legged_msgs__msg__MotorCmd__fini(unitree_legged_msgs__msg__MotorCmd * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // q
  // dq
  // tau
  // kp
  // kd
  // reserve
}

unitree_legged_msgs__msg__MotorCmd *
unitree_legged_msgs__msg__MotorCmd__create()
{
  unitree_legged_msgs__msg__MotorCmd * msg = (unitree_legged_msgs__msg__MotorCmd *)malloc(sizeof(unitree_legged_msgs__msg__MotorCmd));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unitree_legged_msgs__msg__MotorCmd));
  bool success = unitree_legged_msgs__msg__MotorCmd__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
unitree_legged_msgs__msg__MotorCmd__destroy(unitree_legged_msgs__msg__MotorCmd * msg)
{
  if (msg) {
    unitree_legged_msgs__msg__MotorCmd__fini(msg);
  }
  free(msg);
}


bool
unitree_legged_msgs__msg__MotorCmd__Sequence__init(unitree_legged_msgs__msg__MotorCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  unitree_legged_msgs__msg__MotorCmd * data = NULL;
  if (size) {
    data = (unitree_legged_msgs__msg__MotorCmd *)calloc(size, sizeof(unitree_legged_msgs__msg__MotorCmd));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unitree_legged_msgs__msg__MotorCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unitree_legged_msgs__msg__MotorCmd__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
unitree_legged_msgs__msg__MotorCmd__Sequence__fini(unitree_legged_msgs__msg__MotorCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      unitree_legged_msgs__msg__MotorCmd__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

unitree_legged_msgs__msg__MotorCmd__Sequence *
unitree_legged_msgs__msg__MotorCmd__Sequence__create(size_t size)
{
  unitree_legged_msgs__msg__MotorCmd__Sequence * array = (unitree_legged_msgs__msg__MotorCmd__Sequence *)malloc(sizeof(unitree_legged_msgs__msg__MotorCmd__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = unitree_legged_msgs__msg__MotorCmd__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
unitree_legged_msgs__msg__MotorCmd__Sequence__destroy(unitree_legged_msgs__msg__MotorCmd__Sequence * array)
{
  if (array) {
    unitree_legged_msgs__msg__MotorCmd__Sequence__fini(array);
  }
  free(array);
}
