#include <iostream>
#include "time2.h"

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

void Time :: Tick()
{
    if(hour==23 && second == 59 && minute == 59)
    {
        hour=0; second=0; minute=0;
    }
    else if(hour==11 && second == 59 && minute == 59)
    {
        hour++;
        second=0;
        minute=0;
    }
    if(second == 59 && minute!=59)
	{
        minute++;
        second=0;
    }
}

void Time::printShort()
{
    cout << (hour < 10 ? "0" : "") << hour << ":"
         << (minute < 10 ? "0" : "") << minute;
    //cout<<hour<<" "<<minute;
}
void Time::printLong()
{
    cout << ((hour == 0 || hour == 12) ?
             12 : hour % 12)
         << ":" << (minute < 10 ? "0" : "") << minute
         << ":" << (second < 10 ? "0" : "") << second
         << (hour < 12 ? " AM" : " PM");
         cout<<endl;
         cout<<hour<<" "<<minute<<" "<<second;
}
Time::Time (int m,int s)
{
    minute=m;
    second=s;
    hour=0;
}    
Time::Time ( int s)
    {
        second=s;
        minute=0;
        hour=0;
}


