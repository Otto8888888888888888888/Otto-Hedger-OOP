#ifndef HELICOPTER_H
#define HELICOPTER_H
#include <string>

class Helicopter: public AirCraft{
    private:
    string name;
    public:
    Helicopter();
    Helicopter(int weight, string name);
    void fly(int headwind, int minutes);
    string get_name();
    void set_name(string name);
};

#endif

