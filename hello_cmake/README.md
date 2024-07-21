# Hello World
We started with a hello world program like the any other languages in this repository 

```bash
.
├── CMakeLists.txt
└── main.cpp

0 directories, 2 files
```

Any project's top most CMakeLists.txt must start by specifying a minimum CMake version using the [**`cmake_minimum_required()`**](https://cmake.org/cmake/help/latest/command/cmake_minimum_required.html#command:cmake_minimum_required) command. This establishes policy settings and ensures that the following CMake functions are run with a compatible version of CMake.

To start a project, we use the [**`project()`**](https://cmake.org/cmake/help/latest/command/project.html#command:project) command to set the project name. This call is required with every project and should be called soon after [**`cmake_minimum_required()`**](https://cmake.org/cmake/help/latest/command/cmake_minimum_required.html#command:cmake_minimum_required). As we will see later, this command can also be used to specify other project level information such as the language or version number.

Finally, the [**`add_executable()`**](https://cmake.org/cmake/help/latest/command/add_executable.html#command:add_executable) command tells CMake to create an executable using the specified source code files.

### add_executable()

```c
add_executable(<name> <options>... <sources>...)
```

### cmake_minimum_required()

Require a minimum version of cmake.

```c
cmake_minimum_required(VERSION <min>[...<policy_max>] [FATAL_ERROR])
```

### project()

Sets the name of the project, and stores it in the variable **`PROJECT_NAME`**. When called from the top-level `CMakeLists.txt` also stores the project name in the variable **`CMAKE_PROJECT_NAME`**.

```c
project(<PROJECT-NAME> [<language-name>...])
project(<PROJECT-NAME>
        [VERSION <major>[.<minor>[.<patch>[.<tweak>]]]]
        [DESCRIPTION <project-description-string>]
        [HOMEPAGE_URL <url-string>]
        [LANGUAGES <language-name>...])
```

```bash
mkdir build && cd build
cmake ..
make
```