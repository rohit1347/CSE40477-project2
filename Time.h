#ifndef TIME_H
#define TIME_H

#include <iostream>
using std::ostream;

namespace Project2
{
    class Time
    {
    public:
        Time(int hours, int minutes, int seconds);
        int getTotalTimeAsSeconds() const;
        Time &operator+=(const Time &rhs);
        friend ostream &operator<<(ostream &os, const Time &rhs); // Clarify if the function is supposed to static or a friend function

    private:
        int seconds;
    };
}

#endif // TIME_H