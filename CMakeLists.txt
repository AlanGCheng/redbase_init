cmake_minimum_required(VERSION 3.7)
project(redbase_init)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/PF_Manager.cpp)
add_executable(redbase_init ${SOURCE_FILES})