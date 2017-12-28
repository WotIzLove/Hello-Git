cmake_minimum_required(VERSION 3.9)
project(lab07 C)

set(CMAKE_C_STANDARD 90)

add_executable(lab07 main.c)
target_link_libraries(lab07 m)