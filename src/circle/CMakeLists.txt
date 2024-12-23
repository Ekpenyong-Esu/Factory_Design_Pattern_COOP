set(LIBRARY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/circle.c")
set(LIBRARY_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/circle.h")
set(LIBRARY_INCLUDES "./" "${CMAKE_BINARY_DIR}/configured_files/include")

add_library("LibCircle" STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS})
target_include_directories("LibCircle" PUBLIC ${LIBRARY_INCLUDES})

target_link_libraries("LibCircle" PUBLIC "LibShape")

if(${ENABLE_WARNINGS})
    target_set_warnings(
        TARGET
        "LibCircle"
        ENABLE
        ${ENABLE_WARNINGS}
        AS_ERRORS
        ${ENABLE_WARNINGS_AS_ERRORS})
endif()

if(${ENABLE_LTO})
    target_enable_lto(
        TARGET
        "LibCircle"
        ENABLE
        ON)
endif()

if(${ENABLE_CLANG_TIDY})
    add_clang_tidy_to_target("LibCircle")
endif()
