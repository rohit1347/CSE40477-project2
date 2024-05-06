#include "Time.hpp"
#include "ConstantSignal.hpp"

namespace RohitKumar
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