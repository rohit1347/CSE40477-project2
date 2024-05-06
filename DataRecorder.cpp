#include <iostream>
using std::ostream;
#include<iomanip>
using std::fixed;

#include "DataRecorder.h"
#include "Time.h"

namespace Project2
{
    DataRecorder::DataRecorder(ostream &out) : out(out)
    {
    }

    void DataRecorder::log(const Time &timestamp, const string &sensorName, double sensorVoltage, const string &sensorUnits)
    {
        out << timestamp << " - " << sensorName << " - " << std::fixed << std::setprecision(2) << sensorVoltage << " " << sensorUnits << "\n";
    }
}