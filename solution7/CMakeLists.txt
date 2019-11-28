cmake_minimum_required(VERSION 2.8)

project(solution7)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(fraction fraction_test.cpp fraction.cpp)

add_executable(set set.cpp main.cpp)

