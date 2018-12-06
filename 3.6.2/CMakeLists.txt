cmake_minimum_required(VERSION 3.9)
project(3_6_2)

set(CMAKE_CXX_STANDARD 11)

add_executable(3_6_2
        array.cpp
        array.hpp
        main.cpp
        pointer.cpp
        pointer.hpp
        shape.cpp
        shape.hpp ArrayException.hpp OutOfBoundsException.hpp)
