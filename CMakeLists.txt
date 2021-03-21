cmake_minimum_required(VERSION 3.0)

project(RPS)

set(MAIN_SOURCE main.cpp)
set(SOURCES Factory.cpp Units.cpp ${MAIN_SOURCE})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_executable(${PROJECT_NAME} ${SOURCES})
