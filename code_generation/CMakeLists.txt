cmake_minimum_required(VERSION 3.15)
project(code_generation VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
message("source directory is " ${PROJECT_SOURCE_DIR})


configure_file(configure_file.h.in configure_file.h)

add_executable(${PROJECT_NAME} configure_file.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC
                           "${PROJECT_BINARY_DIR}"
)
