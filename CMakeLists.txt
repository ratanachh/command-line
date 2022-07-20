CMAKE_MINIMUM_REQUIRED(VERSION 3.12)

SET(PROJ_NAME "My-Commandline")
PROJECT(${PROJ_NAME} VERSION 1.0.0)

message(STATUS "Start build project ${PROJECT_NAME} with version ${PROJECT_VERSION}")
add_executable(_watch _watch.cpp)

