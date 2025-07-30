cmake_minimum_required(VERSION 3.10)
project(DSA_in_C)

set(CMAKE_C_STANDARD 99)
set(ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${ROOT_DIR}/src)

file(GLOB SOURCES "src/*.c")

add_executable(DSA_in_C ${SOURCES})