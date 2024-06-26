#include <iostream>
#include <iomanip>
#include "Datetime.h"
#include "time.h"

using std::cout;

DateTime :: DateTime(int d, int m, int y, int hr, int min, int sec)
{
	setDateTime(d,m,y,hr,min,sec);
	
}

void DateTime :: setDateTime (int &y, int &m, int &d, int &hr, int &min, int &sec)
{
	day=d;
	year=y;
	mounth=m;
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
	if(day >= 1 && day<32 && mounth >= 1 && mounth <= 12 && year >=1 && year <= 9999)
        cout<<(day <=9 ? "0" : "")<<day<<"."<<(mounth <=9 ? "0" : "")<<mounth<<"."<<year;
        
	
}
