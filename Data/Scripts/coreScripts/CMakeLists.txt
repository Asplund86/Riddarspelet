cmake_minimum_required(VERSION 2.8.11)

add_library(coreLibrary coreEvents.c structs.h)

target_link_libraries(coreLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
