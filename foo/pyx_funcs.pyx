
cdef extern double add_doubles(double a, double b) nogil:
    with gil:
        raise ValueError("Testing an error")
    return 42.0
