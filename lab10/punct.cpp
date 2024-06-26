#include <iostream>
#include "punct.h"
punct::punct(int a, int b)
   { setPoint(a, b); }
   
void punct::setPoint(int a, int b)
   {  x = a;  y = b;}
   
ostream& operator<<(ostream& output, const punct& p)
{  
   output << " [ " << p.x << ", " << p.y << " ] ";  
   
   return output; 
}

double punct:: aria() const
{
	
}
