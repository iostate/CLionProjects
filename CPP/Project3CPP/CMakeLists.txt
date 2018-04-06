cmake_minimum_required(VERSION 3.8)
project(Project3CPP)
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(Project3CPP ${SOURCE_FILES})
add_executable(mapobject MapObject.cpp)
add_executable(mapobjectlist MapObjectList.cpp)

add_executable(map map.cpp)

add_executable(project3 project3.cpp)
add_executable(MapObjectList MapObjectList.h)
add_executable(MapObject MapObject.h)
add_executable(blah blah.cpp)