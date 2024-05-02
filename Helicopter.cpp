#include "AirCraft.h"
#include "Helicopter.h"

Helicopter::Helicopter(){
    weight = 5000;
    name = "helicopter";
}

Helicopter::Helicopter(int weight, string name){
    this-> weight =weight;
    this-> name = name;
}

void Helicopter::fly(int headwind, int minutes){
    int fuelhold = fuel;
    if (headwind > 40 && weight > 5670){
        fuelhold = ((fuel-(0.4*minutes))-(fuel-(0.01*(weight-5670)*minutes)));
    }
    else if (headwind > 40 && weight < 5670){
        fuelhold = (fuel-(0.4*minutes));
    }
    else if (headwind < 40 && weight >5670){
        fuelhold = ((fuel-(0.2*minutes))-(fuel-(0.01*(weight-5670)*minutes)));
    }
    else{
        fuelhold = (fuel-(0.2*minutes));
    }
    if (fuelhold < 20){
        cout<< "Sorry you do not have enough fuel to fly" << endl;
    }
    else{
        fuel = fuelhold;
        numberOfFlights += 1;
    }
}

string Helicopter::get_name(){
    return name;
}

void Helicopter::set_name(string name){
    this-> name = name;   
}