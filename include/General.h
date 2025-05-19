#pragma once
#include "Goblin.h"

class General : public Goblin
{
public:
    General(std::string name_val = "None", int health_val = 60, int strength_val = 15);

    virtual std::string attack() override;
    virtual ~General() = default;
};
