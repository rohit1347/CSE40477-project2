#ifndef SIGNAL_H
#define SIGNAL_H

#include "Time.h"

namespace Project2
{
    class Signal
    {
    public:
        Signal(double voltageOffset, Time timeOffset);
        virtual double getVoltageAtTime(Time t) const=0;

    protected:
        double getVoltageOffset() const;
        Time getTimeOffset() const;

    private:
        double voltageOffset;
        Time timeOffset;
    };
}

#endif