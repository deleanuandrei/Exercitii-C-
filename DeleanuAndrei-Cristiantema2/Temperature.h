#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include "ISensor.h"

#define MAXIM 100

class Temperature : public ISensor
{
    public:
        double readSensor();
    private:
        double generateTemperature();
};
#endif
