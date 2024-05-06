#include <string>
using std::string;

#include "Time.h"
#include "Signal.h"
#include "DataRecorder.h"
#include "Sensor.h"

namespace Project2
{
    //
    Sensor::Sensor(string name, Signal &source) : name(name), source(source)
    {
    }
    void Sensor::takeReading(Time t, DataRecorder &recorder) const
    {
        double voltage = getSource().getVoltageAtTime(t);
        recorder.log(t, name, voltage, getUnits());
    }
    string Sensor::getName() const
    {
        return name;
    }
    Signal &Sensor::getSource() const
    {
        return source;
    }
}