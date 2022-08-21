cmake_minimum_required(VERSION 3.1.5)

project(file)

set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY  https://github.com/google/googletest.git
    GIT_TAG release-1.8.0
)
FetchContent_MakeAvailable(googletest)
MESSAGE(${PROJECT_SOURCE_DIR})
MESSAGE(${googletest_SOURCE_DIR})
link_libraries(gtest_main file_exe)
link_directories(${PROJECT_SOURCE_DIR}/../../lib)
add_executable(file_test file_test.cpp)
include_directories(${PROJECT_SOURCE_DIR}/../include ${googletest_SOURCE_DIR}/googletest/include/)
include(GoogleTest)
gtest_discover_tests(file_test)