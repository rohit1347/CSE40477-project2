#include "SineSignal.hpp"
#include <cmath>
using std::sin;


namespace RohitKumar
{
    const double M_PI= 3.14159265358979323846;
    SineSignal::SineSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period) : PeriodicSignal(voltageOffset, timeOffset, minVoltage, maxVoltage, period)
    {
    }

    double SineSignal::getVoltageAtTime(Time t) const
    {
        double voltage = getVoltageOffset() + getMinVoltage()+(getMaxVoltage()-getMinVoltage())/2+sin((t.getTotalTimeAsSeconds()+getTimeOffset().getTotalTimeAsSeconds())*M_PI/getPeriod().getTotalTimeAsSeconds()*(getMaxVoltage()-getMinVoltage()));
        return voltage;
    }

}