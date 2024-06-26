#ifndef PRESSURE_H
#define PRESSURE_H

#include "ISensor.h"

#define MAXIM 900

using namespace std;

class Pressure : public ISensor
{
    public:
        double readSensor();
    private:
        double generatePressure();
};
#endif

