# CMakeList.txt : CMake project for Project-Euler, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Project-Euler")

# Add source to this project's executable.
add_executable (Project-Euler "Project-Euler.cpp" "Project-Euler.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Project-Euler PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
