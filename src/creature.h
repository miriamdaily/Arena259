#ifndef CREATURE_H
#define CREATURE_H

#include <string>
#include <iostream>

const int MIN_HEALTH = 80;
const int MAX_HEALTH = 120;


class Creature
{
private:
const std::string name; //make data private
const int damage;
int health;

public:
    inline static int creatureCount = 0; // this is a static member to keep track of the number of creatures created

    Creature(const std::string n, int h, const int d) : name(n), damage(d), health(h)
    {
        ++creatureCount; // increment creature count whenever a new creature is created
    }
    std::string getName() const { // add accessor methods 
        return name;
    }
    static int getCreatureCount() // add static method to access creature count
    {
        return creatureCount; // return the current count of creatures created
    }
    int getHealth() const {
        return health;
    }
    int getDamage() const {
        return damage;
    }

    void takeDamage(int amount) // add takeDamage method
    {
        health -= amount;
        if (health < 0)
        {
            health = 0;
        }
    }

    void heal(int amount) // add healing so a creature can recover without exceeding the balance cap
    {
        health += amount;
        if (health > MAX_HEALTH)
        {
            health = MAX_HEALTH;
        }
    }

    void attack(Creature &other) // add attack method
    {
        other.takeDamage(damage);
    }

    bool isAlive() const // add isAlive method
    {
        return health > 0;
    }

    static bool validate(Creature &c){
        if(c.health < MIN_HEALTH || c.health > MAX_HEALTH){
            std::cerr << "Error: " << c.name << " has invalid health. Health must be between " << MIN_HEALTH << " and " << MAX_HEALTH << std::endl;
            return false;
        }
        if(c.damage <= 0 || c.damage > 20){
            std::cerr << "Error: " << c.name << " has invalid damage. Damage must be > 0 or <= 20" << std::endl;
            return false;
        }
        return true;
        // minimum health to start a battle is 80, otherwise the battle would be predictable
        // 
    }

    /*
    If Creature a or b does not have the valid stats for health or damage
    It will output an error message and abort
    */
    static bool validateBattle(Creature &a, Creature &b){
        if(!validate(a) || !validate(b)){
            std::cerr << "The Battle cannot take place as there are invalid stats" << std::endl;
            return false;
        }
        return true;
    }
};

#endif