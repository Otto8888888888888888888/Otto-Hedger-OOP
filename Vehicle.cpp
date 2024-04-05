#include "Vehicle.h"


Vehicle::Vehicle(int ID){
    this->ID = ID;
    timeOfEntry = time(NULL);
}

Vehicle::Vehicle(){
    ID = 0;
    timeOfEntry = time(NULL);
}
int Vehicle::getID(){
    return ID;
}
int Vehicle::setID(int ID){
    this->ID = ID;
    return ID;
}
int Vehicle::getParkingDuration(){
    time_t timeNow = time(NULL);
    int time = int((timeNow - timeOfEntry)*0.85);
    return time;
}