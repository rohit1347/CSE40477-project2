#include <string>
using std::string;

#include "Sensor.hpp"
#include "PressureSensor.hpp"

namespace RohitKumar
{
PressureSensor::PressureSensor(string name, Signal &source) : Sensor(name, source)
{
}

string PressureSensor::getUnits() const
{
    return "Pounds per square inch (PSI)";
}
} // namespace RohitKumar