cmake_minimum_required(VERSION 3.31)
project(tac C)

set(CMAKE_C_STANDARD 11)

include_directories(source)

add_executable(tac
        source/include/lexer.h
        source/include/token.h
        source/source/lexer.c
        source/source/token.c
        source/include/tac.h
        source/source/tac.c)
