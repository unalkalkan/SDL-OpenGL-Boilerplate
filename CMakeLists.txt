cmake_minimum_required(VERSION 3.7)

project(SDL-OpenGL-Boilerplate)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(SDL-OpenGL-Boilerplate main.cpp)
target_link_libraries(SDL-OpenGL-Boilerplate ${SDL2_LIBRARIES})