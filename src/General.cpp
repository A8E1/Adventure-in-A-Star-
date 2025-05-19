#include "General.h"

General::General(std::string name_val, int health_val, int strength_val) : Goblin(name_val, health_val, strength_val)
{
}

std::string General::attack()
{
    return "General attacks for " + std::to_string(strength) + " damage";
}
