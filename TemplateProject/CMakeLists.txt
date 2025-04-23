cmake_minimum_required(VERSION 3.10)
project(TemplateProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(TemplateProject "${MY_SOURCES}")
target_include_directories(TemplateProject PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include/")
