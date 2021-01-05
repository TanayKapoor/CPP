cmake_minimum_required(VERSION 3.17)
project(CPP)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(HackerEarth)
include_directories(Practice)

add_executable(CPP HackerEarth/Batman.cpp HackerEarth/Test.cpp "HackerEarth/Round Table Killers.cpp")
