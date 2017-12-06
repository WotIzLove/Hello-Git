cmake_minimum_required(VERSION 3.8)
project(CS50)

set(CMAKE_C_STANDARD 90)

set(SOURCE_FILES main.c water.c greedy.c initialz.c)
add_executable(CS50 ${SOURCE_FILES})