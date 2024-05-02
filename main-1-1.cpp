#include "AirCraft.h"
#include <iostream>

int main(){
    AirCraft plane1(200000);
    std::cout << "Your plane weighs: " plane1.get_weight() << ",  has" << plane1.get_fuel() << "percent fuel left and has flown " << plane1.get_numberOfFlights() << " number of flights." << std::endl;
}
