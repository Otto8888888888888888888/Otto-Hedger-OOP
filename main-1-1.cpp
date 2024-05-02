#include <iostream>
#include "Appliance.h"

int main(){
    Appliance myAppliance(1000);

    std::cout << "Initial Power Rating: " << myAppliance.get_powerRating() << " watts" << std::endl;

    myAppliance.turnOn();
    std::cout << "Appliance is turned on" << std::endl;

    std::cout << "Power Consumption: " << myAppliance.getPowerConsumption() << " watts" << std::endl;

    myAppliance.turnOff();
    std::cout << "Appliance is turned off" << std::endl;

    return 0;
}