cmake_minimum_required(VERSION 3.17)
project(teh12)

set(CMAKE_CXX_STANDARD 14)

add_executable(teh12 Matkajarjestelma.cpp IOHelper.cpp IOHelper.h stdafx.cpp stdafx.h Matkakortti.cpp Matkakortti.h Leimaaja.cpp Leimaaja.h Matkatyyppi.h DateTime.cpp DateTime.h Leimaustapahtuma.cpp Leimaustapahtuma.h Paneeli.cpp Paneeli.h HenkiloKortti.cpp HenkiloKortti.h Omistaja.cpp Omistaja.h Lompakko.cpp Lompakko.h)