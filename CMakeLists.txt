cmake_minimum_required(VERSION 4.3)
project(Quiz_3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Quiz_3
        BinarySearch.cpp
        BinarySearch.h
        MergeSort.cpp
        MergeSort.h
        main.cpp
        main.h)
