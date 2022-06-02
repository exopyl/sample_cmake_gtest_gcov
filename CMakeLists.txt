cmake_minimum_required (VERSION 3.18.4)

set(CMAKE_INSTALL_PREFIX "./build")

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_C_COMPILER "cc")
set(CMAKE_CXX_COMPILER "g++")

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(CMAKE_CXX_FLAGS "-g -O0 -Wall -W -Wshadow -Wunused-variable -Wunused-parameter -Wunused-function -Wunused -Wno-system-headers -Wno-deprecated -Woverloaded-virtual -Wwrite-strings -fprofile-arcs -ftest-coverage")
    set(CMAKE_C_FLAGS "-g -O0 -Wall -W -fprofile-arcs -ftest-coverage")
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    set(CMAKE_CXX_FLAGS "-O2")
    set(CMAKE_C_FLAGS "-O2")
endif()

project(sample_cpp_gtest)

include(CTest)
enable_testing()

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
   add_custom_target (coverage
     COMMAND ctest -T Coverage
     COMMAND gcovr -x coverage.xml -g Testing/CoverageInfo/
     WORKING_DIRECTORY ${CMAKE_BINARY_DIR})
 endif()

add_subdirectory(src)
add_subdirectory(test)
