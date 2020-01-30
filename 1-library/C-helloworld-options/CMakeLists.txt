cmake_minimum_required(VERSION 3.0.0)
project(helloworld VERSION 0.1.0)

add_executable(helloworld main.cpp)

option(USE_SAYHELLO "use say hello to provide info" ON)
#配置一个头文件，以便将CMake的配置传递到源代码中
configure_file(config.h.in config.h)

if(USE_SAYHELLO)
#添加子CMakefile.txt目录，以便能够build
add_subdirectory(sayhellolibrary)
#将库添加到变量EXTRA_LIBS
list(APPEND EXTRA_LIBS sayhello)
#将头文件路径添加到变量EXTRA_INCLUDES中
list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/sayhellolibrary")
endif(USE_SAYHELLO)

target_include_directories(helloworld PUBLIC 
                            "${PROJECT_BINARY_DIR}"
                            ${EXTRA_INCLUDES}
                          )

target_link_libraries(helloworld PUBLIC ${EXTRA_LIBS})

