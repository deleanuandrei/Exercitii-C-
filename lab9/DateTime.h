#ifndef DateTime_h
#define DateTime_h
#include "time.h"
#include <iostream>

class DateTime : public Time
{
    public:
        DateTime(int = 0, int = 0, int = 0, int = 0, int = 0, int = 0);
        void setDate(int, int, int );
        friend ostream& operator<<(ostream& os, const DateTime& dt);
    
    private:
    	int year;
    	int month;
    	int day;
};

#endif
