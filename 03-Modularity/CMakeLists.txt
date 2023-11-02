cmake_minimum_required(VERSION 3.28.0)

project(Modularity)

include_directories(include)

add_library(Vector Vector.cpp)
add_executable(Modularity main.cpp)

target_link_libraries(Modularity PUBLIC Vector)

