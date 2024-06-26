#include <iostream>

#include "Bathroom.h"

using namespace std;

void Bathroom::createRoom()
{
    ofstream bathroom("bathroom.txt");


}
void Bathroom::readRoom()
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
        cout<<endl;

    }
}
void Bathroom::updateRoom()
{
    sensors.push_back(new Temperature);
    sensors.push_back(new Humidity);
    sensors.push_back(new Pressure);
    ofstream bathroom("bathroom.txt");
    for(int i = 0;i < sensors.size();i++)
    {
        bathroom << sensors[i] -> readSensor() << endl;
    }
    bathroom.close();
}
void Bathroom::deleteRoom()
{
    remove("batchroom.txt");
}
