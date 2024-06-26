#ifndef Datetime_h
#define Datetime_h
#include "time.h"
#include <iostream>

class DateTime : public Time
{
    public: DateTime(int =0, int = 0 , int = 0, int = 0 , int = 0, int= 0);
            void setDateTime(int &, int &, int &, int &, int &, int &);
            void Afisare();
            
            
    private:
    		int ywear;
    		int mounth;
    		int day;
};


#endif 
