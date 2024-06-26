#include <iostream>

#include "Humidity.h"

using namespace std;

double Humidity::generateHumidity()
{
    double H;
    H = rand() % MAXIM;
    return H;
}
double Humidity::readSensor()
{
    return generateHumidity();
}

