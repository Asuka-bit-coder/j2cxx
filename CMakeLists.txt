cmake_minimum_required(VERSION 3.20)

project(
    j2cxx
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(
    j2cxx
    src/main.cpp
)

target_compile_options(
    j2cxx
    PRIVATE
        -Wall
        -Wextra
        -Wpedantic
)

enable_testing()

add_test(
    NAME cli_version
    COMMAND j2cxx --version
)
