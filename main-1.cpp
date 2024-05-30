#include "Effect.h"
#include "Cell.h"
#include "Utils.h"
#include <iostream>

int main(){
    Cell c1(3,4,'O');
    Utils u1;
    std::tuple<int,int> position1 = c1.getPos();
    std::cout << std::get<0>(position1) << std::get<1>(position1) << std::endl;
    c1.setPos(4,5);
    std::cout << u1.calculateDistance(position1, u1.generateRandomPos(4,4)) << std::endl;
    std::cout << c1.getType() << std::endl;
    c1.setType('K');
    std::cout << c1.getType() << std::endl;

}