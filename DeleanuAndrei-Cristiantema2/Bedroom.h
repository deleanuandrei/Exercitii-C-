#ifndef BEDROOM_H
#define BEDROOM_H


#include <iostream>
#include <fstream>
#include <vector>
#include <stdio.h>

#include "ISensor.h"
#include "Temperature.h"
#include "Humidity.h"
#include "IRoom.h"
#include "Pressure.h"

using namespace std;

class Bedroom : public IRoom
{
    public:
        void createRoom();
        void readRoom();
        void updateRoom();
        void deleteRoom();
    private:
        vector<ISensor*>sensors;
};
#endif

