cmake_minimum_required(VERSION 3.9)
project(5_3)

set(CMAKE_CXX_STANDARD 11)

add_executable(5_3
        array.cpp
        array.h
        ArrayException.hpp
        circle.cpp
        circle.hpp
        IncompatibleSizeException.hpp
        line.cpp
        line.hpp
        main.cpp
        NumericArray.cpp
        NumericArray.h
        OutOfBoundsException.hpp
        PointArray.cpp
        PointArray.hpp
        pointer.cpp
        pointer.hpp
        shape.cpp
        shape.hpp visitor.cpp visitor.hpp)
