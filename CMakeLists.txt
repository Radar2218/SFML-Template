cmake_minimum_required(VERSION 4.0)

project(template)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

file(GLOB_RECURSE sources ./source/*.cpp)

add_executable(template ${sources})
target_link_libraries(template sfml-window sfml-system)
