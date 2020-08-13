project(foo)
cmake_minimum_required(VERSION 3.4 FATAL_ERROR)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

include_directories(include)

file(GLOB SOURCES "src/*.c")

add_executable(bar ${SOURCES})

