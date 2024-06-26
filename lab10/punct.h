#ifndef PUNCT_H
#define PUNCT_H

#include <iostream>
using namespace std;

class punct
{  
   
   public:    
	    friend ostream& operator<<(ostream&, const punct&); 
	    punct(int , int );    
		void setPoint(int, int);   
		int getX() const { return x; }     
		int getY() const { return y; } 
		virtual double aria() const = 0;
	  
   protected:    
	    int x, y;
};
#endif
