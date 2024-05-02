#include "AirCraft.h"

AirCraft::AirCraft(){
    weight = 10000;
    fuel = 100.0;
    numberOfFlights = 0;
}

AirCraft::AirCraft(int weight){
    this->weight = weight;
    fuel = 100.0;
    numberOfFlights = 0;
}

void AirCraft::fly(int headwind, int minutes){
    numberOfFlights += 1;
}

void AirCraft::refuel(){
    fuel = 100.0;
}

int AirCraft::get_weight(){
    return weight;
}

void AirCraft::set_weight(int weight){
    this->weight = weight;
}

float AirCraft::get_fuel(){
    return fuel;
}

void AirCraft::set_fuel(float fuel){
    this->fuel=fuel;
}

int AirCraft::get_numberOfFlights(){
    return numberOfFlights;
}

void AirCraft::set_numberOfFlights(int numberOfFlights){
    this->numberOfFlights = numberOfFlights;
}