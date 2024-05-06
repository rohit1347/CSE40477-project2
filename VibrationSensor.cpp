#include <string>
using std::string;

#include "Sensor.h"
#include "VibrationSensor.h"

namespace Project2
{
VibrationSensor::VibrationSensor(string name, Signal &source) : Sensor(name, source)
{
}

string VibrationSensor::getUnits() const
{
    return "Hertz (Hz)";
}
} // namespace Project2