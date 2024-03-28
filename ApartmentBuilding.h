
#include <iostream>
#include "Unit.h"

#ifndef APARTMENTBUILDING_H
#define APARTMENTBUILDING_H
class ApartmentBuilding
{
private:
    const static int capacity;
    Unit units[capacity];
    int number_of_aps;
public:
    ApartmentBuilding();
    ApartmentBuilding(int capacity);
    int get_Capacity();
    int get_Current_Number_of_Units();
    Unit * get_Contents();
    bool add_Unit(Unit unit);
    ~ApartmentBuilding();
};


#endif