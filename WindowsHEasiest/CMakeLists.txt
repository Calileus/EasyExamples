cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MyWindowsProject)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable, specifying the source file with the correct path
add_executable(MyWindowsProject src/main.cpp)
