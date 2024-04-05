#include <iostream>
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"

int main() {
    int numBuses, numCars, numMotorbikes;

    cout << "Enter the number of buses: ";
    cin >> numBuses;
    cout << "Enter the number of cars: ";
    cin >> numCars;
    cout << "Enter the number of motorbikes: ";
    cin >> numMotorbikes;

    Vehicle* vehicles[numBuses + numCars + numMotorbikes];

    for (int i = 0; i < numBuses; ++i) {
        int busID;
        cout << "Enter ID for Bus " << i + 1 << ": ";
        cin >> busID;
        vehicles[i] = new Bus(busID);
    }

    for (int i = 0; i < numCars; ++i) {
        int carID;
        cout << "Enter ID for Car " << i + 1 << ": ";
        cin >> carID;
        vehicles[numBuses + i] = new Car(carID);
    }

    for (int i = 0; i < numMotorbikes; ++i) {
        int motorbikeID;
        cout << "Enter ID for Motorbike " << i + 1 << ": ";
        cin >> motorbikeID;
        vehicles[numBuses + numCars + i] = new Motorbike(motorbikeID);
    }

    cout << "Parking Durations:" << std::endl;
    for (int i = 0; i < numBuses + numCars + numMotorbikes; ++i) {
        int duration = vehicles[i]->getParkingDuration();
        std::cout << "Vehicle ID: " << vehicles[i]->getID() << ", Parking Duration: " << duration << " minutes" << std::endl;
    }

    for (int i = 0; i < numBuses + numCars + numMotorbikes; ++i) {
        delete vehicles[i];
    }

    return 0;
}
