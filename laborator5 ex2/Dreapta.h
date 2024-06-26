#ifndef Dreapta_H
#define Dreapta_H
#include "punct.h"
class Dreapta{
	public: Dreapta(float, float,float,float);
    	    void setP(Punct, Punct);
        	void Afisare();
	private:
    		Punct p1;
    		Punct p2;
};
#endif  
