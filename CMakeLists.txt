cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -pedantic")
project(5lab)
add_executable(oop_exercise_05
header/Read_input.hpp
header/Read_input.tpp
header/Rhomb.h
header/Rhomb.tpp
header/Stack.h
header/Stack.tpp
header/StackEl.h
header/StackEl.tpp
header/iterator.h
source/Read_input.cpp
source/Rhomb.cpp
source/Stack.cpp
source/StackEl.cpp
source/iterator.cpp
source/main.cpp)
