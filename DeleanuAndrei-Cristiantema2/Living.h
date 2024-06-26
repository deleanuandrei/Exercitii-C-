#ifndef LIVING_H
#define LIVING_H

#include <iostream>
#include <vector>
#include <fstream>

#include "IRoom.h"
#include "ISensor.h"
#include "Temperature.h"
#include "Pressure.h"
#include "Humidity.h"

using namespace std;

class Living : public IRoom
{
    public:
        void createRoom();
        void readRoom();
        void updateRoom();
        void deleteRoom();

    private:
        vector<ISensor*> sensors;
};
#endif

