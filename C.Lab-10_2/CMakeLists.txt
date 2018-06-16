cmake_minimum_required(VERSION 3.10)
project(lab10_2 C)

set(CMAKE_C_STANDARD 90)

add_executable(lab10_2 main.c)
target_link_libraries(lab10_2 m)