#ifndef CHARACTER_H
#define CHARACTER_H
#include "Cell.h"

class Character: public Cell{
    private:
    public:
    Character(int x, int y) : Cell (x,y,'C' ){};
    void move(int dx, int dy);
};

void Character::move(int dx, int dy){
    setPos(dx, dy);
}

#endif