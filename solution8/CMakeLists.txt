cmake_minimum_required(VERSION 2.8)

project(solution8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(oppg1 oppgave1.cpp)
add_executable(oppg2 oppgave2.cpp pair.cpp)
