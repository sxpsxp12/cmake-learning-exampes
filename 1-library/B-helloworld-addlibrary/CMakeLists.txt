cmake_minimum_required(VERSION 3.0.0)
project(helloworld VERSION 0.1.0)

add_executable(helloworld main.cpp)

add_subdirectory(sayhellolibrary)
target_include_directories(helloworld PUBLIC 
                            "${PROJECT_BINARY_DIR}"
                            "${PROJECT_SOURCE_DIR}/sayhellolibrary"
                          )

target_link_libraries(helloworld PUBLIC sayhello)


