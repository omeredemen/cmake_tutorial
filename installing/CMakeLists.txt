cmake_minimum_required(VERSION 3.22)

project(installing)

# this part change the installed files path
message("the default install directory is ${CMAKE_INSTALL_PREFIX}")
if(NOT "${CMAKE_INSTALL_PREFIX}" STREQUAL "${CMAKE_BINARY_DIR}/install")
  set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install")
  message("install directory changed to ${CMAKE_INSTALL_PREFIX}")
endif()

set(SRC_FILES
  main.cpp
)

add_library(hello_lib SHARED ${CMAKE_SOURCE_DIR}/src/hello.cpp)
# add_library(hello_lib STATIC ${CMAKE_SOURCE_DIR}/src/hello.cpp)

target_include_directories(hello_lib PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME}_bin ${SRC_FILES})
target_link_libraries(${PROJECT_NAME}_bin PUBLIC hello_lib)

# install binary files
install(TARGETS
  ${PROJECT_NAME}_bin
  DESTINATION bin/
)

# install libraries
install(TARGETS
  hello_lib
  LIBRARY DESTINATION lib
)

# install files
install(DIRECTORY
  ${PROJECT_SOURCE_DIR}/include
  DESTINATION include
)

install(FILES 
  some_conf_files
  DESTINATION etc
)