#ifndef CELL_H
#define CELL_H
#include <tuple>

class Cell
{
protected:
    std::tuple<int, int> position;
    char type;
public:
    Cell(int x, int y, char type);
    std::tuple<int, int> getPos();
    char getType();
    void setPos(int x, int y);
    void setType(char type);
};

Cell::Cell(int x, int y, char type){
    position = std::make_tuple(x,y);
    this->type=type;
}

std::tuple<int,int> Cell::getPos(){
    return position;
}

char Cell::getType(){
    return type;
}

void Cell::setPos(int x, int y){
    position = std::make_tuple(x,y);
}

void Cell::setType(char type){
    this->type=type;
}

#endif