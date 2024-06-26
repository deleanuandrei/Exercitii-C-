#ifndef HOUSE_H
#define HOUSE_H

#include <vector>
#include <ctime>


#include "IRoom.h"

using namespace std;

class House
{
    public:
        void addRoom(IRoom&);
        void removeRoom(int);
        void collectRoomData();
        void viewRoomData();
    private:
        vector <IRoom*> rooms;

};
#endif

