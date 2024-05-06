#include "Time.hpp"
#include "Signal.hpp"

namespace RohitKumar
{
    Signal::Signal(double voltageOffset, Time timeOffset) : voltageOffset(voltageOffset), timeOffset(timeOffset)
    {
    }

    double Signal::getVoltageAtTime(Time t) const
    {
    }

    double Signal::getVoltageOffset() const
    {
        return voltageOffset;
    }

    Time Signal::getTimeOffset() const
    {
        return timeOffset;
    }
}