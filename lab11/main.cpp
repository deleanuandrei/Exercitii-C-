#include <iostream>

using namespace std;

#include "queue.h"
int main()
{
    Queue<double> doubleQueue(8);
    double n = 1.7;
    cout << "Inserarea elementelor in doubleQueue\n";
    while(doubleQueue.Inserare(n))
    {
        cout << n << ' ';
        n += 1.0;
    }
    cout << endl << "Eliminarea elementelor incepand cu primul" << endl;
    string r;
    cout << "Doriti sa eliminati cate un element ?: "; cin >> r;
    if(r=="da"){
        while(doubleQueue.Eliminare(n) && r=="da"){
            cout << "S-a eliminat elementul: " << n << endl;
            cout << "Doriti sa eliminati cate un element ?: "; cin >> r;
            if(r!="da"){
                cout << "In doubleQueue au mai ramas urmatoarele elemente: ";
                doubleQueue.Afisare();
            }
        }
    }
    else{
        cout << "In doubleQueue sunt urmatoarele elemente: ";
        doubleQueue.Afisare();
    }
doubleQueue.Inserare(9.54);
doubleQueue.Eliminare(n);
            cout << "S-a eliminat elementul: " << n << endl;

    return 0;
}
