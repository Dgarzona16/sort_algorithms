cmake_minimum_required(VERSION 3.26)
project(Sort)

set(CMAKE_CXX_STANDARD 23)

add_executable(Sort main.cpp
        Sorting.hpp
        Merge.hpp
        Objects.hpp
)
