cmake_minimum_required(VERSION 3.26)
project(forouzan)

set(CMAKE_CXX_STANDARD 11)

set(moduleCircle_SOURCE_FILES
        circle.cpp
)

add_library(moduleCircle
        ${moduleCircle_SOURCE_FILES}
)

target_include_directories(moduleCircle PUBLIC
        include
)
