#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
private:
    Vehicle** vehicles;
    int capacity;
    int current;

public:
    ParkingLot();
    ParkingLot(int capacity);
    int getCount();
    void assignID();
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int ID);
    int countOverstayingVehicles(int maxParkingDuration);
};

#endif
