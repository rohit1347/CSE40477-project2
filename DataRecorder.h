#ifndef DATARECORDER_H
#define DATARECORDER_H

#include <iostream>
using std::ostream;
using std::string;

#include "Time.h"

namespace Project2
{
    class DataRecorder
    {
    public:
        DataRecorder(ostream &out);
        void log(const Time &timestamp, const string &sensorName, double sensorVoltage, const string &sensorUnits);

    private:
        ostream &out;
    };
}
#endif // DATARECORDER_H