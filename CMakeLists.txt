cmake_minimum_required(VERSION 3.20)

project(
    cpp_dsa
    VERSION 1.0
    DESCRIPTION "Data Structures and Algorithms in Modern C++"
    LANGUAGES CXX
)

# ------------------------------------------------------------------------------
# C++ Standard
# ------------------------------------------------------------------------------

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ------------------------------------------------------------------------------
# Build Settings
# ------------------------------------------------------------------------------

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

# ------------------------------------------------------------------------------
# Output Directories
# ------------------------------------------------------------------------------

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

# ------------------------------------------------------------------------------
# Modules
# ------------------------------------------------------------------------------

add_subdirectory(src/01_arrays)
# add_subdirectory(src/02_strings)
# add_subdirectory(src/03_recursion)
# add_subdirectory(src/04_linked_list)
# add_subdirectory(src/05_stack)
# add_subdirectory(src/06_queue)
# add_subdirectory(src/07_tree)
# add_subdirectory(src/08_heap)
# add_subdirectory(src/09_graph)
# add_subdirectory(src/10_sorting)