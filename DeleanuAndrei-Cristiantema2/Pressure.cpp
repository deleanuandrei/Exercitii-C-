#include <iostream>

#include "Pressure.h"

using namespace std;

double Pressure::generatePressure()
{
    double P;
    P = rand() % MAXIM;
    return P;
}
double Pressure::readSensor()
{
    return generatePressure();
}

