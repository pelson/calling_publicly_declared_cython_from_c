# Example of calling a cython defined class from C++

Based on a Q&A at https://stackoverflow.com/questions/40572073/how-to-create-a-public-cython-function-that-can-receive-c-struct-instance-or-p,
this is a minimum viable example of calling a mildy sophisticated class defined in Cython from C.


# Motivation

My motivation for doing this was to look at the creation of numpy dtypes from Cython.
After a significant amount of pain, trying to port some of the code at https://github.com/numpy/numpy-dtypes to pure Cython, I ended up wondering
if I could just define my class in Cython, and make use of it from C code to call the appropriate numpy API (PyArray_RegisterDataType).
