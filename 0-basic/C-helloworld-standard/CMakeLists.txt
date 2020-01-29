cmake_minimum_required(VERSION 3.10.0)
project(helloworld)

add_executable(helloworld main.cpp)

# specify the c++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)