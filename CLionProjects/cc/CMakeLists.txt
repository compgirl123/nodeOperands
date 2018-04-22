cmake_minimum_required(VERSION 3.9)
project(cc)

set(CMAKE_CXX_STANDARD 11)

add_executable(cc main.cpp CompositeOperand.cpp Component.cpp Component.h CompositeOperand.h NumericOperation.cpp NumericOperation.h)