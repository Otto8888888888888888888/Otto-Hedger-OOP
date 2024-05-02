#include "AirCraft.h"
#include "Helicopter.h"

int main(){
    Helicopter heli1(5670, "Copter");
    cout << heli1.get_fuel() << endl;
    heli1.fly(30,20);

    cout << heli1.get_fuel() << endl;
}