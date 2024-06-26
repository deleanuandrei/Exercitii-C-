#include <iostream>
#include <iomanip>
#include "complex.h"

using std::ostream;
using namespace std;
Complex:: Complex(double r, double i)
{
 	real = r;
 	imaginar = i;
}
void Complex:: setReal(double r)
{
 real = r;
}	
double Complex:: getReal()
{
 	return real;
}
void Complex::setImaginar(double i)
{
 	imaginar = i;
}
double Complex::getImaginar()
{
 	return imaginar;
}
Complex Complex::operator+(Complex c)
{
 	Complex nc;
 	nc.setReal(real+c.real);
 	nc.setImaginar(imaginar+c.imaginar);
 return nc;
}
Complex operator*(Complex c, Complex o)
{
	Complex nc;
	nc.setReal(c.real*o.real-c.imaginar*o.imaginar);
	nc.setImaginar(c.imaginar*o.real+c.real*o.imaginar);
	return nc;
}

Complex Complex::operator!()
{
	return Complex(real,-imaginar);
}


