cmake_minimum_required(VERSION 3.28)
project(clion02)

set(CMAKE_CXX_STANDARD 26)

add_executable(clion02 queue.cpp
        test.cpp
        queue.h)
