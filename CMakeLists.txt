cmake_minimum_required(VERSION 3.10)
SET (CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3 -msse2 -mssse3 -std=c++11 -fexpensive-optimizations ")
SET (CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -O3 -msse2 -mssse3 -std=c++11 -fexpensive-optimizations ")

ADD_SUBDIRECTORY(projects)
