project (sublib1)

add_library(${PROJECT_NAME} STATIC src/sub1.cpp)
add_library(sub::lib1 ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC include)