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

    switch (armor_val)
    {
    case Armor::leather:
        health += 10;
        break;
    case Armor::reg:
        health += 30;
        break;
    case Armor::strong:
        health += 50;
        break;
    case Armor::elite:
        health += 100;
        break;
    default:
        break;
    }
}

void Player::set_weapon(Weapon weapon_val)
{
    weapon = weapon_val;

    switch (weapon_val)
    {
    case Weapon::dull:
        strength += 5;
        break;
    case Weapon::reg:
        strength += 10;
        break;
    case Weapon::strong:
        strength += 20;
        break;
    case Weapon::elite:
        strength += 50;
        break;
    default:
        break;
    }
}

void Player::take_damage(int damage_val)
{
    health -= damage_val;
    if (health < 0)
    {
        health = 0;
    }
    else
    {
        health = damage_val;
    }
}
