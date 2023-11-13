cmake_minimum_required(VERSION 3.26)
project(forouzan)

set(CMAKE_CXX_STANDARD 11)

set(moduleStudent_SOURCE_FILES
        student.cpp
)

add_library(moduleStudent
        ${moduleStudent_SOURCE_FILES}
)

target_include_directories(moduleStudent PUBLIC
        include
)
