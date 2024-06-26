#ifndef KITCHEN_H
#define KITCHEN_H

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <vector>

#include "IRoom.h"
#include "ISensor.h"
#include "Temperature.h"
#include "Humidity.h"
#include "Pressure.h"

using namespace std;

class Kitchen : public IRoom
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
