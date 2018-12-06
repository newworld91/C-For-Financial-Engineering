cmake_minimum_required(VERSION 3.9)
project(ProjectB)

set(CMAKE_CXX_STANDARD 11)

add_executable(ProjectB
        EuropeanOption.cpp
        EuropeanOption.hpp
        main.cpp
        Pricing.cpp
        Pricing.hpp AmericanOptions.cpp AmericanOptions.hpp)
