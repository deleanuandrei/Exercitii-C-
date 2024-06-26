#include <iostream>
#include "cerc.h"

cerc::cerc(double r, int a, int b)  : punct(a, b)  
{
	setRadius(r); 
}
   
void cerc::setRadius(double r)
{ 
	raza = (r > 0 ? r : 0); 
}
  
double cerc::getRadius() const  
{ 
return raza; 
}
double cerc::aria() const  
{ 
	return 3.14159 * raza * raza; 
}
ostream& operator<<(ostream& output, const cerc& c)
{  
  output << "Centrul = " << c.x<< c.y<< "; Raza = " << setiosflags(ios::fixed | ios::showpoint) << setprecision(2) << c.raza; 
   
  return output;
}
