cmake_minimum_required(VERSION 2.8.11)

add_library(physicsLibrary moveScripts.c)

target_link_libraries(physicsLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
