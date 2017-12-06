cmake_minimum_required(VERSION 3.9)
project(lab08 C)

set(CMAKE_C_STANDARD 90)

add_executable(lab08 main.c)
target_link_libraries(lab08 m)