cmake_minimum_required(VERSION 3.1.5)

project(GoogleTest)

option(GOOGLE_BUILD_TEST "build unit test" ON)

if(GOOGLE_BUILD_TEST)
    enable_testing()
endif()

add_subdirectory(file)