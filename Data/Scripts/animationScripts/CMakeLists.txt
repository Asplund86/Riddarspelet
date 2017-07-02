cmake_minimum_required(VERSION 2.8.11)

add_library(animationLibrary knightAnimation.c)

target_link_libraries(animationLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
