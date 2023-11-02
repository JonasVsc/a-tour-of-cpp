cmake_minimum_required(VERSION 3.28.0)

project(Modularity)

include_directories(include)

add_library(Vector Vector.cpp)
add_executable(Modularity modularity.cpp)
add_executable(Namespace namespace.cpp)
add_executable(HandlingErrors handling-errors.cpp)


target_link_libraries(Modularity PUBLIC Vector)

