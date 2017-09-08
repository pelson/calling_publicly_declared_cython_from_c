
cdef extern int the_answer() nogil:
    with gil:
        raise ValueError("Testing an error")
    return 42
