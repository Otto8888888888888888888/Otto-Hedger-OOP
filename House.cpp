#include <iostream>

#include "House.h"

House::House(){
    
    numAppliances = 3;
    quantity = 0;
}

House::House(int numAppliances){
    this -> numAppliances = numAppliances;
    quantity = 0;
    appliances = new Appliance*[numAppliances];    
    std::cout << "Current quantity: " << quantity << ", numAppliances: " << numAppliances << std::endl;

}

bool House::addAppliance(Appliance* appliance) {
    if (quantity < numAppliances) {
        appliances[quantity] = appliance;
        quantity++;
        return true;
    } else {
        return false;
    }
}


double House::getTotalPowerConsumption(){
    double totalPower = 0.0;
    for (int i=0; i<numAppliances; i++){
        totalPower += (appliances[i]->getPowerConsumption());
    }
    std::cout << "Current quantity: " << quantity << ", numAppliances: " << numAppliances << std::endl;


    return totalPower;
}
