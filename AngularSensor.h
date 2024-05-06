#ifndef ANGULARSENSOR_H
#define ANGULARSENSOR_H

#include<string>
using std::string;

#include "Signal.h"
#include "Sensor.h"

namespace Project2{
    class AngularSensor : public Sensor{
    public:
        AngularSensor(string name, Signal &source);
    protected:
        string getUnits() const override;
    };
}

#endif