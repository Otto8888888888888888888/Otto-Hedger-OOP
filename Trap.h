#ifndef TRAP_H
#define TRAP_H
#include "Effect.h"
#include "Cell.h"

class Trap: public: Cell public: Effect{
    private:
    bool active;
    public:
    Trap(int x, int y);
    bool isActive();
    void apply(Cell& cell);
};

Trap::Trap(int x, int y){
    position = std::make_tuple(x,y);
    type = 'T';
    active = true;
}

Bool Trap::isActive(){
    return active;
}

void Trap::apply(Cell& cell){
    if active = true{
        cell.setType('T');
        active = false;
    }
}
#endif