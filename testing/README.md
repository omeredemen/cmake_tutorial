# Testing with Ctest

CMake is a powerful and versatile tool for managing the build process of software projects. It allows developers to define how code is compiled and linked, and it provides a flexible way to handle dependencies and configuration. One of the essential features of CMake is its support for testing. Testing is a crucial part of software development that ensures code correctness, reliability, and stability. By integrating testing into the build process, developers can automatically verify that their code behaves as expected, making it easier to catch bugs early and maintain high-quality software. This tutorial provides a comprehensive guide on how to set up and run tests in a CMake project, including creating libraries, executables, and adding tests using `enable_testing` and `add_test`. Through practical examples and clear explanations, you'll learn how to leverage CMake's testing capabilities to improve your development workflow and produce robust software.

```cpp
.
├── CMakeLists.txt
├── main.cpp
├── sum
│   ├── sum.cpp
│   └── sum.h
└── test.cpp

```

### 1.  Adding Test Executable

```
cmakeCopy code
add_executable(test_case test.cpp)

```

This command adds another executable target named `test_case` using the source file `test.cpp`.

### 2. Linking Libraries to Tes Executable

```
cmakeCopy code
target_link_libraries(test_case PRIVATE sumlib)

```

This command links the `sumlib` library to the `test_case` executable, similar to how it was linked to `main`.

### 3. Enabling Testing

```
cmakeCopy code
enable_testing()

```

This command enables testing for the project, allowing you to add and run tests.

### 4. Adding a Test

```
cmakeCopy code
add_test(
  NAME test_case
  COMMAND $<TARGET_FILE:test_case>
)

```

This command adds a test named `test_case` that runs the `test_case` executable. The `$<TARGET_FILE:test_case>` generator expression returns the full path to the `test_case` executable.

### Building and Running Tests

1. **Create a build directory and navigate to it:**

```
mkdir build
cd build
```

1. **Configure the project using CMake:**

```
cmake ..
```

1. **Build the project:**

```
cmake --build .
```

1. **Run the tests:**

```
ctest
```

The `ctest` command runs all the tests added with `add_test`. If everything is set up correctly, you should see output indicating that your test(s) passed.

### Conclusion

This tutorial covered how to set up a simple project in CMake that includes building a library, adding executables, linking libraries, and setting up tests using `enable_testing` and `add_test`. The `target_sources` function wasn't specifically needed in this example, but it could be used similarly to `add_executable` or `add_library` to modularize your source files.