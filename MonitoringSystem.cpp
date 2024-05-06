#include "MonitoringSystem.h"

#include <iostream>
using std::ostream;

namespace Project2
{
    MonitoringSystem::MonitoringSystem(ostream &out)
        : recorder(out)
    {
    }

    void MonitoringSystem::addSensor(Sensor *s)  // Change Sensor &s to Sensor *s
    {
        for (int i = 0; i < 10; i++)
        {
            if (sensors[i] == nullptr)
            {
                sensors[i] = s;  // No need to take the address of s anymore
                break;
            }
        }
    }

    void MonitoringSystem::takeReading(const Time &t)
    {
        for (int i = 0; i < 10; i++)
        {
            if (sensors[i] != nullptr)
            {
                sensors[i]->takeReading(t, recorder);
            }
        }
    }
}