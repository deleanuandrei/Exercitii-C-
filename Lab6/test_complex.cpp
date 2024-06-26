#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
 	Complex n1(2,4);
 	Complex n2(1,-4);
 	Complex n3(0,0);
 	Complex n4(0,0);
 	n3 = n1+n2;
 	cout<<"Adunarea a doua numere complexe: " << n3.getReal() << ";" << n3.getImaginar() << endl;
 	
 	n4=n1*n2;
 	cout<<"inmultirea: "<<n4.getReal()<<";"<<n4.getImaginar()<<endl;
 	
 	n3=!n1;
 	n4=!n2;
 	cout<<"Conjugate: ";
    cout<<n3<<" "<<n4;
    
 	return 0;
}

