#include "ParkingLot.h"
#include <iostream>
ParkingLot::ParkingLot(){
    capacity = 5;
    current = 0;
    vehicles = new Vehicle*[capacity];
}
ParkingLot::ParkingLot(int capacity){
    this->capacity = capacity;
    current = 0;
    vehicles = new Vehicle*[capacity];
}
int ParkingLot::getCount(){
    return current;
}

void ParkingLot::assignID(){
    for (int i=0; i< current; ++i){
        vehicles[i]->setID(i);
    }
}

void ParkingLot::parkVehicle(Vehicle* vehicle){
    if (current < capacity){
        vehicles[current] = vehicle;
        ++current;
    }
    else{
        cout << "The lot is full" << endl;
        return;
    }
}
void ParkingLot::unparkVehicle(int ID){
    for (int i = 0; i< current; ++i){
        if (vehicles[i]->getID() == ID){
            delete vehicles[i];
            vehicles[i] = nullptr;
            for (int j = i; j<(current-1); ++j){
                vehicles[j] = vehicles[j+1];
            }
            --current;
            return;
        }
    }
    cout << "Vehicle not in the lot" << endl;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration){
    int count =0;
    for (int i = 0; i<current; ++i){
        int duration = vehicles[i]->getParkingDuration();
        if (duration > maxParkingDuration){
            ++count;
        }
    }
    return count;
}