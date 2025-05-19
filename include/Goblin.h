#pragma once
#include <string>

enum class GoblinType
{
    minion,
    warrior,
    general,
    warlord
};

inline std::string goblin_type_to_string(GoblinType type)
{
    switch (type)
    {
    case GoblinType::minion:
        return "minion";
    case GoblinType::warrior:
        return "warrior";
    case GoblinType::general:
        return "general";
    case GoblinType::warlord:
        return "warlord";
    }
}

class Goblin
{

public:
    Goblin(std::string name_val = "None", GoblinType type_val = GoblinType::minion);

    std::string get_name() const;
    std::string get_type() const;
    int get_health() const;
    int get_strength() const;

    void set_health(int health_val);
    void set_strength(int strength_val);

private:
    std::string name;
    int health;
    int strength;
    GoblinType type;
};