#include "SineSignal.h"
#include <cmath>
using std::sin;


namespace Project2
{
    const double M_PI= 3.14159265358979323846;
    SineSignal::SineSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period) : PeriodicSignal(voltageOffset, timeOffset, minVoltage, maxVoltage, period)
    {
    }

    double SineSignal::getVoltageAtTime(Time t) const
    {
        // Calculate the time in seconds since the start of the signal
        double timeInSeconds = t.getTotalTimeAsSeconds() + getTimeOffset().getTotalTimeAsSeconds();
        // Calculate the sine wave component
        double sineWave = sin((timeInSeconds * 2 * M_PI) / getPeriod().getTotalTimeAsSeconds());
        // Calculate the voltage at time t
        double voltage = getVoltageOffset() + getMinVoltage() + 
                         ((getMaxVoltage() - getMinVoltage()) / 2) * (1 + sineWave);

        return voltage;
    }
}
