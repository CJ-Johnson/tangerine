cmake_minimum_required(VERSION 3.10)
project(tangerine)
enable_testing()

add_library(tangerine_static STATIC
    src/tangerine.cpp
)

target_include_directories(tangerine_static PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(tangerine_tests tests/tests.cpp)

target_link_libraries(tangerine_tests tangerine_static)

add_test(TangerineTests tangerine_tests)
