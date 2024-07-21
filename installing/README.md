# Installing

This tutorial demonstrates how to install a project using CMake. We will go through setting up the project, creating libraries and executables, and specifying installation rules.

```bash
	.
├── CMakeLists.txt
├── include
│   └── hello.h
├── main.cpp
├── some_conf_files
└── src
    └── hello.cpp

2 directories, 5 files
```

## CMake Functions Used

1. **cmake_minimum_required(VERSION 3.22)**:
    - Specifies the minimum version of CMake required to build this project.
2. **project(installing)**:
    - Defines the name of the project.
3. **message("The default install directory is ${CMAKE_INSTALL_PREFIX}")**:
    - Prints a message with the default install directory.
4. **set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install")**:
    - Changes the install directory to a custom path.
5. **set(SRC_FILES main.cpp)**:
    - Defines a variable `SRC_FILES` containing the path to the source file for the executable.
6. **add_library(hello_lib SHARED ${CMAKE_SOURCE_DIR}/src/hello.cpp)**:
    - Creates a shared library named `hello_lib` from the source file `hello.cpp`.
7. **target_include_directories(hello_lib PUBLIC ${PROJECT_SOURCE_DIR}/include)**:
    - Specifies the include directories for the `hello_lib` target.
8. **add_executable(${PROJECT_NAME}_bin ${SRC_FILES})**:
    - Creates an executable target named `installing_bin` from the source file `main.cpp`.
9. **target_link_libraries(${PROJECT_NAME}_bin PUBLIC hello_lib)**:
    - Links the `hello_lib` shared library to the `installing_bin` executable.
10. **install(TARGETS ${PROJECT_NAME}_bin DESTINATION bin/)**:
    - Installs the executable binary to the `bin` directory.
11. **install(TARGETS hello_lib LIBRARY DESTINATION lib)**:
    - Installs the library to the `lib` directory.
12. **install(DIRECTORY ${PROJECT_SOURCE_DIR}/include DESTINATION include)**:
    - Installs the include files to the `include` directory.
13. **install(FILES some_conf_files DESTINATION etc)**:
    - Installs the configuration files to the `etc` directory.

## Building and Installing the Project

1. Create a build directory:
    
    ```bash
    mkdir build
    cd build
    ```
    
2. Run CMake to generate the build files:
    
    ```bash
    cmake ..
    ```
    
3. Build the project:
    
    ```bash
    make
    ```
    
4. Install the project:
    
    ```bash
    make install
    ```
    

## Conclusion

This tutorial covered the basics of installing a project with CMake. You learned how to create a shared library, an executable, and specify installation rules for binaries, libraries, include files, and configuration files. By following these steps, you can customize the installation process for your CMake projects.