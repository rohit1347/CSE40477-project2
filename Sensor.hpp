#ifndef SENSOR_HPP
#define SENSOR_HPP

#include <string>
using std::string;

#include "Time.hpp"
#include "Signal.hpp"
#include "DataRecorder.hpp"

namespace RohitKumar
{
    class Sensor
    {
        public:
        Sensor(string name, Signal& source);
        void takeReading(Time t, DataRecorder& recorder) const;
    protected:
        virtual string getUnits() const;
        string getName() const;
        Signal& getSource() const;
    private:
        string name;
        Signal& source;
    };

}

#endif