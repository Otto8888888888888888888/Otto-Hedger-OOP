#include "player.h"

Player::Player(std::string name, int health, int damage)
{
    this->name = name;
    this->health = health;
    this->damage = damage;
}

void Player::attack(Player* opponent, int damage)
{
    opponent->takeDamage(damage);
}

void Player::takeDamage(int damage) 
{
    health -= damage;
    cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";

}
string Player::getName(){
    return name;
}
int Player::getHealth(){
    return health;
}
int Player::getDamage() {
    return damage;
}
void Player::setName(std::string name)
{
    this->name = name;
}

void Player::setHealth(int health)
{
    this->health = health;
}

void Player::setDamage(int damage)
{
    this->damage = damage;
}

Player::~Player()
{
    // Destructor body (if needed)
}
