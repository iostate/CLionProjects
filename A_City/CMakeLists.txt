cmake_minimum_required(VERSION 3.8)
project(A_City)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(A_City ${SOURCE_FILES})
add_executable(Names Names.cpp)

add_executable(Name Name.h)
add_executable(NamesList NamesList.cpp)