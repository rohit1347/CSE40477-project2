#include <string>
using std::string;

#include "Sensor.h"
#include "TemperatureSensor.h"

namespace Project2
{
TemperatureSensor::TemperatureSensor(string name, Signal &source) : Sensor(name, source)
{
}

string TemperatureSensor::getUnits() const
{
    return "Degrees Celsius";
}
} // namespace Project2