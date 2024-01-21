cmake_minimum_required(VERSION 3.14)

project(template)
set(CMAKE_CXX_STANDARD 17)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

file(GLOB engine_sources "src/*.cpp")
add_library(engine ${engine_sources})

target_include_directories(engine PUBLIC ${OPENGL_INCLUDE_DIRS})
add_executable(app app/main.cpp)
target_link_libraries(app engine ${OPENGL_LIBRARIES} glfw)
