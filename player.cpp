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
    if (health < 0)
    {
        health = 0;
    }
}

Player::~Player()
{
    // Destructor body (if needed)
}
