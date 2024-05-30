#include "Effect.h"
#include "Cell.h"
#include "Utils.h"
#include "Character.h"
#include "Trap.h"
#include <iostream>

int main(){
    Trap t1(3,4);
    Character c1(5,2);
    std::cout << t1.isActive() << std::endl;

}
