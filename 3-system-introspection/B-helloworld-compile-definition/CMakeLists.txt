cmake_minimum_required(VERSION 3.16)
project(helloworld VERSION 0.1.0)

add_library(helloworld helloworld.cpp)

include(CheckSymbolExists)
set(CMAKE_REQUIRED_LIBRARIES "m")
check_symbol_exists(log "math.h" HAVE_LOG)
check_symbol_exists(exp "math.h" HAVE_EXP)

if(HAVE_LOG AND HAVE_EXP)
    target_compile_definitions(helloworld PRIVATE HAVE_LOG HAVE_EXP)
endif(HAVE_LOG AND HAVE_EXP)

target_include_directories(helloworld 
                        INTERFACE ${CMAKE_SOURCE_DIR}
                        )
