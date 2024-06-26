#ifndef IROOM_H
#define IROOM_H

using namespace std;

class IRoom
{
    public:
        virtual void createRoom() = 0;
        virtual void readRoom() = 0;
        virtual void updateRoom() = 0;
        virtual void deleteRoom() = 0;
};
#endif
