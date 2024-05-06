#include <string>
using std::string;

#include "Sensor.hpp"
#include "TemperatureSensor.hpp"

namespace RohitKumar
{
TemperatureSensor::TemperatureSensor(string name, Signal &source) : Sensor(name, source)
{
}

string TemperatureSensor::getUnits() const
{
    return "Degrees Celsius";
}
} // namespace RohitKumar