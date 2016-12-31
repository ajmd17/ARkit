cmake_minimum_required(VERSION 3.5)

project(ARkit)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_LIST_DIR}/include)

add_subdirectory(src)