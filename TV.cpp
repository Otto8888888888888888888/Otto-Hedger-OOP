#include "Appliance.h"
#include "TV.h"

TV::TV(){
    powerRating = 0;
    isOn = false;
    screensize = 1;
}

TV::TV(int powerRating, double screensize){
    this->powerRating = powerRating;
    this->screensize = screensize;  
}

void TV::setScreenSize(double screensize){
    this->screensize = screensize;
}

double TV ::getScreenSize(){
    return screensize;
}

double TV::getPowerConsumption(){
    double powerConsumpt = (powerRating*(screensize/10));
    return powerConsumpt;   
}