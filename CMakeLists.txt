cmake_minimum_required(VERSION 3.7)

project(SDL-OpenGL-Boilerplate)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

set(INCLUDE_DIRECTORIES "code/engine/headers")
set(SOURCE_DIRECTORIES "code/engine/src")


add_executable(SDL-OpenGL-Boilerplate main.cpp ${SOURCE_DIRECTORIES}/Application.cpp ${SOURCE_DIRECTORIES}/Image.cpp)
target_include_directories(SDL-OpenGL-Boilerplate PRIVATE ${INCLUDE_DIRECTORIES})

file(COPY Assets DESTINATION ${CMAKE_BINARY_DIR})

target_link_libraries(SDL-OpenGL-Boilerplate ${SDL2_LIBRARIES})