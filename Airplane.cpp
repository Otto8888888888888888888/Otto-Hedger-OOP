#include "AirCraft.h"
#include "Airplane.h"

Airplane::Airplane(){
    numPassengers = 0;
}
Airplane::Airplane(int weight, int numPassengers){
    this-> weight =weight;
    this-> numPassengers = numPassengers;
}

void Airplane::reducePassengers(int x){
    numPassengers = numPassengers - x;
    if (numPassengers < 0){
        numPassengers = 0;
    }
}

int Airplane::get_numPassengers(){
    return numPassengers;
}

void Airplane::fly(int headwind, int minutes){
    int fuelhold = fuel;
    if (headwind < 60){
        fuelhold = fuel-(0.3*minutes);
        fuelhold = fuelhold - (0.001*numPassengers*minutes);
    }
    else{
        fuelhold = fuel-(0.5*minutes);
        fuelhold = fuelhold - (0.001*numPassengers*minutes);
    }
    if (fuelhold>20){
        fuel = fuelhold;
        numberOfFlights += 1;
    }
}