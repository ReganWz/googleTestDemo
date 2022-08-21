cmake_minimum_required(VERSION 3.1.5)

project(file)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../lib)

aux_source_directory(src src_dir)

add_library(file_exe STATIC ${src_dir})
#add_executable(file_exe ${src_dir})
target_include_directories(file_exe PUBLIC include)

if(GOOGLE_BUILD_TEST)
    enable_testing()
    add_subdirectory(test)
endif()