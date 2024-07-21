cmake_minimum_required(VERSION 3.22)
project(hello_cpp11)

add_executable(main main.cpp)

# set the C++ standard to the appropriate standard for using auto
# target_compile_features(main PUBLIC cxx_auto_type)
# target_compile_features(main PUBLIC cxx_std_23)
target_compile_features(main PUBLIC cxx_std_17)

# you can use the compile features that will be listed
message("List of compile features: ${CMAKE_CXX_COMPILE_FEATURES}")

