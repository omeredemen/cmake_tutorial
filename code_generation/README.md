This tutorial demonstrates how to use CMake's `configure_file` command for code generation. We will generate a header file from a template and use it in our project.

```bash
.
├── CMakeLists.txt
├── configure_file.cpp
├── configure_file.h.in
└── README.md
```

### Explanation of CMake Functions

1. **project(code_generation VERSION 1.0)**:
    - Defines the name of the project and sets its version.
2. **set(CMAKE_CXX_STANDARD 11)**:
    - Sets the C++ standard to C++11.
3. **set(CMAKE_CXX_STANDARD_REQUIRED True)**:
    - Ensures that the C++ standard is required and not just optional.
4. **message("source directory is " ${PROJECT_SOURCE_DIR})**:
    - Prints the source directory path.
5. **configure_file(configure_file.h.in configure_file.h)**:
    - Generates `configure_file.h` from `configure_file.h.in`.
6. **target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}")**:
    - Adds the binary directory (where `configure_file.h` is generated) to the include directories for the target `code_generation`.

## Conclusion

This tutorial covered the basics of using CMake's `configure_file` command to generate code from a template. By using `configure_file`, you can customize your code at build time, making it more flexible and adaptable.