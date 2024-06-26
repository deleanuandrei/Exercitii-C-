#include <iostream>
#include "time.h"

using namespace std;

Time::Time(int h, int m, int s)
{
    setTime(h, m, s);
}

void Time::setTime(int h, int m, int s)
{
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}

ostream& operator<<(ostream& os, const Time& t)
{
	os << "Ora: " << t.hour << endl << "Minutul: " << t.minute;
	os << endl << "Secunda: " << t.second;
    return os;
}
