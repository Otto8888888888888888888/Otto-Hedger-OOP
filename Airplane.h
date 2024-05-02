#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "AirCraft.h"

class Airplane: public AirCraft{
    private:
    int numPassengers;
    public:
    Airplane();
    Airplane(int weight, int numPassengers);
    void fly(int headwind, int minutes);
    void reducePassengers(int x);    
    int get_numPassengers();
};

#endif

