cmake_minimum_required(VERSION 3.26)
project(forouzan)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(modules)

add_executable(prg7-1 example/circle/prg7-1.cpp)
add_executable(prg7-2 example/circle/prg7-2.cpp)
add_executable(prg7-3 example/circle/prg7-3.cpp)
target_link_libraries(prg7-3  PRIVATE moduleCircle)

add_executable(prg8-1 example/array/prg8-1.cpp)
add_executable(prg8-4 example/circle/prg8-4.cpp)
target_link_libraries(prg8-4  PRIVATE moduleCircle)
add_executable(prg8-5 example/array/prg8-5.cpp)
add_executable(prg8-12 example/student/prg8-12.cpp)
target_link_libraries(prg8-12  PRIVATE moduleStudent)
add_executable(prg9-2 example/pointer/prg9-2.cpp)
