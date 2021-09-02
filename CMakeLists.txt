cmake_minimum_required(VERSION 3.20)
project(nibbles)

set(CMAKE_CXX_STANDARD 20)

add_executable(nibbles src/main.cpp src/Engine.cpp headers/Engine.hpp src/draw.cpp src/input.cpp src/SnakeSection.cpp headers/SnakeSection.hpp src/update.cpp src/Apple.cpp headers/Apple.h)

include_directories(headers c:/SFML/include)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(nibbles ${SFML_LIBRARIES})
    endif()

file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})

#copy dlls to build directories
IF(WIN32)
    file(GLOB BINARY_DEP_DLLS "${SFML_INCLUDE_DIR}/../bin/*.dll")
    file(COPY ${BINARY_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
    endif()