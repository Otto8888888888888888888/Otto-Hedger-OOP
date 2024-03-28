#include "Unit.h"
#include <iostream>


int get_Num_Bedrooms(Unit){
    return(Unit.num_beds);
}

int get_Value(Unit){
    return(Unit.unit_val);
}
double get_Area(Unit){
    return(Unit.unit_size);
}