#include "Plant.h"

Plant::Plant(
    std::string name,
    int growthDays,
    int sellValue)
{
    this->name = name;
    this->growthDays = growthDays;
    this->sellValue = sellValue;
}

std::string Plant::GetName() const
{
    return name;
}