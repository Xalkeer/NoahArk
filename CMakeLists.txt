cmake_minimum_required(VERSION 3.29)
project(Noah_Ark)

set(CMAKE_CXX_STANDARD 20)

add_executable(Noah_Ark main.cpp
        animal.h
        animal.cpp
        game.h
        mammal.h
        mammal.cpp
        game.cpp
        bird.cpp)
