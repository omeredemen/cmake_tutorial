cmake_minimum_required(VERSION 3.22)
project(test)

add_library(sumlib sum/sum.cpp)
include_directories(sum)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE sumlib)

add_executable(test_case test.cpp)
target_link_libraries(test_case PRIVATE sumlib)

enable_testing()

add_test(
  NAME test_case
  COMMAND $<TARGET_FILE:test_case>
)