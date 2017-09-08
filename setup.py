from distutils.core import setup, Extension
from Cython.Build import cythonize


ext_modules = []

ext = Extension('foo',
                sources=['foo/thing.c',
                         'foo/pyx_funcs.pyx',
                         ],
                language="c")

ext_modules.extend(cythonize([ext]))

setup(name='foo',
      version='0.1',
      packages=['foo',
                ],
      ext_modules=ext_modules)
