#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;
class Time
{
public:
    Time(int = 0, int = 0, int = 0); 
    void setTime(int, int, int); 
    friend ostream& operator<<(ostream& os, const Time& t);
    
protected:
    int hour;
    int minute;
    int second;
};
#endif
