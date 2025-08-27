//
// Created by Sasha on 18.08.2025.
//

#include "CarFactory.h"

#include <exception>
#include <iostream>

#include "LightCar.h"
#include "HeavyCar.h"

CarFactory::~CarFactory() = default;

void CarFactory::addLightCar(float power) {
    cars.push_back(std::make_unique<LightCar>(power));
}

void CarFactory::addHeavyCar(float power) {
    cars.push_back(std::make_unique<HeavyCar>(power));
}

float CarFactory::showPowerCar(size_t index) {
    size_t size_cars = cars.size();

    if (index < size_cars)
        return cars[index]->getPower();
    else
        throw std::out_of_range("Error");
}

void CarFactory::removeCar(int index) {
    size_t size_cars = cars.size();

    if (index < size_cars && index >= 0)
        cars.erase(cars.begin() + index);
    else
        throw std::out_of_range("Error");
}
