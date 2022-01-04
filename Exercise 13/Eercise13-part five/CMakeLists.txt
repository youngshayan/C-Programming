cmake_minimum_required(VERSION 3.20)
project(Eercise13_part_five C)

set(CMAKE_C_STANDARD 11)

add_executable(Eercise13_part_five main.c)

 target_link_libraries(${PROJECT_NAME} -pthread)