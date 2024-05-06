#include <iostream>
using std::ostream;

#include "Time.h"

namespace Project2
{
    Time::Time(int hours, int minutes, int seconds) : seconds(hours * 3600 + minutes * 60 + seconds)
    {
    }

    int Time::getTotalTimeAsSeconds() const
    {
        return seconds;
    }
    Time& Time::operator+=(const Time &rhs)
    {
        this->seconds += rhs.seconds;
        return *this;
    }
    ostream &operator<<(ostream &os, const Time &rhs)
    {
        int totalSeconds = rhs.getTotalTimeAsSeconds();
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;

        os << hours << "h:" << minutes << "m:" << seconds << "s";
        return os;
    }
}