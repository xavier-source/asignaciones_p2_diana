cmake_minimum_required(VERSION 3.15)
project(untitled10 C)

set(CMAKE_C_STANDARD 99)
include_directories(libs_generales)
add_executable(1_diana 1_diana/varia_cam_lib.c 1_diana/varia_cam_main.c 1_diana/varia_cam_lib.h)
add_executable(1_dianaminunit 1_diana/varia_cam_minunit.c 1_diana/varia_cam_lib.c 1_diana/varia_cam_lib.h)