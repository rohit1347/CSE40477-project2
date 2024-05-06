#ifndef PRESSURESENSOR_HPP
#define PRESSURESENSOR_HPP

#include<string>
using std::string;

#include "Signal.hpp"
#include "Sensor.hpp"

namespace RohitKumar{
    class PressureSensor : public Sensor{
    public:
        PressureSensor(string name, Signal &source);
    protected:
        string getUnits() const override;
    };
}

#endif