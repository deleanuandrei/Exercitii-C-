#include <iostream>
#include <iomanip>
using std::ostream;

#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
 	public:
 		Complex(double=0, double=0);
 		void setReal(double);
 		double getReal();
 		void setImaginar(double);
 		double getImaginar();
 		Complex operator+(Complex);
 		friend Complex operator*(Complex, Complex);
 		Complex operator!();
 	private:
 		double real;
 		double imaginar;
};
#endif
