cmake_minimum_required(VERSION 3.17)
project(test_common)

set(CMAKE_CXX_STANDARD 11)

add_executable(test_common main.cpp
        common.cpp
        common.h)
