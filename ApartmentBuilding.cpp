#include <iostream>
#include "Unit.h"
#include "ApartmentBuilding.h"

ApartmentBuilding::ApartmentBuilding(){
    int number_of_aps = 0;
    int capacity = 10;
}
ApartmentBuilding::ApartmentBuilding(int capacity)
{
    this->capacity = capacity;
    
}

int ApartmentBuilding::get_Capacity(){
    return capacity;
}
// int ApartmentBuilding::get_Current_Number_of_Units(){

// }
// bool ApartmentBuilding::add_Unit(Unit unit){
//     if currentUnits
// }