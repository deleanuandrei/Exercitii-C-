#include <iostream>
#include <math.h>


using namespace std;
int main(){
int baza10, x0, x1, x2, x3, x4;
cout << "prima cifra in baza 2 ";cin >>x4;

cout << "a doua cifra in baza 2";cin >>x3;

cout << "a treia cifra in baza 2";cin >>x2;

cout << "a patra cifra in baza 2";cin >>x1;

cout << "a cincea cifra  in baza 2" << endl;cin >>x0;

baza10=pow(2, 4)*x4+pow(2, 3)*x3+pow(2, 2)*x2+pow(2, 1)*x1+pow(2, 0)*x0;

cout <<"Numarul in baza 10 este= "<<baza10;


return 0;
}
