cmake_minimum_required(VERSION 3.17)
project(test_common)

set(CMAKE_CXX_STANDARD 11)

# add_executable(test_common main.cpp
#         common.cpp
#         common.h)

file(GLOB src_files "src/*")

set(src_file src/*)
add_executable(common_unittest ${src_files})

add_subdirectory(third_party)

target_link_libraries(common_unittest gtest gtest_main)
