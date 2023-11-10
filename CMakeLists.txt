cmake_minimum_required(VERSION 3.26)
project(forouzan)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(modules)

add_executable(prg7-1 example/circle/prg7-1.cpp)
add_executable(prg7-2 example/circle/prg7-2.cpp)
add_executable(prg7-3 example/circle/prg7-3.cpp)
target_link_libraries(prg7-3  PRIVATE moduleCircle)