cmake_minimum_required(VERSION 3.22)

project(cxx_algo)

set(CXX_STANDARD 17)

add_subdirectory(src/stringPrac)
add_subdirectory(src/ioPrac)
add_subdirectory(src/data-structure/linear/linked-list/singly-linked-list)

include_directories(src)

add_executable(${PROJECT_NAME} src/main.cc)

target_link_libraries(${PROJECT_NAME} PRIVATE 
    stringPrac
    ioPrac
    singly-linked-list)