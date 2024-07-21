cmake_minimum_required(VERSION 3.22)

project(shared_library)

set(SRC_FILES
  main.cpp
)

add_library(hello_lib SHARED ${CMAKE_SOURCE_DIR}/src/hello.cpp)

# to understand difference between PUBLIC PRIVATE INTERFACE comment out one by one 
target_include_directories(hello_lib PUBLIC ${PROJECT_SOURCE_DIR}/include)
# target_include_directories(hello_lib PRIVATE ${PROJECT_SOURCE_DIR}/include)
# target_include_directories(hello_lib INTERFACE ${PROJECT_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME}_example ${SRC_FILES})
target_link_libraries(${PROJECT_NAME}_example PUBLIC hello_lib)