cmake_minimum_required(VERSION 3.6)
project(kalmanfilter)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp KalmanFilter.cpp)
add_executable(kalmanfilter ${SOURCE_FILES})