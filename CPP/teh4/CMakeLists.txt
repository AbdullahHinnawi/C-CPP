cmake_minimum_required(VERSION 3.17)
project(teh4)

set(CMAKE_CXX_STANDARD 14)

add_executable(teh4 Matkajarjestelma.cpp IOHelper.cpp IOHelper.h stdafx.cpp stdafx.h Matkakortti.cpp Matkakortti.h)