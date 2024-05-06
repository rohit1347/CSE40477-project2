#ifndef SINESIGNAL_H
#define SINESIGNAL_H

#include "Time.h"
#include "PeriodicSignal.h"

namespace Project2
{
    extern const double M_PI;
    class SineSignal : public PeriodicSignal
    {
    public:
        SineSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period);
        double getVoltageAtTime(Time t) const override;
    };
}

#endif