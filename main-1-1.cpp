#include "AirCraft.h"

int main(){
    AirCraft plane1(200000);
    cout << "Your plane weighs: " << plane1.get_weight() << endl;
    cout << "Your plane has" << plane1.get_fuel() << endl;
    cout << "and has flown " << plane1.get_numberOfFlights() << " flights." << endl;
}
