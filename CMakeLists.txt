
cmake_minimum_required(VERSION 3.0)

project(RPS)

set(EXECUTABLE_NAME "RPS")

set(MAIN_SOURCE main.cpp)
set(SOURCES Engine.cpp Factory.cpp Units.cpp Squad.cpp ${MAIN_SOURCE})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)


add_executable(${EXECUTABLE_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-window sfml-system)

# cmake_minimum_required(VERSION 3.0)
# project(RPS)

# set(EXECUTABLE_NAME "RPS")
# # add_executable(${EXECUTABLE_NAME} main.cpp Factory.cpp Squad.cpp Units.cpp)
# add_executable(${EXECUTABLE_NAME} main.cpp Engine.cpp Factory.cpp Squad.cpp Units.cpp)


# # Detect and add SFML
# # set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
# # find_package(SFML 2 REQUIRED system window graphics network audio)
# # target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})


# # Install target
# #install(TARGETS ${EXECUTABLE_NAME} DESTINATION bin)
