# Required cmake with at least 3.0.0
cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

# Project name (please change it)
project(boilerplate VERSION 0.1.0 LANGUAGES C)
# Setting some macros to be used
set(PROJECT_SOURCE_DIR ./src/)
set(UNITY_PATH	./src/Unity/src)
set(PROD_PATH	./src/prod_code)
# Includes files
include_directories(${PROJECT_SOURCE_DIR} ${UNITY_PATH} ${PROD_PATH})

# Add executable for the tests
add_library(unity STATIC ${UNITY_PATH}/unity.c)

# TODO : To be changed to the .c file that you've renamed
add_library(prod_code STATIC ${PROD_PATH}/example.c)

add_executable(test_main ${PROJECT_SOURCE_DIR}/test_main.c)

# Linking the executable
target_link_libraries(test_main prod_code)
target_link_libraries(test_main unity)
