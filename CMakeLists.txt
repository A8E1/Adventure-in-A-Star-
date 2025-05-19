cmake_minimum_required(VERSION 3.10)
project(AdventureInAStar)

set(CMAKE_CXX_STANDARD 17)

# Include headers
include_directories(include)

# Main executable
add_executable(AdventureInAStar
src/main.cpp
src/Player.cpp
src/Room.cpp
src/Minion.cpp
src/Brute.cpp
src/General.cpp
src/Warlord.cpp
)

# Unit tests
enable_testing()
add_subdirectory(tests)
