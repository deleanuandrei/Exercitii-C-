#include <iostream>

#include "Kitchen.h"

using namespace std;

void Kitchen::createRoom()
{
    ofstream kitchen("kitchen.txt");
}
void Kitchen::readRoom()
{


    int index=0;
    cout<< "Sensor ID\tSensor Type\tValue Registered" << endl;
    for(int i =0 ;i<sensors.size();i++)
    {
        cout<<i<<"\t\t";
        if(index==0)
        {
            cout<<"Temperature\t";
            index++;

        }
        else
            if(index==1)
        {
            cout<<"Humidity\t";
            index++;
        }

        else
        {
            cout<<"Pressure\t";
            index++;
        }

        cout<<sensors[i]->readSensor();
        index=0;

         if(index==0)
        {
            cout<<"C\t";
            index++;

        }
        else
            if(index==1)
            {
                cout<<"%\t";
                index++;
            }
            else
            {
                cout<<"hPa\t";
                index++;
            }

        if(++index == 3)
            index=0;

        cout<<endl;

    }
}
void Kitchen::updateRoom()
{
    sensors.push_back(new Temperature);
    sensors.push_back(new Humidity);
    sensors.push_back(new Pressure);
    ofstream kitchen("kitchen.txt");
    for(int i = 0;i < sensors.size();i++)
    {
        kitchen << sensors[i] -> readSensor() << endl;
    }
    kitchen.close();

}
void Kitchen::deleteRoom()
{
    remove("kitchen.txt");
}
