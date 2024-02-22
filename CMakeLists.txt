cmake_minimum_required(VERSION 3.26)
project(CVanillaOptionPricing)

set(CMAKE_CXX_STANDARD 17)

add_executable(CVanillaOptionPricing main.cpp
        Random1.h
        Random1.cpp
        PayoffCallE.cpp

        DoubleDigital.h
        DoubleDigital.cpp
        PayOff3.h
        PayOff3.cpp
        VanillaOption.h
        VanillaOption.cpp
        SimpleMonteCarlo.h
        SimpleMonteCarlo.cpp)
