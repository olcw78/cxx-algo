cmake_minimum_required(VERSION 3.22)

project(cxx_algo)

set(CXX_STANDARD 17)

# subdirectories
set(DS_SUBDIR
        src/ds/single-linked-list
        )

set(LANG_SUBDIR
        # src/lang/stringPrac
        # src/lang/ioPrac
        src/lang/stl-algorithms
        )
        
# libraries

set(DS_LIB_NAMES
        sll
        )

set(LANG_LIB_NAMES
        # stringPrac 
        # ioPrac
        stl-algorithms
        )

message("<add_subdirectory> start")
foreach(dir IN LISTS LANG_SUBDIR)
        message(${dir})
        add_subdirectory(${dir})
endforeach()
message("<add_subdirectory> end")


include_directories(src)

add_executable(${PROJECT_NAME} 
        src/main.cc
        src/ds/run.cc
        src/lang/run.cc
        )

target_link_libraries(
        ${PROJECT_NAME} 
        PRIVATE
        ${LANG_LIB_NAMES}
        )
