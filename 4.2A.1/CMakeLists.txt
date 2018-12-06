cmake_minimum_required(VERSION 3.9)
project(4_2A_1)

set(CMAKE_CXX_STANDARD 11)

add_executable(4_2A_1
        array.cpp
        ArrayException.hpp
        main.cpp
        OutOfBoundsException.hpp
        pointer.cpp
        pointer.hpp
        shape.cpp
        shape.hpp
        array.h)
