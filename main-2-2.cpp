#include <iostream>
#include "Appliance.h"
#include "TV.h"

int main(){
    TV myTv(500, 43.2);

    std::cout << "Initial Power Rating: " << myTv.get_powerRating() << " watts" << std::endl;
    std::cout << "Initial screen size: " << myTv.getScreenSize() << " inches" << std::endl;

    myTv.setScreenSize(300);
    std::cout << "Updated screen size: " << myTv.getScreenSize() << " inches" << std::endl;

    myTv.turnOn();

    double powerConsumption = myTv.getPowerConsumption();
    std::cout << "Power Consumption: " << powerConsumption << " kWh per day" << std::endl;

    myTv.turnOff();

    return 0;
}

