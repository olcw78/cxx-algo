cmake_minimum_required(VERSION 3.22)

project(cxx_algo)

set(CXX_STANDARD 17)

# subdirectories
set(DS_SUBDIR
        # src/ds/single-linked-list
        )

set(LANG_SUBDIR
        # src/lang/stringPrac
        # src/lang/ioPrac
        # src/lang/stl-algorithms
        )

set(SORT_SUBDIR
        src/sort/selection-sort
        )

# libraries

set(DS_LIB_NAMES
        # sll
        )

set(LANG_LIB_NAMES
        # stringPrac
        # ioPrac
        # stl-algorithms
        )

set(SORT_LIB_NAMES
        selection-sort
        )

foreach(dir IN LISTS DS_SUBDIR LANG_SUBDIR SORT_SUBDIR)
        message(${dir})
        add_subdirectory(${dir})
endforeach()

include_directories(src)

add_executable(${PROJECT_NAME}
        src/main.cc
        # src/ds/run.cc
        # src/lang/run.cc
        src/sort/run.cc
        )

target_link_libraries(
        ${PROJECT_NAME}
        PRIVATE
        ${DS_LIB_NAMES}
        ${LANG_LIB_NAMES}
        ${SORT_LIB_NAMES}
        )
