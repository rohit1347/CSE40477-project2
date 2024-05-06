#ifndef PERIODICSIGNAL_HPP
#define PERIODICSIGNAL_HPP

#include "Time.hpp"
#include "Signal.hpp"

namespace RohitKumar
{
    class PeriodicSignal : public Signal
    {
    public:
        PeriodicSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period);
        double virtual getVoltageAtTime(Time t) const;

    protected:
        double getMinVoltage() const;
        double getMaxVoltage() const;
        Time getPeriod() const;

    private:
        double minVoltage;
        double maxVoltage;
        Time period;
    };
}

#endif