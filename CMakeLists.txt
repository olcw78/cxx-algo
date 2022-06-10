cmake_minimum_required(VERSION 3.22)

project(cxx_algo)

set(CXX_STANDARD 17)

# subdirectories
set(LANG_SUBDIR
        src/lang/stringPrac
        src/lang/ioPrac
        )
set(DS_SUBDIR
        src/data-structure/linear/linked-list/singly-linked-list
        )
set(PROB_SUBDIR
        stc/prob/comon/ch1
        )

# libraries
set(LANG_LIB_NAMES
        stringPrac ioPrac
        )
set(DS_LIB_NAMES
        singly-linked-list
        )
set(PROB_LIB_NAMES
        comon-ch1
        )

# add_subdirectory(src/lang/stringPrac)
# add_subdirectory(src/lang/ioPrac)
add_subdirectory(src/prob/comon/ch1)

include_directories(src)
add_executable(${PROJECT_NAME}
        src/main.cc
        )

target_link_libraries(${PROJECT_NAME} PRIVATE
        ${PROB_LIB_NAMES}
        )