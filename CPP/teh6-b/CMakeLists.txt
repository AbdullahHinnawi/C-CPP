cmake_minimum_required(VERSION 3.17)
project(teh6_b)

set(CMAKE_CXX_STANDARD 14)

add_executable(teh6_b Matkajarjestelma.cpp IOHelper.cpp IOHelper.h stdafx.cpp stdafx.h Matkakortti.cpp Matkakortti.h Leimaaja.cpp Leimaaja.h Matkatyyppi.h DateTime.cpp DateTime.h Leimaustapahtuma.cpp Leimaustapahtuma.h)