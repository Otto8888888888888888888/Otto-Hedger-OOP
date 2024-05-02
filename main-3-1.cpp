#include <iostream>
#include "Appliance.h"
#include "House.h"
#include "Fridge.h"
#include "TV.h"

int main(){
    House myHouse(3);

    Fridge* fridge = new Fridge(500, 250); 
    TV* tv1 = new TV(100, 50);
    TV* tv2 = new TV(130,23);
    
    if (myHouse.addAppliance(fridge) == true){
        std::cout << "Fridge added to the house." << std::endl;
    }
    else{
        std::cout << "There is no room to add fridge  to the house." << std::endl;

    }
    if (myHouse.addAppliance(tv1) == true){
        std::cout << "First TV added to the house." << std::endl;
    }
    else{
        std::cout << "There is no room to add TV  to the house." << std::endl;
    }
    if (myHouse.addAppliance(tv2) == true){
        std::cout << "Second TV added to the house." << std::endl;
    }
    else{
        std::cout << "There is no room to add TV  to the house." << std::endl;
    }
    double totalPower = myHouse.getTotalPowerConsumption();
    std::cout << "Total power consumption of the house: " << totalPower << " watts" << std::endl;


    
}