#include "Appliance.h"

Appliance::Appliance(){
    powerRating = 0;
    isOn = false;
}

Appliance::Appliance(int powerRating){
    this->powerRating = powerRating;
}

void Appliance::turnOn(){
    isOn = true;
}
void Appliance::turnOff(){
    isOn = false;
}

double Appliance::getPowerConsumption(){
    return 0;
}

int Appliance::get_powerRating(){
    return powerRating;
}

void Appliance::set_powerRating(int powerRating){
    this->powerRating = powerRating;
}

