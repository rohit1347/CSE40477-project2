#include<string>
using std::string;

#include "Time.hpp"
#include "Signal.hpp"
#include "DataRecorder.hpp"
#include"Sensor.hpp"

namespace RohitKumar{
    // 
    Sensor::Sensor(string name, Signal& source) : name(name), source(source)
    {
    }
    void Sensor::takeReading(Time t, DataRecorder& recorder) const
    {
        double voltage = getSource().getVoltageAtTime(t);
        recorder.log(t, name, voltage, getUnits());
    }
    string Sensor::getName() const
    {
        return name;
    }
    Signal& Sensor::getSource() const
    {
        return source;
    }
    string Sensor::getUnits() const
    {
    }
}