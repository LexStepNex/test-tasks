cmake_minimum_required(VERSION 3.31)
project(Car_factory)

set(CMAKE_CXX_STANDARD 20)

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_subdirectory(source)

target_include_directories(Car_factory PUBLIC include)