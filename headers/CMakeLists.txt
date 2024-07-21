cmake_minimum_required(VERSION 3.22)

project(headers)


set(SRC_FILES
  ${PROJECT_SOURCE_DIR}/src/hello.cpp
  main.cpp
)


add_executable(headers ${SRC_FILES})
target_include_directories(headers PUBLIC include)