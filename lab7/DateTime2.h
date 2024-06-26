#include "time2.h"
#include <iostream>


#ifndef Datetime_h
#define Datetime_h


class DateTime : public Time
{
    public: DateTime(int =0, int = 0 , int = 0, int = 0 , int = 0, int= 0);
            void setDateTime(int , int , int , int , int , int );
            void Afisare();
            
            
    private:
    		int year;
    		int month;
    		int day;
};


#endif 
