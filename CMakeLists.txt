cmake_minimum_required(VERSION 3.27)
project(Restarting_C C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Restarting_C
        hello.c
        temp_Converter.c)
