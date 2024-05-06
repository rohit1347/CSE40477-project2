#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H

#include<string>
using std::string;

#include "Signal.h"
#include "Sensor.h"

namespace Project2{
    class TemperatureSensor : public Sensor{
    public:
        TemperatureSensor(string name, Signal &source);
    protected:
        string getUnits() const override;
    };
}

#endif