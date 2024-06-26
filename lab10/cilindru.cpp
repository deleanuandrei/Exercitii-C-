#include <iostream>
#include "cilindru.h"
cilindru::cilindru(double h, double r, int x, int y)  : cerc(r, x, y)  
{ 
	setHeight(h); 
}
  
void cilindru::setHeight(double h) 
{ 
	height = (h >= 0 ? h : 0); 
}
  
double cilindru::getHeight() const 
{ return height; }
  
double cilindru::aria() const
{  
  return 2 * cerc::aria() + 2 * 3.14159 * raza * height;
}

double cilindru::volum() const  
{
	return cerc::aria() * height; 
}
  
ostream& operator<<(ostream& output, const cilindru& c)
{  
  output<< c.x<< c.y        
         << "; Inaltimea = " << c.height;  
  return output;
}
