# ------------------------------------------------------------------------------
# Arrays Library
# ------------------------------------------------------------------------------

add_library(arrays_lib
    src/array.cpp
)

target_include_directories(arrays_lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(arrays_lib
    PUBLIC
        cxx_std_17
)

# ------------------------------------------------------------------------------
# Examples
# ------------------------------------------------------------------------------

file(GLOB EXAMPLES CONFIGURE_DEPENDS
    examples/*.cpp
)

foreach(example ${EXAMPLES})

    get_filename_component(example_name ${example} NAME_WE)

    set(target "arrays_${example_name}")

    add_executable(${target}
        ${example}
    )

    target_link_libraries(${target}
        PRIVATE
            arrays_lib
    )

    target_compile_features(${target}
        PRIVATE
            cxx_std_17
    )

    set_target_properties(${target}
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    )

endforeach()

# ------------------------------------------------------------------------------
# Library Output
# ------------------------------------------------------------------------------

set_target_properties(arrays_lib
    PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
)