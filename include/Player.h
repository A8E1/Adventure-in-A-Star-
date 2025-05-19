#pragma once
#include <string>

enum class Armor
{
    leather,
    reg,
    strong,
    elite
};

inline std::string armor_to_string(Armor armor)
{
    switch (armor)
    {
    case Armor::leather:
        return "leather";
    case Armor::reg:
        return "reg";
    case Armor::strong:
        return "strong";
    case Armor::elite:
        return "elite";
    default:
        return "unknown";
    }
}

enum class Weapon
{
    dull,
    reg,
    strong,
    elite
};

inline std::string weapon_to_string(Weapon weapon)
{
    switch (weapon)
    {
    case Weapon::dull:
        return "dull";
        // str =
    case Weapon::reg:
        return "reg";
    case Weapon::strong:
        return "strong";
    case Weapon::elite:
        return "elite";
    default:
        return "unknown";
    }
}
class Player
{

public:
    Player(std::string name_val = "None", Armor armor_val = Armor::leather, Weapon weapon_val = Weapon::dull);

    std::string get_name() const;
    std::string get_armor() const;
    std::string get_weapon() const;
    int get_health() const;
    int get_strength() const;

    void set_armor(Armor armor_val);
    void set_weapon(Weapon weapon_val);
    void take_damage(int damage_val);

private:
    std::string name;
    int health;
    Armor armor;
    Weapon weapon;
    int strength;
};