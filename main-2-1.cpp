#include "AirCraft.h"
#include "Helicopter.h"
#include <string>

int main(){
    Helicopter heli1(5670, "Copter");
    cout << "Fuel : " << heli1.get_fuel() << endl;
    heli1.fly(30,20);

    cout << "Fuel : " << heli1.get_fuel() << endl;
    cout << "Name : " << heli1.get_name() << endl;
    cout << "Weight: " << heli1.get_weight() << endl;
    heli1.refuel();
    cout << "Fuel : " << heli1.get_fuel() << endl;
    heli1.set_weight(6300);
    heli1.fly(430,100);
    cout << "Fuel : " << heli1.get_fuel() << endl;
    cout << "Weight: " << heli1.get_weight() << endl;

}