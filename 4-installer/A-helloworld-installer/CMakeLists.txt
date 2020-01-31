cmake_minimum_required(VERSION 3.0.0)
project(helloworld VERSION 1.0)

add_executable(helloworld main.cpp)

option(USE_SAYHELLO "use say hello to provide info" ON)

if(USE_SAYHELLO)
#添加子CMakefile.txt目录，以便能够build
add_subdirectory(sayhellolibrary)
target_compile_definitions(helloworld PRIVATE USE_SAYHELLO)
#将库添加到变量EXTRA_LIBS
list(APPEND EXTRA_LIBS sayhello)
endif(USE_SAYHELLO)

target_include_directories(helloworld PUBLIC 
                            "${PROJECT_BINARY_DIR}"
                          )

target_link_libraries(helloworld PUBLIC ${EXTRA_LIBS})

#安装规则
#修改CMAKE默认安装路径
if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}" CACHE PATH "..." FORCE)
endif()

install(TARGETS helloworld DESTINATION bin)

include(InstallRequiredSystemLibraries)
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
include(CPack)