#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <unistd.h>
#include <ctime>


using namespace std;

class Vehicle
{
protected:
    time_t timeOfEntry;
    int ID;
public:
    Vehicle();
    Vehicle(int ID);
    int getID();
    int setID(int ID);
    int getParkingDuration();

};




#endif