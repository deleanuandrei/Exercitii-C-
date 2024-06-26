#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <iomanip>
using namespace std;

#include "punct.h"

class cerc : public punct 
{  
  public:    
  		friend ostream& operator<<(ostream&, const cerc&);    
		cerc(double r = 0.0, int x = 0, int y = 0);    
		void setRadius(double);  
		double getRadius() const; 
		double aria() const;  
  protected:    
  		double raza;
};
#endif
