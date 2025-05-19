#pragma once
#include <string>
#include "Goblin.h"

class Minion : public Goblin
{
public:
    Minion(std::string name_val = "None", int health_val = 30, int strength_val = 5);
    virtual std::string attack() override;
    virtual ~Minion() = default;
};