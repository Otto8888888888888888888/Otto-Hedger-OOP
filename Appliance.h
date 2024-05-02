#ifndef APPLIANCE_H
#define APPLIANCE_H

using namespace std;

class Appliance
{
protected:
    int powerRating;
    bool isOn;
public:
    Appliance();
    Appliance(int powerRating);
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();
    int get_powerRating();
    void set_powerRating(int powerRating);

};

#endif
