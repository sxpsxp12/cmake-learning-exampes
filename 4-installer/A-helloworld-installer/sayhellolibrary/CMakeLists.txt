cmake_minimum_required(VERSION 3.0.0)
project(sayhello VERSION 0.1.0)

add_library(sayhello helloworld.cpp)

target_include_directories(sayhello
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
          )

#修改CMAKE默认安装路径
if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
    set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}" CACHE PATH "..." FORCE)
endif()

install(TARGETS sayhello DESTINATION lib)
install(FILES helloworld.h DESTINATION include)