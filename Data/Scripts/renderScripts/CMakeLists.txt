cmake_minimum_required(VERSION 2.8.11)

add_library(renderLibrary doRender.c renderDeclareBackgrounds.c renderDeclareKnight1.c)

target_link_libraries(renderLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
