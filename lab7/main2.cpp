#include <iostream>
using namespace std;

#include "Datetime2.h"
#include "time2.h" 


int main()
{
	Time t;
    t.setTime(20, 30, 10);
    DateTime d(22, 4, 2021, 4, 55, 10);
    cout<<"Afisare obiect din clasa Time"<<endl;
    t.printShort();
    cout<<endl;
    cout<<"Afisare obiect din clasa DateTime";
    d.Afisare();
	
	return 0;
}
