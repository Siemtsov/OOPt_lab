cmake_minimum_required(VERSION 3.27)
project(OOPt_lab)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOPt_lab main.cpp
        Person.cpp
        Person.h
        Place.cpp
        Place.h
        Date.cpp
        Date.h)
