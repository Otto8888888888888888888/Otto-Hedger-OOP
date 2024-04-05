#include "Motorbike.h"
Motorbike::Motorbike():Vehicle(){

}
Motorbike::Motorbike(int ID):Vehicle(ID){}

int Motorbike::getParkingDuration(){
    time_t timeNow = time(NULL);
    int time = int((timeNow - timeOfEntry)*0.85);
    return time;
}
