cmake_minimum_required(VERSION 3.21)
project(TestKlausur)

set(CMAKE_CXX_STANDARD 14)

add_executable(TestKlausur main.cpp Bild.cpp Bild.h MetaData.cpp MetaData.h ioInterface.cpp ioInterface.h)
