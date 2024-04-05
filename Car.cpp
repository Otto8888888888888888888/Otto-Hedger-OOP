#include "Car.h"
Car::Car():Vehicle(){

}
Car::Car(int ID):Vehicle(ID){}

int Car::getParkingDuration(){
    time_t timeNow = time(NULL);
    int time = int((timeNow - timeOfEntry)*0.90);
    return time;
}
