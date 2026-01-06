cmake_minimum_required(VERSION 4.0)
project(bank4 C)

set(CMAKE_C_STANDARD 23)

add_executable(bank4 main.c
        bank.c
        bank.h)
