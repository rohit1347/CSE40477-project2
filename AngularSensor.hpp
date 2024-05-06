#ifndef ANGULARSENSOR_HPP
#define ANGULARSENSOR_HPP

#include<string>
using std::string;

#include "Signal.hpp"
#include "Sensor.hpp"

namespace RohitKumar{
    class AngularSensor : public Sensor{
    public:
        AngularSensor(string name, Signal &source);
    protected:
        string getUnits() const override;
    };
}

#endif