#ifndef SAWTOOTHSIGNAL_HPP
#define SAWTOOTHSIGNAL_HPP

#include "Time.hpp"
#include "PeriodicSignal.hpp"

namespace RohitKumar
{
    class SawtoothSignal : public PeriodicSignal
    {
    public:
        SawtoothSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period);
        double getVoltageAtTime(Time t) const;
    };
}

#endif