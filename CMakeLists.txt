cmake_minimum_required(VERSION 3.5)
project(mocking-in-cxx)

set(CMAKE_CXX_STANDARD 14)
include(CTest)

add_subdirectory(external/googletest EXCLUDE_FROM_ALL)
add_subdirectory(external/hippomocks/HippoMocks EXCLUDE_FROM_ALL)

add_subdirectory(src)
add_subdirectory(test)
