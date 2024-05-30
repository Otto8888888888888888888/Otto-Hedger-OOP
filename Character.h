#ifndef CHARACTER_H
#define CHARACTER_H
#include "Cell.h"

class Character: public: Cell{
    private:
    public:
    Character(int x, int y);
    void move(int dx, int dy)
};

Character::Character(int x, int y){
    position = std::make_tuple(x,y);
    type = 'C';
}

Character::move(int dx, int dy){
    position = setPos(dx, dy);
}

#endif