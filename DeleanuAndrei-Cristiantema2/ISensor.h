#ifndef ISENSOR_H
#define ISENSOR_H

using namespace std;

class ISensor
{
    public:
        virtual double readSensor() = 0;
};
#endif
