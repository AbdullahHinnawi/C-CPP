cmake_minimum_required(VERSION 3.17)
project(teh7_8)

set(CMAKE_CXX_STANDARD 14)

add_executable(teh7_8 Matkajarjestelma.cpp IOHelper.cpp IOHelper.h stdafx.cpp stdafx.h Matkakortti.cpp Matkakortti.h Leimaaja.cpp Leimaaja.h Matkatyyppi.h DateTime.cpp DateTime.h Leimaustapahtuma.cpp Leimaustapahtuma.h)