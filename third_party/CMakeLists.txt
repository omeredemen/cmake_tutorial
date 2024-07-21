cmake_minimum_required(VERSION 3.22)
project(third_party_library)

# find_package(Boost REQUIRED)
find_package(Boost REQUIRED COMPONENTS filesystem system)
# when a package is found ollowing variables will be initialized automatically.
# <NAME>_FOUND : Flag to show if it is found
# <NAME>_INCLUDE_DIRS or <NAME>_INCLUDES : Header directories
# <NAME>_LIBRARIES or <NAME>_LIBRARIES or <NAME>_LIBS : library files
# <NAME>_DEFINITIONS

if(BOOST_FOUND)
    message("boost is found")
elseif(NOT BOOST_FOUND)
    message(error "boost is not found")
endif()

add_executable(main main.cpp)
target_include_directories(main PRIVATE ${BOOST_INCLUDE_DIRS})
target_link_libraries(main PRIVATE ${BOOST_LIBRARIES} Boost::filesystem)

add_executable(version version.cpp)
