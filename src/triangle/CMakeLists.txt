set(LIBRARY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/triangle.c")
set(LIBRARY_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/triangle.h")
set(LIBRARY_INCLUDES "./" "${CMAKE_BINARY_DIR}/configured_files/include")

add_library("LibTriangle" STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS})
target_include_directories("LibTriangle" PUBLIC ${LIBRARY_INCLUDES})

target_link_libraries("LibTriangle" PUBLIC "LibShape")

if(${ENABLE_WARNINGS})
    target_set_warnings(
        TARGET
        "LibTriangle"
        ENABLE
        ${ENABLE_WARNINGS}
        AS_ERRORS
        ${ENABLE_WARNINGS_AS_ERRORS})
endif()

if(${ENABLE_LTO})
    target_enable_lto(
        TARGET
        "LibTriangle"
        ENABLE
        ON)
endif()

if(${ENABLE_CLANG_TIDY})
    add_clang_tidy_to_target("LibTriangle")
endif()
