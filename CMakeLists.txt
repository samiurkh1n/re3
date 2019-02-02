cmake_minimum_required(VERSION 3.3)

set(ProjectName re3)
project(${ProjectName} CXX)

# TODO check what version you need
set(CMAKE_CXX_STANDARD 17)

# TODO change flags for prod\
set(CMAKE_CXX_FLAGS "-g3 -Wall -pedantic")

add_subdirectory(third_party)

add_library(libre3 SHARED src/re3.cc)

add_subdirectory(tests)
