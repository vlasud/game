cmake_minimum_required (VERSION 3.8)

project ("game")

file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)

add_executable (game ${SRC_FILES})
