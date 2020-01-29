cmake_minimum_required(VERSION 3.10.0)
project(helloworld VERSION 1.0)

configure_file(version.h.in version.h)

add_executable(helloworld main.cpp)

target_include_directories(helloworld PUBLIC "${PROJECT_BINARY_DIR}")
