cmake_minimum_required(VERSION 3.8)
project(CPP_)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES stdio.cpp)
add_executable(CPP_ ${SOURCE_FILES})
add_executable(flowcontrol flowcontrol.cpp)
add_executable(practice1 CPP/Practices/practice1.cpp)
add_executable(activity1 CPP/Activities/activity1.cpp)
add_executable(movie CPP/Practices/movie.cpp)
add_executable(testing_stringstream_to_double CPP/Srsly_Practice/testing_stringstream_to_double.cpp)
add_executable(multifile_program_student CPP/Practices/multifile_program_student.cpp)
add_executable(DynamicArray CPP/Practices/DynamicArray.h)

add_executable(Vectors CPP/Vectors.cpp)
add_executable(Practice3 CPP/Practices/Practice3.cpp)