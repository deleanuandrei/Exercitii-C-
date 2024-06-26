#include <iostream>
#include <stdlib.h>

using std::cout;
using std::endl;
class Time
{
 public:
 Time(); 
 void setHour(int);
 void setMinute(int);
 void setSecond(int); 
 void printShort(); 
 void printLong (); 
 int getHour();
 int getMinute();
 int getSecond();
 private:
 int hour; 
 int minute; 
 int second; 

};
Time::Time()
{
 hour = minute = second = 0;
 cout << "S-a rulat constructorul clasei Time" << endl;

}
void Time::setHour(int h)
{
 hour = (h >= 0 && h < 24) ? h : 0;


}
void Time::setMinute(int m)
{
	minute = (m >= 0 && m < 60) ? m : 0;
	

}
void Time::setSecond (int s)
{
	second = (s >= 0 && s < 60) ? s : 0;


}
int Time::getHour()
{
	return hour;
}
int Time::getMinute()
{
	return minute;
}
int Time::getSecond()
{
	return second;
}
void Time::printShort()
{
 cout << (hour < 10 ? "0" : "") << hour << ":"
 << (minute < 10 ? "0" : "") << minute;
}
void Time::printLong()
{
 cout << ((hour == 0 || hour == 12) ? 12 : hour % 12)
 << ":" << (minute < 10 ? "0" : "") << minute
 << ":" << (second < 10 ? "0" : "") << second
 << (hour < 12 ? " AM" : " PM");
}
int main()
{
 Time t; 
 cout << "Valoarea initialia in format scurt este ";
 t.printShort();
 cout << "\nValoarea initialia in format lung este ";
 t.printLong();
 t.setHour(13);
 cout <<t.getHour();
 t.setMinute(27);
 cout <<t.getMinute();
 t.setSecond(6);
 cout<<t.getSecond();
 cout << "\n\nOra in format scurt dupa setTime este ";
 t.printShort();
 cout << "\nOra in format lung dupa setTime este ";
 t.printLong();
 t.setHour(99);
 cout <<t.getHour();
 t.setMinute(99);
  cout <<t.getMinute();
 t.setSecond(99);
 cout<<t.getSecond();
 cout << "\n\nDupa asignarea valorilor invalide:"
 << "\nOra in format scurt: ";
 t.printShort();
 cout << "\nOra in format lung: ";
 t.printLong();
 cout << endl;
 system("pause");
 return 0;
}

