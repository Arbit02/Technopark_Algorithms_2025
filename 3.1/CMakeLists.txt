cmake_minimum_required(VERSION 3.28)
project(Algorythms)

set(CMAKE_CXX_STANDARD 17)

add_executable(Algorythms main.cpp
        IGraph.h
        ArcGraph.h
        ArcGraph.cpp
        ListGraph.h
        ListGraph.cpp
        MatrixGraph.h
        MatrixGraph.cpp
        SetGraph.h
        SetGraph.cpp
        IGraph.cpp)
