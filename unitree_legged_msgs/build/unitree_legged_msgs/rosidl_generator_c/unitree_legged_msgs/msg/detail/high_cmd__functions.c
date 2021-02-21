// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unitree_legged_msgs:msg/HighCmd.idl
// generated code does not contain a copyright notice
#include "unitree_legged_msgs/msg/detail/high_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `led`
#include "unitree_legged_msgs/msg/detail/led__functions.h"

bool
unitree_legged_msgs__msg__HighCmd__init(unitree_legged_msgs__msg__HighCmd * msg)
{
  if (!msg) {
    return false;
  }
  // levelflag
  // commversion
  // robotid
  // sn
  // bandwidth
  // mode
  // forwardspeed
  // sidespeed
  // rotatespeed
  // bodyheight
  // footraiseheight
  // yaw
  // pitch
  // roll
  // led
  for (size_t i = 0; i < 4; ++i) {
    if (!unitree_legged_msgs__msg__LED__init(&msg->led[i])) {
      unitree_legged_msgs__msg__HighCmd__fini(msg);
      return false;
    }
  }
  // wirelessremote
  // appremote
  // reserve
  // crc
  return true;
}

void
unitree_legged_msgs__msg__HighCmd__fini(unitree_legged_msgs__msg__HighCmd * msg)
{
  if (!msg) {
    return;
  }
  // levelflag
  // commversion
  // robotid
  // sn
  // bandwidth
  // mode
  // forwardspeed
  // sidespeed
  // rotatespeed
  // bodyheight
  // footraiseheight
  // yaw
  // pitch
  // roll
  // led
  for (size_t i = 0; i < 4; ++i) {
    unitree_legged_msgs__msg__LED__fini(&msg->led[i]);
  }
  // wirelessremote
  // appremote
  // reserve
  // crc
}

unitree_legged_msgs__msg__HighCmd *
unitree_legged_msgs__msg__HighCmd__create()
{
  unitree_legged_msgs__msg__HighCmd * msg = (unitree_legged_msgs__msg__HighCmd *)malloc(sizeof(unitree_legged_msgs__msg__HighCmd));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unitree_legged_msgs__msg__HighCmd));
  bool success = unitree_legged_msgs__msg__HighCmd__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
unitree_legged_msgs__msg__HighCmd__destroy(unitree_legged_msgs__msg__HighCmd * msg)
{
  if (msg) {
    unitree_legged_msgs__msg__HighCmd__fini(msg);
  }
  free(msg);
}


bool
unitree_legged_msgs__msg__HighCmd__Sequence__init(unitree_legged_msgs__msg__HighCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  unitree_legged_msgs__msg__HighCmd * data = NULL;
  if (size) {
    data = (unitree_legged_msgs__msg__HighCmd *)calloc(size, sizeof(unitree_legged_msgs__msg__HighCmd));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unitree_legged_msgs__msg__HighCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unitree_legged_msgs__msg__HighCmd__fini(&data[i - 1]);
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
unitree_legged_msgs__msg__HighCmd__Sequence__fini(unitree_legged_msgs__msg__HighCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      unitree_legged_msgs__msg__HighCmd__fini(&array->data[i]);
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

unitree_legged_msgs__msg__HighCmd__Sequence *
unitree_legged_msgs__msg__HighCmd__Sequence__create(size_t size)
{
  unitree_legged_msgs__msg__HighCmd__Sequence * array = (unitree_legged_msgs__msg__HighCmd__Sequence *)malloc(sizeof(unitree_legged_msgs__msg__HighCmd__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = unitree_legged_msgs__msg__HighCmd__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
unitree_legged_msgs__msg__HighCmd__Sequence__destroy(unitree_legged_msgs__msg__HighCmd__Sequence * array)
{
  if (array) {
    unitree_legged_msgs__msg__HighCmd__Sequence__fini(array);
  }
  free(array);
}
