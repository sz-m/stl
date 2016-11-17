cmake_minimum_required(VERSION 3.5)

project(stl CXX)

add_definitions(-std=c++11 -Wall -Wextra -Wpedantic -Werror -Wfatal-errors)

add_custom_target(run-all)

add_subdirectory(01-array)
add_subdirectory(02-vector)
