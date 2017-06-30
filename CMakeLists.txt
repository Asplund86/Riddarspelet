cmake_minimum_required(VERSION 2.8.11)

project(KNIGHT)

add_subdirectory(Data/Scripts/coreScripts)
add_subdirectory(Data/Scripts/renderScripts)
add_subdirectory(Data/Scripts/gamePhysics)


set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules")

add_executable(${PROJECT_NAME} main.c)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)


include_directories(${SDL2_INCLUDE_DIR}
                    ${SDL2_IMAGE_INCLUDE_DIR}
                )
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY}
                             ${SDL2_IMAGE_LIBRARIES}
                             )
target_link_libraries(${PROJECT_NAME} LINK_PUBLIC coreLibrary renderLibrary physicsLibrary ${SDL2_LIBRARY} ${SDL2_image_LIBRARIES})
