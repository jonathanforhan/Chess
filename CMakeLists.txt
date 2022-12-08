cmake_minimum_required(VERSION 3.22)
set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)

set(PROJ_NAME chess)
project(${PROJ_NAME})

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")
find_package(SDL2 REQUIRED; )

add_subdirectory(src)
add_subdirectory(app)

target_link_libraries(${PROJ_NAME} gamelib)