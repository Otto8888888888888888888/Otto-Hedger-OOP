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
    number_of_aps +=1;
}

int ApartmentBuilding::get_Capacity(){
    return capacity;
}
int ApartmentBuilding::get_Current_Number_of_Units(){
    return number_of_aps;
}
bool ApartmentBuilding::add_Unit(Unit unit){
    if (number_of_aps < capacity ){
        this->capacity = capacity;
        number_of_aps +=1;
        return true;
    }
    else{
        return false;
    }
}
Unit * ApartmentBuilding::get_Capacity(){
    return units;
}

ApartmentBuilding ~ApartmentBuilding(){
    delete ApartmentBuilding;
}