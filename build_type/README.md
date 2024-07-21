# Build Type

This tutorial demonstrates how to set and manage build types using CMake. Different build types help to optimize the project for various scenarios such as debugging, release, and testing. We will explain how to set default build types and how to configure them.

```bash
├── CMakeLists.txt
└── main.cpp

0 directories, 2 files
```

### Explanation of CMake Functions

1. **if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)**:
    - Checks if the build type is not specified.
2. **message("Setting build type to 'RelWithDebInfo' as none was specified.")**:
    - Prints a message indicating the default build type being set.
3. **set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING "Choose the type of build." FORCE)**:
    - Sets the default build type to `RelWithDebInfo` if none is specified.
4. **set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")**:
    - Defines the possible values for the build type, which can be used in CMake GUI.
5. **add_executable(${PROJECT_NAME} main.cpp)**:
    - Creates an executable target named `hello` from the source file `main.cpp`.

### Build Types

- **Debug**: No optimization, with debugging information.
- **Release**: Optimized for performance, no debugging information.
- **MinSizeRel**: Optimized for minimum size.
- **RelWithDebInfo**: Optimized for performance with debugging information.

### Specifying a Build Type

You can specify the build type when generating the build files. For example, to build with the `Debug` type:

```bash
cmake -DCMAKE_BUILD_TYPE=Debug ..
```

Or for `Release` type:

```bash
cmake -DCMAKE_BUILD_TYPE=Release ..
```

## Conclusion

This tutorial covered the basics of setting and using build types in CMake. By specifying different build types, you can optimize your project for various scenarios such as debugging, performance, and size optimization. The default build type can be set to ensure consistent builds across different environments.