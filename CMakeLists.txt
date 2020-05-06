cmake_minimum_required(VERSION 3.15)
project(lcsh C)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

include(cmake_symlink)

add_executable(lcsh src/main.c)
file(CREATE_LINK lcsh bash SYMBOLIC)
file(CREATE_LINK lcsh sh SYMBOLIC)

