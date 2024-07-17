cmake_minimum_required(VERSION 3.10)
project(step_2)


add_subdirectory(lib)

add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/lib)
target_link_libraries(${PROJECT_NAME} PUBLIC operations)
