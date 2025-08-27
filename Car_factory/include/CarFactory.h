//
// Created by Sasha on 18.08.2025.
//

#ifndef CARFACTORY_H
#define CARFACTORY_H

#include <vector>
#include <memory>

#include "Car.h"

class CarFactory {
    std::vector<std::unique_ptr<Car>> cars;

public:
    CarFactory() = default;
    ~CarFactory();

    void addLightCar(float power);
    void addHeavyCar(float power);

    float showPowerCar(size_t index);

    void removeCar(int index);
};



#endif //CARFACTORY_H
