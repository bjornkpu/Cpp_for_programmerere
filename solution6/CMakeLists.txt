cmake_minimum_required(VERSION 2.8)

project(solution6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra -pthread -Wno-unused-parameter")

add_executable(solution6.1 main.cpp)

find_package(Boost 1.54.0 COMPONENTS system REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

add_executable(solution6.2 web_server.cpp)
target_link_libraries(solution6.2 ${Boost_LIBRARIES})
