#ifndef CAR_H
#define CAR_H

class Car {
public:
    Car() = default;

    explicit Car(float newPower) {
        setPower(newPower);
    };

    virtual ~Car() = default;

    [[nodiscard]] virtual float getPower() const {
        return power;
    };

    void setPower(float newPower) {
        if (newPower > 0) {
            power = newPower;
        } else {
            power = 0;
        };
    };

private:
    float power = 0;
};

#endif //CAR_H
