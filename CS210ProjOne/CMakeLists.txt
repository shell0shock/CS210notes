cmake_minimum_required(VERSION 4.3)
project(CS210ProjOne)

set(CMAKE_CXX_STANDARD 20)

add_executable(CS210ProjOne main.cpp functions.h)
target_link_options(CS210ProjOne PRIVATE "-static-libgcc")
target_link_options(CS210ProjOne PRIVATE "-static-libstdc++")
