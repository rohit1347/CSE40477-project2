#include "Time.h"
#include "ConstantSignal.h"

namespace Project2
{
    ConstantSignal::ConstantSignal(double voltageOffset, Time timeOffset) 
        : Signal(voltageOffset, timeOffset)
    {
    }

    double ConstantSignal::getVoltageAtTime(Time t) const
    {
        return getVoltageOffset();
    }
}