#include "Brute.h"

Brute::Brute(std::string name_val, int health_val, int strength_val) : Goblin(name_val, health_val, strength_val)
{
}

std::string Brute::attack()
{
    return "Brute attacks for " + std::to_string(strength) + " damage";
}
