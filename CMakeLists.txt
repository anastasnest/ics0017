cmake_minimum_required(VERSION 4.1)
project(ics0017)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ics0017
        SelfStudy/MinimalProgram.cpp
        SelfStudy/BasicDataTypes.cpp
        Practice1/Practice1_Ex2.cpp
        Practice1/Practice1_Ex3.cpp
        Practice1/Practice1_Ex4.cpp
        Practice1/Practice1_Ex5.cpp
        Practice1/Practice1_Ex6.cpp
        Practice1/Practice1_Ex7.cpp
        Practice1/Practice1_Ex8.cpp
        Practice1/Practice1_Ex9.cpp
        Practice1/Practice1_Ex10.cpp
        Practice1/Practice1_Ex11.cpp
        Practice1/Practice1_Ex12.cpp)
