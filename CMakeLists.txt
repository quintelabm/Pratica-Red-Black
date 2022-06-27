cmake_minimum_required(VERSION 3.4)

# set the project name and version
project(Pratica-Red-Black VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_STANDARD_REQUIRED True)

# include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# add the source files (.cpp) using the set command as follow
#set(SOURCES
#${PROJECT_SOURCE_DIR}/src/Red-Black-Tree.cpp)


# enable testing functionality
enable_testing()
add_subdirectory(rb-lib)
add_subdirectory(tests)



