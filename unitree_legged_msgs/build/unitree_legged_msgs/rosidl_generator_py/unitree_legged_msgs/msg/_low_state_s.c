// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from unitree_legged_msgs:msg/LowState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "unitree_legged_msgs/msg/detail/low_state__struct.h"
#include "unitree_legged_msgs/msg/detail/low_state__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "unitree_legged_msgs/msg/detail/cartesian__functions.h"
#include "unitree_legged_msgs/msg/detail/motor_state__functions.h"
// end nested array functions include
bool unitree_legged_msgs__msg__imu__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * unitree_legged_msgs__msg__imu__convert_to_py(void * raw_ros_message);
bool unitree_legged_msgs__msg__motor_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * unitree_legged_msgs__msg__motor_state__convert_to_py(void * raw_ros_message);
bool unitree_legged_msgs__msg__cartesian__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * unitree_legged_msgs__msg__cartesian__convert_to_py(void * raw_ros_message);
bool unitree_legged_msgs__msg__cartesian__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * unitree_legged_msgs__msg__cartesian__convert_to_py(void * raw_ros_message);
bool unitree_legged_msgs__msg__cartesian__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * unitree_legged_msgs__msg__cartesian__convert_to_py(void * raw_ros_message);
bool unitree_legged_msgs__msg__cartesian__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * unitree_legged_msgs__msg__cartesian__convert_to_py(void * raw_ros_message);
bool unitree_legged_msgs__msg__cartesian__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * unitree_legged_msgs__msg__cartesian__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool unitree_legged_msgs__msg__low_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("unitree_legged_msgs.msg._low_state.LowState", full_classname_dest, 43) == 0);
  }
  unitree_legged_msgs__msg__LowState * ros_message = _ros_message;
  {  // levelflag
    PyObject * field = PyObject_GetAttrString(_pymsg, "levelflag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->levelflag = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // commversion
    PyObject * field = PyObject_GetAttrString(_pymsg, "commversion");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->commversion = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // robotid
    PyObject * field = PyObject_GetAttrString(_pymsg, "robotid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robotid = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sn
    PyObject * field = PyObject_GetAttrString(_pymsg, "sn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sn = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // bandwidth
    PyObject * field = PyObject_GetAttrString(_pymsg, "bandwidth");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bandwidth = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // imu
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu");
    if (!field) {
      return false;
    }
    if (!unitree_legged_msgs__msg__imu__convert_from_py(field, &ros_message->imu)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // motorstate
    PyObject * field = PyObject_GetAttrString(_pymsg, "motorstate");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'motorstate'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 20;
    unitree_legged_msgs__msg__MotorState * dest = ros_message->motorstate;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!unitree_legged_msgs__msg__motor_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // footforce
    PyObject * field = PyObject_GetAttrString(_pymsg, "footforce");
    if (!field) {
      return false;
    }
    // TODO(dirk-thomas) use a better way to check the type before casting
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    Py_INCREF(seq_field);
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT16);
    Py_ssize_t size = 4;
    int16_t * dest = ros_message->footforce;
    for (Py_ssize_t i = 0; i < size; ++i) {
      int16_t tmp = *(npy_int16 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(int16_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // footforceest
    PyObject * field = PyObject_GetAttrString(_pymsg, "footforceest");
    if (!field) {
      return false;
    }
    // TODO(dirk-thomas) use a better way to check the type before casting
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    Py_INCREF(seq_field);
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT16);
    Py_ssize_t size = 4;
    int16_t * dest = ros_message->footforceest;
    for (Py_ssize_t i = 0; i < size; ++i) {
      int16_t tmp = *(npy_int16 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(int16_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // tick
    PyObject * field = PyObject_GetAttrString(_pymsg, "tick");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tick = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wirelessremote
    PyObject * field = PyObject_GetAttrString(_pymsg, "wirelessremote");
    if (!field) {
      return false;
    }
    // TODO(dirk-thomas) use a better way to check the type before casting
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    Py_INCREF(seq_field);
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT8);
    Py_ssize_t size = 40;
    int8_t * dest = ros_message->wirelessremote;
    for (Py_ssize_t i = 0; i < size; ++i) {
      int8_t tmp = *(npy_int8 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(int8_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // reserve
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserve");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserve = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // crc
    PyObject * field = PyObject_GetAttrString(_pymsg, "crc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->crc = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // eeforceraw
    PyObject * field = PyObject_GetAttrString(_pymsg, "eeforceraw");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'eeforceraw'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 4;
    unitree_legged_msgs__msg__Cartesian * dest = ros_message->eeforceraw;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!unitree_legged_msgs__msg__cartesian__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // eeforce
    PyObject * field = PyObject_GetAttrString(_pymsg, "eeforce");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'eeforce'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 4;
    unitree_legged_msgs__msg__Cartesian * dest = ros_message->eeforce;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!unitree_legged_msgs__msg__cartesian__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    if (!unitree_legged_msgs__msg__cartesian__convert_from_py(field, &ros_message->position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    if (!unitree_legged_msgs__msg__cartesian__convert_from_py(field, &ros_message->velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_w");
    if (!field) {
      return false;
    }
    if (!unitree_legged_msgs__msg__cartesian__convert_from_py(field, &ros_message->velocity_w)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * unitree_legged_msgs__msg__low_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LowState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("unitree_legged_msgs.msg._low_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LowState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  unitree_legged_msgs__msg__LowState * ros_message = (unitree_legged_msgs__msg__LowState *)raw_ros_message;
  {  // levelflag
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->levelflag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "levelflag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // commversion
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->commversion);
    {
      int rc = PyObject_SetAttrString(_pymessage, "commversion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robotid
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->robotid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robotid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sn
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bandwidth
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bandwidth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bandwidth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu
    PyObject * field = NULL;
    field = unitree_legged_msgs__msg__imu__convert_to_py(&ros_message->imu);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motorstate
    PyObject * field = NULL;
    size_t size = 20;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    unitree_legged_msgs__msg__MotorState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->motorstate[i]);
      PyObject * pyitem = unitree_legged_msgs__msg__motor_state__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "motorstate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // footforce
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "footforce");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT16);
    assert(sizeof(npy_int16) == sizeof(int16_t));
    npy_int16 * dst = (npy_int16 *)PyArray_GETPTR1(seq_field, 0);
    int16_t * src = &(ros_message->footforce[0]);
    memcpy(dst, src, 4 * sizeof(int16_t));
    Py_DECREF(field);
  }
  {  // footforceest
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "footforceest");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT16);
    assert(sizeof(npy_int16) == sizeof(int16_t));
    npy_int16 * dst = (npy_int16 *)PyArray_GETPTR1(seq_field, 0);
    int16_t * src = &(ros_message->footforceest[0]);
    memcpy(dst, src, 4 * sizeof(int16_t));
    Py_DECREF(field);
  }
  {  // tick
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->tick);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tick", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wirelessremote
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "wirelessremote");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT8);
    assert(sizeof(npy_int8) == sizeof(int8_t));
    npy_int8 * dst = (npy_int8 *)PyArray_GETPTR1(seq_field, 0);
    int8_t * src = &(ros_message->wirelessremote[0]);
    memcpy(dst, src, 40 * sizeof(int8_t));
    Py_DECREF(field);
  }
  {  // reserve
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->reserve);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserve", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crc
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->crc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eeforceraw
    PyObject * field = NULL;
    size_t size = 4;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    unitree_legged_msgs__msg__Cartesian * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->eeforceraw[i]);
      PyObject * pyitem = unitree_legged_msgs__msg__cartesian__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "eeforceraw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eeforce
    PyObject * field = NULL;
    size_t size = 4;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    unitree_legged_msgs__msg__Cartesian * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->eeforce[i]);
      PyObject * pyitem = unitree_legged_msgs__msg__cartesian__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "eeforce", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position
    PyObject * field = NULL;
    field = unitree_legged_msgs__msg__cartesian__convert_to_py(&ros_message->position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = unitree_legged_msgs__msg__cartesian__convert_to_py(&ros_message->velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_w
    PyObject * field = NULL;
    field = unitree_legged_msgs__msg__cartesian__convert_to_py(&ros_message->velocity_w);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
