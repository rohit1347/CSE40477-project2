#ifndef SAWTOOTHSIGNAL_H
#define SAWTOOTHSIGNAL_H

#include "Time.h"
#include "PeriodicSignal.h"

namespace Project2
{
    class SawtoothSignal : public PeriodicSignal
    {
    public:
        SawtoothSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period);
        double getVoltageAtTime(Time t) const override;
    };
}

#endif