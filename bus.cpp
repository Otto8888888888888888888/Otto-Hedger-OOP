#include "bus.h"
Bus::Bus():Vehicle(){

}
Bus::Bus(int ID):Vehicle(ID){}

int Bus::getParkingDuration(){
    time_t timeNow = time(NULL);
    int time = int((timeNow - timeOfEntry)*0.75);
    return time;
}
