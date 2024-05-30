#ifndef TRAP_H
#define TRAP_H
#include "Effect.h"
#include "Cell.h"

class Trap: public Cell, public Effect{
    private:
    bool active = true;
    public:
    Trap(int x, int y): Cell(x,y,'T'){};
    bool isActive();
    void apply(Cell& cell);
};

bool Trap::isActive(){
    return active;
}

void Trap::apply(Cell& cell){
    if (active == true){
        cell.setType('T');
        active = false;
    }
}
#endif