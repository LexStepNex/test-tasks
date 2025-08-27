#ifndef PASSENGERCAR_H
#define PASSENGERCAR_H

#include "Car.h"

class LightCar : public Car {
public:
    LightCar();

    explicit LightCar(float newPower);
};

#endif //PASSENGERCAR_H
