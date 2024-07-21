# Compile Flags

This tutorial demonstrates how to set and manage compile flags and preprocessor definitions using CMake. Compile flags control various aspects of the compilation process, while preprocessor definitions allow you to conditionally include or exclude parts of your code.

```bash
.
├── CMakeLists.txt
└── main.cpp

0 directories, 2 files
```

### Explanation of CMake Functions

1. **set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DEX2" CACHE STRING "Set C++ Compiler Flags" FORCE)**:
    - Sets a default C++ compile flag `DEX2` and stores it in the cache.
2. **target_compile_options(cmake_examples_compile_flags PRIVATE -w)**:
    - Adds the compile option `w` to the target, which disables all warnings. The `PRIVATE` keyword means this option is only applied to this target.
3. **add_definitions(-DEX1=1)**:
    - Adds a preprocessor definition `EX1` with the value `1` globally.
4. **target_compile_definitions(cmake_examples_compile_flags PRIVATE EX3)**:
    - Adds a preprocessor definition `EX3` to the target. The `PRIVATE` keyword means this definition is only applied to this target.

## Explanation of Preprocessor Directives

- **#ifndef EX3**: Checks if `EX3` is not defined.
- **#elif EX2**: Checks if `EX2` is defined.
- **#else**: If none of the above conditions are met.

The output of the program depends on the definitions set in the CMake file. Given the current CMake configuration, the output will be:

```csharp
EX2 definition is created by cmake
```

## Conclusion

This tutorial covered the basics of setting compile flags and preprocessor definitions in CMake. By using `target_compile_options`, `add_definitions`, and `target_compile_definitions`, you can control the compilation process and conditionally include or exclude code based on preprocessor definitions.