#ifndef MONITORINGSYSTEM_H
#define MONITORINGSYSTEM_H

#include<iostream>
using std::ostream;

#include "Time.h"
#include "Sensor.h"
#include "DataRecorder.h"

namespace Project2
{
    class MonitoringSystem
    {
    public:
        MonitoringSystem(ostream &out);
        void addSensor(Sensor *s);
        void takeReading(const Time &t);
    private:
    DataRecorder recorder;
    Sensor *sensors[10];
        
    };
} // namespace Project2

#endif