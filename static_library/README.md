# Static Library

This tutorial demonstrates how to create a static library using CMake. We will also explore the different options for including directories: `PUBLIC`, `PRIVATE`, and `INTERFACE`.

```markdown
.
├── CMakeLists.txt
├── include
│   └── hello.h
├── main.cpp
└── src
    └── hello.cpp

2 directories, 4 file
```

## CMake Functions Used

1. **add_library(hello_lib STATIC ${CMAKE_SOURCE_DIR}/src/hello.cpp)**:
    - Creates a static library named `hello_lib` from the source file `hello.cpp`.
2. **add_executable(${PROJECT_NAME}_example ${SRC_FILES})**:
    - Creates an executable target named `static_library_example` from the source file `main.cpp`.
3. **target_link_libraries(${PROJECT_NAME}_example PUBLIC hello_lib)**:
    - Links the `hello_lib` static library to the `static_library_example` executable.

## Understanding PUBLIC, PRIVATE, and INTERFACE

- **PUBLIC**: The include directories are used by both the library and the targets that link against it. Use this when both need to know about the include paths.
- **PRIVATE**: The include directories are only used by the library itself. Use this when the library alone needs these include paths.
- **INTERFACE**: The include directories are only used by the targets that link against the library. Use this when only the dependents need to know about these include paths.

By commenting and uncommenting the `target_include_directories` lines in the CMake file, you can observe how the different keywords affect the compilation process.

## Conclusion

This tutorial covered the basics of creating a static library with CMake and demonstrated the usage of include directories with `PUBLIC`, `PRIVATE`, and `INTERFACE` keywords. Experimenting with these concepts will help you better understand their implications in larger projects.