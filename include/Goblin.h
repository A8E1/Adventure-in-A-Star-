#pragma once
#include <string>
class Goblin
{

public:
    Goblin(std::string name_val, int health_val, int strength_val)
    {
        name = name_val;
        health = health_val;
        strength = strength_val;
    }

    virtual std::string get_name() const { return name; }
    virtual int get_health() const { return health; }
    virtual int get_strength() const { return strength; }

    virtual void take_damage(int damage_val)
    {
        health -= damage_val;
        if (health < 0)
        {
            health = 0;
        }
    }
    virtual std::string attack() = 0;
    virtual ~Goblin() = default;

protected:
    std::string name;
    int health;
    int strength;
};