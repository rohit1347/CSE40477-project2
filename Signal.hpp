#ifndef SIGNAL_HPP
#define SIGNAL_HPP

#include "Time.hpp"

namespace RohitKumar
{
    class Signal
    {
    public:
        Signal(double voltageOffset, Time timeOffset);
        virtual double getVoltageAtTime(Time t) const;

    protected:
        double getVoltageOffset() const;
        Time getTimeOffset() const;

    private:
        double voltageOffset;
        Time timeOffset;
    };
}

#endif