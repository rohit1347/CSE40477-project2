#ifndef VIBRATIONSENSOR_HPP
#define VIBRATIONSENSOR_HPP

#include<string>
using std::string;

#include "Signal.hpp"
#include "Sensor.hpp"

namespace RohitKumar{
    class VibrationSensor : public Sensor{
    public:
        VibrationSensor(string name, Signal &source);
    protected:
        string getUnits() const override;
    };
}

#endif