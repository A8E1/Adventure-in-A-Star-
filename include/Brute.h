#pragma once
#include "Goblin.h"

class Brute : public Goblin
{
public:
    Brute(std::string name_val = "None", int health_val = 40, int strength_val = 10);

    virtual std::string attack() override;
    virtual ~Brute() = default;
};