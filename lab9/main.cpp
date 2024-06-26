#include <iostream>
#include "DateTime.h"
#include "time.h"

using namespace std;

int main()
{
    Time t;
    t.setTime(05, 35, 10);
    DateTime d(22, 4, 2021, 5, 35, 10);
    cout << "Afisare obiect din clasa Time" << endl;
    cout << t;
    cout << endl << endl;
    cout << "Afisare obiect din clasa DateTime" << endl;
    cout << d;
    
    return 0;
}
