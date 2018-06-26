cmake_minimum_required(VERSION 3.7)

project(SDL-OpenGL-Boilerplate)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

set(INCLUDE_DIRECTORIES "code/engine/headers/")
set(SOURCE_DIRECTORIES "code/engine/src/Application.cpp")

add_executable(SDL-OpenGL-Boilerplate main.cpp ${SOURCE_DIRECTORIES})
target_include_directories(SDL-OpenGL-Boilerplate PRIVATE ${INCLUDE_DIRECTORIES})
target_link_libraries(SDL-OpenGL-Boilerplate ${SDL2_LIBRARIES})