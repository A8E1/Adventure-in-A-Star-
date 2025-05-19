#include "Minion.h"

Minion::Minion(std::string name_val, int health_val, int strength_val) : Goblin(name_val, health_val, strength_val)
{
}

std::string Minion::attack()
{
    return "Minion attacks for " + std::to_string(strength) + " damage";
}
