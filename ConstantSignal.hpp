#ifndef CONSTANTSIGNAL_HPP
#define CONSTANTSIGNAL_HPP

#include "Time.hpp"
#include "Signal.hpp"

namespace RohitKumar
{
    class ConstantSignal: public Signal
    {
    public:
        ConstantSignal(double voltageOffset, Time timeOffset);
        double getVoltageAtTime(Time t) const;
    };
}

#endif