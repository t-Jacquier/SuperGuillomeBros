
cmake_minimum_required(VERSION 3.7)

project(guillome C)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(guillome main.c)
target_link_libraries(guillome ${SDL2_LIBRARIES})