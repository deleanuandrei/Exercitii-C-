#include <iostream>
#include <string.h>
#include "Datetime.h"
#include "time.h" 

using std::cout;

int main()
{
	Time t;
    t.setTime(20, 30, 10);
    DateTime d(22, 4, 2021, 4, 55, 10);
    cout<<"Afisare obiect din clasa Time";
    t.printShort();
    cout<<"Afisare obiect din clasa DateTime";
    d.Afisare();
	
	return 0;
}
