cmake_minimum_required(VERSION 3.17)
project(teh10)

set(CMAKE_CXX_STANDARD 14)

add_executable(teh10 Matkajarjestelma.cpp IOHelper.cpp IOHelper.h stdafx.cpp stdafx.h Matkakortti.cpp Matkakortti.h Leimaaja.cpp Leimaaja.h Matkatyyppi.h DateTime.cpp DateTime.h)
