cmake_minimum_required(VERSION 3.27)
project(Programming C)

set(CMAKE_C_STANDARD 11)

add_executable(Programming main.c
        addis.h
        addis.c)
add_executable(pointer pointer.c)
