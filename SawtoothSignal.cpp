#include "Time.hpp"
#include "SawtoothSignal.hpp"
#include <cmath>

namespace RohitKumar
{
    SawtoothSignal::SawtoothSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period)
        : PeriodicSignal(voltageOffset, timeOffset, minVoltage, maxVoltage, period)
    {
    }

    double SawtoothSignal::getVoltageAtTime(Time t) const
{
    // Calculate the time elapsed since the start of the signal
    double elapsedTime = t.getTotalTimeAsSeconds() + getTimeOffset().getTotalTimeAsSeconds();
    // Calculate the time within the current period
    double deltaVoltage = getMaxVoltage() - getMinVoltage();
    double modCalc = fmod((elapsedTime*deltaVoltage/getPeriod().getTotalTimeAsSeconds()),deltaVoltage);
    // Calculate the voltage at the current time within the period
    double voltage = getMinVoltage() + modCalc;
    // Add the voltage offset to the calculated voltage
    return getVoltageOffset() + voltage;
}

}