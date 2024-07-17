add_library(operations STATIC operations.cpp)

# option(USE_MYMATH "Use tutorial provided math implementation" OFF)
option(USE_MYMATH "Use tutorial provided math implementation" ON)

# add_definitions(-DUSE_MYMATH) # if this line is used files inside build doesnt have to be deleted 

if (USE_MYMATH)
  target_compile_definitions(operations PRIVATE "USE_MYMATH")
endif()

