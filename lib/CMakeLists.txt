cmake_minimum_required(VERSION 3.25.1)
project("UWIP Library"
    VERSION 1.0)
    

set(LIB uwip)

file(GLOB SOURCES ${CMAKE_CURRENT_LIST_DIR}/src/*.c)

add_library(${LIB} SHARED ${SOURCES})
target_include_directories(${LIB} PUBLIC ${CMAKE_CURRENT_LIST_DIR}/inc)
