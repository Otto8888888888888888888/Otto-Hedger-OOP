#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance {
private:
    double screensize;
public:
    TV();
    TV(int powerRating, double screensize);
    void setScreenSize(double screensize);
    double getScreenSize();
    double getPowerConsumption()override;
};

#endif