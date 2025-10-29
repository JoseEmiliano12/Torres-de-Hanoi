# CMakeLists.txt for HanoiGameCoreLib

cmake_minimum_required(VERSION 3.10)

project(HanoiGameCoreLib)

set(CMAKE_CXX_STANDARD 11)

# Add library
add_library(HanoiGameCoreLib src/HanoiGameCoreLib.cpp)

# Include directories
include_directories(include)

# Link libraries (if any)
# target_link_libraries(HanoiGameCoreLib some_library)
