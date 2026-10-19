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
    if (wateredToday)
    {
        currentGrowth++;
    }

    wateredToday = false;
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

void Plant::Water()
{
    wateredToday = true;
}

bool Plant::IsWatered() const
{
    return wateredToday;
}