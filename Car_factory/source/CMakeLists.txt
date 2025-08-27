cmake_minimum_required(VERSION 3.31)

add_executable(Car_factory main.cpp
        ${INCLUDE_DIR}/car.h
        LightCar.cpp
        ${INCLUDE_DIR}/LightCar.h
        HeavyCar.cpp
        ${INCLUDE_DIR}/HeavyCar.h
        CarFactory.cpp
        ${INCLUDE_DIR}/CarFactory.h)