#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class AirCraft
{
private:
    int weight;
    float fuel;
    int numberOfFlights;
public:
    AirCraft();
    AirCraft(int weight);
    virtual void fly(int headwind, int minutes);
    void refuel();
    int get_weight();
    void set_weight(int weight);
    float get_fuel();
    void set_fuel(float fuel);
    int get_numberOfFlights();
    void set_numberOfFlights(int numberOfFlights);
};

#endif