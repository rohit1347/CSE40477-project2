#include <string>
using std::string;

#include "Sensor.h"
#include "AngularSensor.h"

namespace Project2
{
AngularSensor::AngularSensor(string name, Signal &source) : Sensor(name, source)
{
}

string AngularSensor::getUnits() const
{
    return "Radians";
}
} // namespace Project2