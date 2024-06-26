#include <iostream>
#include "DateAndTime.h"

using namespace std;

int main()
{
	DateAndTime t1(31, 12, 2019, 23, 59, 59),
				t2(24, 3, 2020, 7, 12, 8),
				t3(21, 12, 2021, 23, 59, 59),
				t4(19, 3, 2020, 20, 11, 29),
                t5(38, 13, 2021, 24, 52, 58);
                
    char r='d';
    
    cout<<"Data introdusa este : ";
    
    t2.AfisareInitiala();
    cout<<endl;
    t2.Tick();
    cout<< "Data dupa incrementara secundelor: ";
    t2.Afisare();
    
    cout<<endl<<endl;
    
    cout<<"Data introdusa :";
    t3.AfisareInitiala();
    cout<<endl;
    t3.Tick();
    cout<<"dupa.....";
    t3.Afisare();
    
    cout<<endl<<endl;
    
    cout<<"data introdusa este: ";
    t4.AfisareInitiala();
    cout<<endl;
    t4.Tick();
    cout<<"dupa....";
    t4.Afisare();
    
    cout<<endl<<endl;
    
    cout<<"data introdusa este: ";
    t5.AfisareInitiala();
    cout<<endl;
    t5.Tick();
    cout<<"dupa....";
    t5.Afisare();
    
    cout<<endl<<endl<<endl;
    
     t1.AfisareInitiala();
    cout<<endl;
    t1.Tick();
    cout<<"data dupa incrementarea secundelor: ";
   while(r=='d')
   {
   		 cout<<"Apasati 'd' pentru ca continua sau 'n' pentru a iesi: "; cin>>r;
        t1.Tick();
        cout<<"Data dupa incrementarea secundelor: ";
        t1.Afisare();
        cout<<endl<<endl;
    }
   if (r=='n')
    cout<<"incrementarea secundelor s-a incheiat. ";
    
  	return 0;
}

