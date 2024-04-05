#include <iostream>
#include "ParkingLot.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"

int main() {
    int parkingLotCapacity = 10;
    ParkingLot ParkingLot(parkingLotCapacity);
    int maxParkingDuration = 15;
    while (ParkingLot.getCount() < parkingLotCapacity) {
        cout << "Enter the type of vehicle you want to park (1: Bus, 2: Car, 3: Motorbike): ";
        int choice;
        cin >> choice;

        int vehicleID;
        cout << "Enter the ID for the vehicle: ";
        cin >> vehicleID;

        Vehicle* vehicle;
        switch (choice) {
            case 1:
                vehicle = new Bus(vehicleID);
                break;
            case 2:
                vehicle = new Car(vehicleID);
                break;
            case 3:
                vehicle = new Motorbike(vehicleID);
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                continue;
        }

        ParkingLot.parkVehicle(vehicle);
    }
    cout << ParkingLot.countOverstayingVehicles(maxParkingDuration) << endl;
}