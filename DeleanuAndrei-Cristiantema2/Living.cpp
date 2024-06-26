#include <iostream>

#include "Living.h"

using namespace std;

void Living::createRoom()
{
    ofstream living("living.txt");

}
void Living::readRoom()
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

        if(index++ == 3)
            index=0;

        cout<<endl;

    }
}
void Living::updateRoom()
{
    sensors.push_back(new Temperature);
    sensors.push_back(new Humidity);
    sensors.push_back(new Pressure);
    ofstream living("living.txt");
    for(int i = 0;i < sensors.size();i++)
    {
        living << sensors[i] -> readSensor() << endl;
    }
    living.close();
}
void Living::deleteRoom()
{
    remove("living.txt");
}
