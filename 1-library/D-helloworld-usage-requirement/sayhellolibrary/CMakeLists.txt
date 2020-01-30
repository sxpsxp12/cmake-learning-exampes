cmake_minimum_required(VERSION 3.0.0)
project(sayhello VERSION 0.1.0)

add_library(sayhello helloworld.cpp)

target_include_directories(sayhello
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
          )