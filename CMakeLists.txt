
cmake_minimum_required(VERSION 3.0)

project(RPS)

set(EXECUTABLE_NAME "RPS")

set(MAIN_SOURCE main.cpp)

set(SOURCES DrawManager.cpp Engine.cpp SceneManager.cpp EconomyScene.cpp BattleScene.cpp EconomyManager.cpp Script.cpp BattleManager.cpp Scene.cpp Factory.cpp Units.cpp Squad.cpp ${MAIN_SOURCE})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)


add_executable(${EXECUTABLE_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-window sfml-system)
