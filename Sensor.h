#ifndef SENSOR_H
#define SENSOR_H

#include <string>
using std::string;

#include "Time.h"
#include "Signal.h"
#include "DataRecorder.h"

namespace Project2
{
    class Sensor
    {
    public:
        Sensor(string name, Signal &source);
        void takeReading(Time t, DataRecorder &recorder) const;

    protected:
        virtual string getUnits() const=0;
        string getName() const;
        Signal &getSource() const;

    private:
        string name;
        Signal &source;
    };

}

#endif