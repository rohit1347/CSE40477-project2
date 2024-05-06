#include <string>
using std::string;

#include "Sensor.hpp"
#include "AngularSensor.hpp"

namespace RohitKumar
{
AngularSensor::AngularSensor(string name, Signal &source) : Sensor(name, source)
{
}

string AngularSensor::getUnits() const
{
    return "Radians";
}
} // namespace RohitKumar