#ifndef TEMPERATURESENSOR_HPP
#define TEMPERATURESENSOR_HPP

#include<string>
using std::string;

#include "Signal.hpp"
#include "Sensor.hpp"

namespace RohitKumar{
    class TemperatureSensor : public Sensor{
    public:
        TemperatureSensor(string name, Signal &source);
    protected:
        string getUnits() const override;
    };
}

#endif