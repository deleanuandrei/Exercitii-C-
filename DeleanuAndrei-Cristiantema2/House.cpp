#include <iostream>

#include "house.h"

using namespace std;

void House::addRoom(IRoom &room)
{
    rooms.push_back(&room);
    room.createRoom();
}
void House::removeRoom(int x)
{
    rooms.erase(rooms.begin() + x);
}
void House::collectRoomData()
{
    srand(time(0));
    for(int i = 0;i<rooms.size();i++)
    {
        rooms[i]->updateRoom();
    }
}
void House::viewRoomData()
{
    for(int i = 0;i < rooms.size();i++)
    {
        cout<<"Room ID: " << i <<endl;

        rooms[i]->readRoom();
    }
}

