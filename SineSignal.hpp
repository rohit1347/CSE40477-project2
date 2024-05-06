#ifndef SINESIGNAL_HPP
#define SINESIGNAL_HPP

#include "Time.hpp"
#include "PeriodicSignal.hpp"

namespace RohitKumar
{
    extern const double M_PI;
    class SineSignal : public PeriodicSignal
    {
    public:
        SineSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period);
        double getVoltageAtTime(Time t) const;
    };
}

#endif