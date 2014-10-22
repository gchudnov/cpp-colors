cpp-colors
==========

A C++ color format library

### Directories

* **bin** - project executables (tests & examples)
* **examples** - cpp-json-qi examples
* **include** - the sourcecode of cpp-json-qi
* **test** - cpp-json-qi unit tests

### More information

* [Wiki](https://github.com/gchudnov/cpp-colors/wiki)

### Tested compilers

* Linux (x86/64)
   * GCC 4.8, Boost 1.54
   * Clang 3.4, Boost 1.54
* Windows (x86/64)
   * Visual C++ 2014

### Building

cpp-colors tests depend on [Google Test Framework](https://code.google.com/p/googletest/)

To build all tests & examples:

```
cd cpp-colors
cmake .
make
```

### Building 'out of source'

To create `out of source` build, invoke: 

```
cd cpp-colors
mkdir build
cd build
cmake ..
make
```

### Deleting all the files that a Make & CMake has produced 

```
make clean-all
```

### Contact

[Grigoriy Chudnov] (mailto:g.chudnov@gmail.com)

### License

Distributed under the [The MIT License (MIT)](https://github.com/gchudnov/cpp-json-qi/blob/master/LICENSE).
