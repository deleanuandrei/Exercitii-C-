#ifndef CILINDRU_H
#define CILINDRU_H

#include <iostream>
using namespace std;
#include "cerc.h"

class cilindru : public cerc
{  
  friend ostream& operator<<(ostream&, const cilindru&);  
  public:      
		cilindru(double =0 , double =0, int =0, int =0);     
		void setHeight(double);       
		double getHeight() const;      
		double aria() const;     
		double volum() const;   
   	protected:    
	   		double height; 
};
#endif
