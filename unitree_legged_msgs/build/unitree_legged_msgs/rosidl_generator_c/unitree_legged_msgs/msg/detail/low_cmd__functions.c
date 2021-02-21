// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unitree_legged_msgs:msg/LowCmd.idl
// generated code does not contain a copyright notice
#include "unitree_legged_msgs/msg/detail/low_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `motorcmd`
#include "unitree_legged_msgs/msg/detail/motor_cmd__functions.h"
// Member `led`
#include "unitree_legged_msgs/msg/detail/led__functions.h"
// Member `ff`
#include "unitree_legged_msgs/msg/detail/cartesian__functions.h"

bool
unitree_legged_msgs__msg__LowCmd__init(unitree_legged_msgs__msg__LowCmd * msg)
{
  if (!msg) {
    return false;
  }
  // levelflag
  // commversion
  // robotid
  // sn
  // bandwidth
  // motorcmd
  for (size_t i = 0; i < 20; ++i) {
    if (!unitree_legged_msgs__msg__MotorCmd__init(&msg->motorcmd[i])) {
      unitree_legged_msgs__msg__LowCmd__fini(msg);
      return false;
    }
  }
  // led
  for (size_t i = 0; i < 4; ++i) {
    if (!unitree_legged_msgs__msg__LED__init(&msg->led[i])) {
      unitree_legged_msgs__msg__LowCmd__fini(msg);
      return false;
    }
  }
  // wirelessremote
  // reserve
  // crc
  // ff
  for (size_t i = 0; i < 4; ++i) {
    if (!unitree_legged_msgs__msg__Cartesian__init(&msg->ff[i])) {
      unitree_legged_msgs__msg__LowCmd__fini(msg);
      return false;
    }
  }
  return true;
}

void
unitree_legged_msgs__msg__LowCmd__fini(unitree_legged_msgs__msg__LowCmd * msg)
{
  if (!msg) {
    return;
  }
  // levelflag
  // commversion
  // robotid
  // sn
  // bandwidth
  // motorcmd
  for (size_t i = 0; i < 20; ++i) {
    unitree_legged_msgs__msg__MotorCmd__fini(&msg->motorcmd[i]);
  }
  // led
  for (size_t i = 0; i < 4; ++i) {
    unitree_legged_msgs__msg__LED__fini(&msg->led[i]);
  }
  // wirelessremote
  // reserve
  // crc
  // ff
  for (size_t i = 0; i < 4; ++i) {
    unitree_legged_msgs__msg__Cartesian__fini(&msg->ff[i]);
  }
}

unitree_legged_msgs__msg__LowCmd *
unitree_legged_msgs__msg__LowCmd__create()
{
  unitree_legged_msgs__msg__LowCmd * msg = (unitree_legged_msgs__msg__LowCmd *)malloc(sizeof(unitree_legged_msgs__msg__LowCmd));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unitree_legged_msgs__msg__LowCmd));
  bool success = unitree_legged_msgs__msg__LowCmd__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
unitree_legged_msgs__msg__LowCmd__destroy(unitree_legged_msgs__msg__LowCmd * msg)
{
  if (msg) {
    unitree_legged_msgs__msg__LowCmd__fini(msg);
  }
  free(msg);
}


bool
unitree_legged_msgs__msg__LowCmd__Sequence__init(unitree_legged_msgs__msg__LowCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  unitree_legged_msgs__msg__LowCmd * data = NULL;
  if (size) {
    data = (unitree_legged_msgs__msg__LowCmd *)calloc(size, sizeof(unitree_legged_msgs__msg__LowCmd));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unitree_legged_msgs__msg__LowCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unitree_legged_msgs__msg__LowCmd__fini(&data[i - 1]);
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
unitree_legged_msgs__msg__LowCmd__Sequence__fini(unitree_legged_msgs__msg__LowCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      unitree_legged_msgs__msg__LowCmd__fini(&array->data[i]);
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

unitree_legged_msgs__msg__LowCmd__Sequence *
unitree_legged_msgs__msg__LowCmd__Sequence__create(size_t size)
{
  unitree_legged_msgs__msg__LowCmd__Sequence * array = (unitree_legged_msgs__msg__LowCmd__Sequence *)malloc(sizeof(unitree_legged_msgs__msg__LowCmd__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = unitree_legged_msgs__msg__LowCmd__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
unitree_legged_msgs__msg__LowCmd__Sequence__destroy(unitree_legged_msgs__msg__LowCmd__Sequence * array)
{
  if (array) {
    unitree_legged_msgs__msg__LowCmd__Sequence__fini(array);
  }
  free(array);
}
