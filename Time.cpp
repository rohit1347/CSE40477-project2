#include <iostream>
using std::ostream;

#include "Time.hpp"

namespace RohitKumar
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
        os << rhs.getTotalTimeAsSeconds();
        return os;
    }
}