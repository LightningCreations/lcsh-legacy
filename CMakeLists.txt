cmake_minimum_required(VERSION 3.15)
project(lcsh C)

add_executable(lcsh src/main.c)
add_custom_command(TARGET lcsh POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E create_symlink lcsh ${CMAKE_CURRENT_BINARY_DIR}/sh
        COMMAND ${CMAKE_COMMAND} -E create_symlink lcsh ${CMAKE_CURRENT_BINARY_DIR}/bash
        )

install(TARGETS lcsh)
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/bash ${CMAKE_CURRENT_BINARY_DIR}/sh
        TYPE BIN)
