#include "AirCraft.h"
#include "Helicopter.h"
#include "Airplane.h"
#include <string>

int main(){
    Airplane plane1(5670, 200);


    cout << "Plane Fuel : " << plane1.get_fuel() << endl;
    plane1.fly(30,120);
    cout << "Plane Fuel : " << plane1.get_fuel() << endl;
    plane1.refuel();
    plane1.reducePassengers(50);
    cout << "how many passengers " << plane1.get_numPassengers() << endl;
    plane1.fly(30,120);
    cout << "Plane Fuel : " << plane1.get_fuel() << endl;

}