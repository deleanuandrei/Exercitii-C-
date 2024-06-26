#include <iostream>

#include "Temperature.h"

using namespace std;

double Temperature::generateTemperature()
{
    double T;
    T = rand() % MAXIM;
    return T;
}
double Temperature::readSensor()
{
    return generateTemperature();
}

