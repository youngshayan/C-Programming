cmake_minimum_required(VERSION 3.20)
project(Exercise13_part_four C)

set(CMAKE_C_STANDARD 11)

add_executable(Exercise13_part_four main.c)

target_link_libraries(${PROJECT_NAME} -pthread)