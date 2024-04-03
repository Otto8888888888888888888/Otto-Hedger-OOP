
#include "player.h"
#include "wizard.h"
Wizard::Wizard(std::string name, int health, int damage, int mana)
    :Player(name,health,damage),mana(mana){

    }
void Wizard::castSpell(Player* opponent){
    opponent->takeDamage(damage);
    cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
}   