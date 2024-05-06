#ifndef DATARECORDER_HPP
#define DATARECORDER_HPP

#include <iostream>
using std::ostream;
using std::string;

#include "Time.hpp"

namespace RohitKumar
{
    class DataRecorder
    {
        public:
        DataRecorder(ostream& out);
        void log(const Time& timestamp, const string& sensorName, double sensorVoltage, const string& sensorUnits);

        private:
        ostream& out;
    };
}
#endif // DATARECORDER_HPP