cmake_minimum_required(VERSION 2.8)
project(basic_environment)
find_package(OpenGL REQUIRED)
include_directories(${OpenGL_INCLUDE_DIR})
#find_package(FREEGLUT REQUIRED)
#include_directories(${FREEGLUT_INCLUDE_DIR})
set(sources main.cpp)
add_executable(${PROJECT_NAME} ${sources})
target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARY} glut)
