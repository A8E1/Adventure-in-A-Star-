#include "Goblin.h"

Goblin::Goblin(std::string name_val, GoblinType type_val)
    : name(name_val), type(type_val), health(100), strength(10)
{
}

std::string Goblin::get_name() const
{
    return name;
}

std::string Goblin::get_type() const
{
    return goblin_type_to_string(type);
}

int Goblin::get_health() const
{
    return health;
}

int Goblin::get_strength() const
{
    return strength;
}

void Goblin::set_health(int health_val)
{
    health = health_val;
}

void Goblin::set_strength(int strength_val)
{
    strength = strength_val;
}
