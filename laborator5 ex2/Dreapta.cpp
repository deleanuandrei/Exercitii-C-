#include <iostream>
#include "punct.h"
#include "Dreapta.h"
using namespace std;

Dreapta :: Dreapta(float x1_x, float x1_y,float x2_x,float x2_y)
{
    p1.setX(x1_x);
    p1.setY(x1_y);
    p2.setX(x2_x);
    p2.setY(x2_y);
}

void Dreapta :: setP(Punct P_1, Punct P_2)
{
	p1=P_1;
    p2=P_2;
}
void Dreapta :: Afisare()
{

  cout<<"Dreapta de coordonate A("<<p1.getX()<<" , "<<p1.getY()<<") "<<"si dreapta B("<<p2.getX()<<" , "<<p2.getY()<<")";

}



		


