cmake_minimum_required(VERSION 3.5)

# Set a default C++ compile flag
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DEX2" CACHE STRING "Set C++ Compiler Flags" FORCE)


# Set the project name
project (compile_flags)

# Add an executable
add_executable(cmake_examples_compile_flags main.cpp)

# the line below create compile flags for the given target
target_compile_options(cmake_examples_compile_flags PRIVATE -w)

add_definitions(-DEX1=1) # this is another way to create a definitions

# this will create a preprocessor definition "#define EX3" for just given target
# to see the difference comment the line
target_compile_definitions(cmake_examples_compile_flags PRIVATE EX3)
