#include <Python.h>
#include "pyx_funcs.h"

double val;

static PyObject* bar(PyObject *self, PyObject *args) {
    val = add_doubles(0.8, 41.2);
    return Py_BuildValue("d", val);
}

static PyMethodDef foo_methods[] = {
    {
        "bar", bar, METH_VARARGS,
    },
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef foo_definition = {
    PyModuleDef_HEAD_INIT,
    "foo",
    "",
    -1,
    foo_methods
};

PyMODINIT_FUNC PyInit_foo(void) {
    Py_Initialize();
    return PyModule_Create(&foo_definition);
}
