cmake_minimum_required(VERSION 3.9)
project(4_2B_5)

set(CMAKE_CXX_STANDARD 11)

add_executable(4_2B_5
        array.cpp
        array.h
        ArrayException.hpp
        IncompatibleSizeException.hpp
        main.cpp
        NumericArray.cpp
        NumericArray.h
        OutOfBoundsException.hpp
        Stack.cpp
        Stack.hpp StackException.hpp)
