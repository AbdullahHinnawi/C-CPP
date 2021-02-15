cmake_minimum_required(VERSION 3.17)
project(teh6)

set(CMAKE_CXX_STANDARD 14)

add_executable(teh6 "SourceFiles/Matkajarjestelma.cpp" "SourceFiles/IOHelper.cpp" "HeaderFiles/IOHelper.h" "SourceFiles/stdafx.cpp" "HeaderFiles/stdafx.h" "SourceFiles/Matkakortti.cpp" "HeaderFiles/Matkakortti.h" "SourceFiles/Leimaaja.cpp" "HeaderFiles/Leimaaja.h" HeaderFiles/Matkatyyppi.h SourceFiles/DateTime.cpp HeaderFiles/DateTime.h)