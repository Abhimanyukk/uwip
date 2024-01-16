cmake_minimum_required(VERSION 3.25.1)
project("UWIP ModBus RTU")

set(EXECUTABLE u_modbus_rtu)

file(GLOB SOURCES ${CMAKE_CURRENT_LIST_DIR}/*c)

add_executable(${EXECUTABLE} ${SOURCES})
target_link_libraries(${EXECUTABLE} PRIVATE uwip)
target_include_directories(${EXECUTABLE} PUBLIC ${CMAKE_CURRENT_LIST_DIR}/../../lib/inc)
