#include "Plant.h"

std::string Plant::GetName() const
{
    return name;
}

Plant::Plant(std::string name, int growthDays, int sellValue)
{
    this->name = name;
    this->growthDays = growthDays;
    this->sellValue = sellValue;

    currentGrowth = 0;

    wateredToday = false;
}

void Plant::AdvanceDay()
{
    currentGrowth++;
}

bool Plant::IsGrown() const
{
    return currentGrowth >= growthDays;
}

int Plant::GetCurrentGrowth() const
{
    return currentGrowth;
}

int Plant::GetGrowthDays() const
{
    return growthDays;
}