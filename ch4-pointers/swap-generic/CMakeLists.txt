cmake_minimum_required(VERSION 3.23)
set(CMAKE_C_STANDARD 11)
set(CMAKE_PROJECT_NAME  "swap_generic")
set(CMAKE_C_FLAGS "-O3")

include_directories(.)

project(${CMAKE_PROJECT_NAME} C)

add_executable(${CMAKE_PROJECT_NAME}
        main.c)
