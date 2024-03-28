#ifndef UNIT_H
#define UNIT_H

class Unit
{
    private:
    int unit_val = 0;
    int num_beds =0;
    double unit_size = 0;
public:

Unit();
Unit::Unit(int unit_val, int num_beds, double unit_size);
{
    this->unit_val = unit_val;
    this->num_beds = num_beds;
    this->unit_size = unit_size;

}
int get_Num_Bedrooms();
int get_Value();
double get_Area();
};


#endif