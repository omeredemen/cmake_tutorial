# Third Party Libraries
This tutorial demonstrates how to use third-party libraries, specifically the Boost library, in a CMake project.

```bash
.
├── CMakeLists.txt
├── main.cpp
└── version.cpp

0 directories, 3 files
```

### Explanation of CMake Functions

1. **find_package(Boost REQUIRED COMPONENTS filesystem system)**:
    - Searches for the Boost library and requires the `filesystem` and `system` components.
2. **if(Boost_FOUND)**:
    - Checks if the Boost library is found.
3. **message("Boost is found")**:
    - Prints a message indicating that Boost is found.
4. **message(FATAL_ERROR "Boost is not found")**:
    - Prints an error message and stops the build process if Boost is not found.
5. **add_executable(main main.cpp)**:
    - Creates an executable target named `main` from the source file `main.cpp`.
6. **target_include_directories(main PRIVATE ${Boost_INCLUDE_DIRS})**:
    - Adds the Boost include directories to the target `main`. The `PRIVATE` keyword means these directories are only applied to this target.
7. **target_link_libraries(main PRIVATE ${Boost_LIBRARIES} Boost::filesystem)**:
    - Links the Boost libraries and the `Boost::filesystem` component to the target `main`.
8. **add_executable(version version.cpp)**:
    - Creates an executable target named `version` from the source file `version.cpp`.

## Conclusion

This tutorial covered the basics of integrating third-party libraries in a CMake project. By using `find_package`, `target_include_directories`, and `target_link_libraries`, you can include and link external libraries like Boost to your project.