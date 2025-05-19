#include "Warlord.h"

Warlord::Warlord(std::string name_val, int health_val, int strength_val) : Goblin(name_val, health_val, strength_val)
{
}

std::string Warlord::attack()
{
    return "Warlord attacks for " + std::to_string(strength) + " damage";
}
