cmake_minimum_required(VERSION 2.8)

project(solution3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(oppg2 oppgave2.cpp)
add_executable(oppg3 commodity.cpp commodity_test.cpp)
add_executable(oppg4 oppgave4.cpp)