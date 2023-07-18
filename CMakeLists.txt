cmake_minimum_required(VERSION 3.25)
project(sortAlgorithm)

set(CMAKE_CXX_STANDARD 17)

file(GLOB sortSource sort/*.cpp sort/.h)

add_executable(sortAlgorithm main.cpp ${sortSource})