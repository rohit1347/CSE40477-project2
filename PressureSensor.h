#ifndef PRESSURESENSOR_H
#define PRESSURESENSOR_H

#include<string>
using std::string;

#include "Signal.h"
#include "Sensor.h"

namespace Project2{
    class PressureSensor : public Sensor{
    public:
        PressureSensor(string name, Signal &source);
    protected:
        string getUnits() const override;
    };
}

#endif