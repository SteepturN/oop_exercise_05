cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -pedantic")
project(4lab)
add_executable(oop_exercise_04
./source/Iterator.cpp
./header/Iterator.h
./source/List.cpp
./source/ListEl.cpp
./header/ListEl.h
./header/List.h
./source/main.cpp
./source/Read_input.cpp
./source/Triangle.cpp
./header/Triangle.h
./header/Read_input.tpp
)

