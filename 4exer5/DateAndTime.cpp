#include <iostream>
#include "DateAndTime.h"

using namespace std;

DateAndTime :: DateAndTime(int d, int m, int y, int hr, int min, int sec)
{
    setDateAndTime(y, m, d, hr, min, sec);
}
void DateAndTime:: setDateAndTime(int &y, int &m,int &d,int &hr,int &min,int &sec)
{
	day=d;
	month=m;
	year=y;
	hour=hr;
	minute=min;
	second=sec;
}
void DateAndTime::AfisareInitiala()
{
	cout<<(day <= 9 ? "0" :" ")<<day<<"/"<<(month<=9 ? "0" : " ")<<month<<"/"<<year<<"--------------"<<(hour <= 10 ? "0" : " ")
	<<hour<<":"<<(minute <= 10 ? "0" : " ")<<minute<<":"<<(second <= 10 ? "0" : " ")<<second;
}
void DateAndTime :: Afisare()
{
    if(day >= 1 && day<32 && month >= 1 && month <= 12 && year >=1 && year <= 9999 && hour <=23 && minute <=59 && second <=59)
        cout<<(day <=9 ? "0" : "")<<day<<"/"<<(month <=9 ? "0" : "")<<month<<"/"<<year<<" ---------- "<<(hour<10 ? "0" : "")
        <<hour<<":"<<(minute<10 ? "0" : "")<<minute<<":"<<(second<10 ? "0" : "")<<second;
    else
        cout<<"Data invalida.";
}
void DateAndTime::Tick()
{
	 if(second == 59 )
    {
        if(minute == 59)
		{
            if (hour == 23)
            {
                minute=0; second=0; hour=0;
                if(month==12 && day==31)
				{
                    year++;
                    month=1;
                    day=1;
                }
                else
				{
                    if(day<31)
                        day++;
                    else
                        month++;
                }
            }
        }
    }
    if(second<59)
    	second ++;
    else
	{
    		if(second ==59 && minute<=59)
    		{
    			minute++;
    			second=0;
		}
	}	
		
}


