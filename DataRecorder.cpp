#include<iostream>
using std::ostream;

#include "DataRecorder.hpp"
#include "Time.hpp"

namespace RohitKumar
{
    DataRecorder::DataRecorder(ostream& out) : out(out)
    {
    }

    void DataRecorder::log(const Time& timestamp, const string& sensorName, double sensorVoltage, const string& sensorUnits)
    {
        out << timestamp << " " << sensorName << " " << sensorVoltage << " " << sensorUnits << "\n";
    }
}