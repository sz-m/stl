cmake_minimum_required(VERSION 3.5)

project(stl CXX)

add_definitions(-std=c++11 -Wall -Wextra -Wpedantic -Werror -Wfatal-errors)

add_custom_target(run-all)

add_subdirectory(01-array)
add_subdirectory(02-vector)
#add_subdirectory(03-deque)
add_subdirectory(04-list)
add_subdirectory(05-set)
