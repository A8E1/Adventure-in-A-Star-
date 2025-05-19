#include "Player.h"

Player::Player(std::string name_val, Armor armor_val, Weapon weapon_val)
{
    name = name_val;
    armor = armor_val;
    weapon = weapon_val;
    health = 100;
    strength = 0;
}

std::string Player::get_name() const
{
    return name;
}

std::string Player::get_armor() const
{
    return armor_to_string(armor);
}

std::string Player::get_weapon() const
{
    return weapon_to_string(weapon);
}

int Player::get_health() const
{
    return health;
}

int Player::get_strength() const
{
    return strength;
}

void Player::set_armor(Armor armor_val)
{
    armor = armor_val;
}

void Player::set_weapon(Weapon weapon_val)
{
    weapon = weapon_val;
}

void Player::set_health(int health_val)
{
    if (health_val < 0)
    {
        health = 0;
    }
    else
    {
        health = health_val;
    }
}

void Player::set_strength(int strength_val)
{
    strength = strength_val;
}
