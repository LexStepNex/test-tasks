#include <iostream>

#include "CarFactory.h"

int main() {
    CarFactory factory;

    factory.addLightCar(1);
    factory.addHeavyCar(3);
    factory.removeCar(1);

    for (int i = -1; i < 5; i++) {
        try {
            std::cout << factory.showPowerCar(i) << "\n";
        } catch (const std::exception &e) {
            std::cout << e.what() << "\n";
        }
    }


    return 0;
}
