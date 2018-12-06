cmake_minimum_required(VERSION 3.9)
project(5_1_1)

set(CMAKE_CXX_STANDARD 11)

add_executable(5_1_1
        array.cpp
        array.h
        ArrayException.hpp
        IncompatibleSizeException.hpp
        main.cpp
        NumericArray.cpp
        NumericArray.h
        OutOfBoundsException.hpp
        PointArray.cpp
        PointArray.hpp
        pointer.cpp
        pointer.hpp
        shape.cpp
        shape.hpp line.cpp line.hpp circle.cpp circle.hpp)

find_package(Boost)
if(Boost_FOUND)
    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
    message(STATUS "Boost_VERSION: ${Boost_VERSION}")
    include_directories(${Boost_INCLUDE_DIRS})
endif()

add_executable(BoostTest main.cpp)
if(Boost_FOUND)
    target_link_libraries(BoostTest ${Boost_LIBRARIES})
endif()