cmake_minimum_required(VERSION 3.9)
project(ProjectA)

set(CMAKE_CXX_STANDARD 11)

add_executable(ProjectA main.cpp EuropeanOption.cpp EuropeanOption.hpp Pricing.cpp Pricing.hpp)