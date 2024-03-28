#include <iostream>
#include "Unit.h"



int main(){
    Unit unit1;
    unit1 = Unit(100, 2, 3.4);
    std::cout << Unit::get_Num_Bedrooms(unit1) << std::endl;
    std::cout << Unit::get_Value(unit1) << std::endl;
    std::cout << Unit::get_Area(unit1) << std::endl;
    return 0;
}