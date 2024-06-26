#ifndef HUMIDITY_H
#define HUMIDITY_H

#include "ISensor.h"

#define MAXIM 100

using namespace std;

class Humidity : public ISensor
{
    public:
        double readSensor();
    private:
        double generateHumidity();
};
#endif

