
#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
#include <string>
using namespace std;
class Player
{
protected:
    string name;
    int health;
    int damage;

public:
    Player(string name, int health, int damage);
    ~Player();
    void attack(Player* opponent, int damage);
    void takeDamage(int damage);
    string getName();
    int getHealth();
    int getDamage();
    void setName(std::string name);
    void setHealth(int health);
    void setDamage(int damage);
};

#endif

