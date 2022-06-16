cmake_minimum_required(VERSION 3.22)

project(cxx_algo)

set(CXX_STANDARD 17)

# subdirectories
set(LANG_SUBDIR
        src/lang/stringPrac
        src/lang/ioPrac
        )
set(DS_SUBDIR
        src/ds/single-linked-list
        )

# libraries
set(LANG_LIB_NAMES
        stringPrac ioPrac
        )
set(DS_LIB_NAMES
        sll
        )

add_subdirectory(src/ds/single-linked-list)
add_subdirectory(src/lang/stringPrac)
add_subdirectory(src/lang/ioPrac)

include_directories(src)
add_executable(${PROJECT_NAME}
        src/main.cc
        )

target_link_libraries(${PROJECT_NAME} PRIVATE
        ${PROB_LIB_NAMES}
        )
