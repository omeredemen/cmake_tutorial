# Shared Library

This tutorial demonstrates how to create a shared library using CMake. We will also explore the different options for including directories: `PUBLIC`, `PRIVATE`, and `INTERFACE`.

```bash
.
├── CMakeLists.txt
├── include
│   └── hello.h
├── main.cpp
└── src
    └── hello.cpp

2 directories, 4 files
```

## CMake Functions Used

1. **add_library(hello_lib SHARED ${CMAKE_SOURCE_DIR}/src/hello.cpp)**:
    - Creates a shared library named `hello_lib` from the source file `hello.cpp`.
2. **target_include_directories(hello_lib PUBLIC ${PROJECT_SOURCE_DIR}/include)**:
    - Specifies the include directories for the `hello_lib` target.
    - `PUBLIC`: The include directories are needed by both the library and any targets that link against it.
    - `PRIVATE`: The include directories are needed only by the library itself.
    - `INTERFACE`: The include directories are needed only by targets that link against the library.
3. **add_executable(${PROJECT_NAME}_example ${SRC_FILES})**:
    - Creates an executable target named `shared_library_example` from the source file `main.cpp`.
4. **target_link_libraries(${PROJECT_NAME}_example PUBLIC hello_lib)**:
    - Links the `hello_lib` shared library to the `shared_library_example` executable.

## Understanding PUBLIC, PRIVATE, and INTERFACE

- **PUBLIC**: The include directories are used by both the library and the targets that link against it. Use this when both need to know about the include paths.
- **PRIVATE**: The include directories are only used by the library itself. Use this when the library alone needs these include paths.
- **INTERFACE**: The include directories are only used by the targets that link against the library. Use this when only the dependents need to know about these include paths.

By commenting and uncommenting the `target_include_directories` lines in the CMake file, you can observe how the different keywords affect the compilation process.

## Conclusion

This tutorial covered the basics of creating a shared library with CMake and demonstrated the usage of include directories with `PUBLIC`, `PRIVATE`, and `INTERFACE` keywords. Experimenting with these concepts will help you better understand their implications in larger projects.