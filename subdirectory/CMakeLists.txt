cmake_minimum_required(VERSION 3.22)
project(subdirectory)

add_subdirectory(sublib1)
add_subdirectory(sublib2)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE sub::lib1 sub::lib2)
