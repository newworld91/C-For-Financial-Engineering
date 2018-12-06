cmake_minimum_required(VERSION 3.9)
project(4_2B_2)

set(CMAKE_CXX_STANDARD 11)

add_executable(4_2B_2
        array.cpp
        array.h
        ArrayException.hpp
        main.cpp
        OutOfBoundsException.hpp NumericArray.cpp NumericArray.h IncompatibleSizeException.hpp)
