#include "Time.hpp"
#include "PeriodicSignal.hpp"

namespace RohitKumar
{
    PeriodicSignal::PeriodicSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period) : Signal(voltageOffset, timeOffset), minVoltage(minVoltage), maxVoltage(maxVoltage), period(period)
    {
    }

    double PeriodicSignal::getVoltageAtTime(Time t) const
    {
    }

    double PeriodicSignal::getMinVoltage() const
    {
        return minVoltage;
    }

    double PeriodicSignal::getMaxVoltage() const
    {
        return maxVoltage;
    }
    
    Time PeriodicSignal::getPeriod() const
    {
        return period;
    }
}