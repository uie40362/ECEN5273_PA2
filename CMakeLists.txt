cmake_minimum_required(VERSION 3.10)
project(Assignment_2 C)

set(CMAKE_C_STANDARD 11)

add_executable(Assignment_2 main.c)
add_executable(httpserv www/httpechosrv.c)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pthread")