#include <Python.h>


int val;

static PyObject* bar(PyObject *self, PyObject *args) {
    val = the_answer();
    return Py_BuildValue("i", val);
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
