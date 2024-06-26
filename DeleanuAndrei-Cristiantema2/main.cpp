#include <iostream>

#include "ISensor.h"
#include "Kitchen.h"
#include "Living.h"
#include "Bedroom.h"
#include "IRoom.h"
#include "house.h"
#include "Temperature.h"
#include "Bathroom.h"

using namespace std;

int main()
{
    srand(time(NULL));
    House casa;
    Bedroom dormitor;
    Living sufragerie;
    Bathroom baie;
    Kitchen bucatarie;
    casa.addRoom(dormitor);
    casa.addRoom(sufragerie);
    casa.addRoom(baie);
    casa.addRoom(bucatarie);
    casa.collectRoomData();
    casa.viewRoomData();
    return 0;
}
