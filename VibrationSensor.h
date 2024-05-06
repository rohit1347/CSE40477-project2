#ifndef VIBRATIONSENSOR_H
#define VIBRATIONSENSOR_H

#include<string>
using std::string;

#include "Signal.h"
#include "Sensor.h"

namespace Project2{
    class VibrationSensor : public Sensor{
    public:
        VibrationSensor(string name, Signal &source);
    protected:
        string getUnits() const override;
    };
}

#endif