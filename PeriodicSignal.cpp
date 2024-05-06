#include "Time.h"
#include "PeriodicSignal.h"

namespace Project2
{
    PeriodicSignal::PeriodicSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period) : Signal(voltageOffset, timeOffset), minVoltage(minVoltage), maxVoltage(maxVoltage), period(period)
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