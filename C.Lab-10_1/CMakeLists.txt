cmake_minimum_required(VERSION 3.10)
project(lab10 C)

set(CMAKE_C_STANDARD 90)

add_executable(lab10 main.c)
target_link_libraries(lab10 m)