#include <iostream>
#include <iomanip>
#include "DateTime.h"

using namespace std;

DateTime :: DateTime(int d, int m, int y, int hr, int min, int sec): Time(hr, min, sec)
{
    setDate(d, m , y);
}

void DateTime :: setDate(int d, int m, int y)
{
    day = d;
    year = y;
    month = m;
}

ostream& operator << (ostream& os, const DateTime & dt)
{
	os << (dt.day <=9 ? "0" : "") << dt.day<<"." << (dt.month <=9 ? "0" : "") << dt.month<<"." << dt.year;
    return os;
}
