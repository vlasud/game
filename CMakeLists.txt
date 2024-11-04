cmake_minimum_required (VERSION 3.8)

project(game CXX C)

set(CMAKE_CXX_STANDARD 20)

file(GLOB SRC_FILES
    ${PROJECT_SOURCE_DIR}/src/*.cpp
    ${PROJECT_SOURCE_DIR}/src/*/*.cpp
)

add_executable(${PROJECT_NAME} ${SRC_FILES})

# graviton
add_subdirectory(third_party/graviton)
target_link_libraries(${PROJECT_NAME} PRIVATE graviton)
