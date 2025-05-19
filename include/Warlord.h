#pragma once
#include "Goblin.h"

class Warlord : public Goblin
{
public:
    Warlord(std::string name_val = "None", int health_val = 100, int strength_val = 20);

    virtual std::string attack() override;
    virtual ~Warlord() = default;
};
