#include "MonitoringSystem.h"

#include <iostream>
using std::ostream;

namespace Project2
{
    MonitoringSystem::MonitoringSystem(ostream &out)
        : recorder(out)
    {
          for (int i = 0; i < 10; i++)
    {
        sensors[i] = nullptr;
    }
    }
  
    void MonitoringSystem::addSensor(Sensor *s)
    {
        for (int i = 0; i < 10; i++)
        {
            if (sensors[i] == nullptr)
            {
                sensors[i] = s;
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