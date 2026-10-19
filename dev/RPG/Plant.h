#pragma once
#include <string>

class Plant
{
private:
    std::string name;

    int growthDays;
    int currentGrowth;

    int sellValue;

    bool wateredToday;

public:

    Plant(
        std::string name,
        int growthDays,
        int sellValue);

    std::string GetName() const;

    void AdvanceDay();

    bool IsGrown() const;

    int GetCurrentGrowth() const;

    int GetGrowthDays() const;
};