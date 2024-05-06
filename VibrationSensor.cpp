#include <string>
using std::string;

#include "Sensor.hpp"
#include "VibrationSensor.hpp"

namespace RohitKumar
{
VibrationSensor::VibrationSensor(string name, Signal &source) : Sensor(name, source)
{
}

string VibrationSensor::getUnits() const
{
    return "Hertz (Hz)";
}
} // namespace RohitKumar