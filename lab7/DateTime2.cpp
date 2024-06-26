#include <iostream>
using namespace std;

#include <iomanip>
#include "Datetime2.h"



DateTime :: DateTime(int d, int m, int y, int hr, int min, int sec)
{
	setDateTime(d,m,y,hr,min,sec);
	
}

void DateTime :: setDateTime (int y, int m, int d, int hr, int min, int sec)
{
	day=d;
	year=y;
	month=m;
	hour=hr;
	minute=min;
	second=sec;
}

void DateTime :: Afisare()
{
	cout<<endl;
	Time :: printShort();
	cout<<endl;
	cout<<"Afisare : ";
	if(day >= 1 && day<32 && month >= 1 && month <= 12 && year >=1 && year <= 9999)
        cout<<(day <=9 ? "0" : "")<<day<<"."<<(month <=9 ? "0" : "")<<month<<"."<<year;
        
	
}
