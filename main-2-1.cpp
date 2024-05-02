#include <iostream>
#include "Appliance.h"
#include "Fridge.h"


int main() {
    Fridge myFridge(500, 250); 

    std::cout << "Initial Power Rating: " << myFridge.get_powerRating() << " watts" << std::endl;
    std::cout << "Initial Volume: " << myFridge.getVolume() << " liters" << std::endl;

    myFridge.setVolume(300);
    std::cout << "Updated Volume: " << myFridge.getVolume() << " liters" << std::endl;

    myFridge.turnOn();

    double powerConsumption = myFridge.getPowerConsumption();
    std::cout << "Power Consumption: " << powerConsumption << " kWh per day" << std::endl;

    myFridge.turnOff();

    return 0;
}
