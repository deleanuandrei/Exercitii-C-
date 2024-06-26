#ifndef BATHROOM_H
#define BATHROOM_H


#include <iostream>
#include <vector>
#include <fstream>
#include <stdio.h>



#include "ISensor.h"
#include "IRoom.h"
#include "Pressure.h"
#include "Humidity.h"
#include "Temperature.h"


using namespace std;

class Bathroom : public IRoom
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

