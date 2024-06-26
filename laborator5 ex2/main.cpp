#include <iostream>
#include "punct.h"
#include "Dreapta.h"

using namespace std;

int main()
{
	Punct p1(2.2,7), p2(12,15);
		
	Dreapta d(2,7,12,15);
	cout<<"afisarea coordanatelor ";
	d.Afisare();
	cout<<endl<<endl;
	
	float a,b;
	
	cout<<"schimbam coordonatele punctelor"<<endl;
	cout<<"dam valori pentru x (A): "; cin>>a;
	cout<<"dam valori pentru y (A): "; cin>>b;
	p1.setX(a);
	p1.setY(b);
	
	cout<<"dam valori pentru x(B): ";cin>>a;
	cout<<"dam valori pentru y(B): ";cin>>b;
	p2.setX(a);
	p2.setY(b);
	
	cout<<"punctul P1 are noile coordanete: "<<p1.getX()<<" , "<<p1.getY()<<endl;
	cout<<"punctul p2 are noile coordanete: "<<p2.getX()<<" , "<<p2.getY();
	cout<<endl<<endl;
	
	d.setP(p1, p2);
    d.Afisare();
	
	 return 0;
			
}
