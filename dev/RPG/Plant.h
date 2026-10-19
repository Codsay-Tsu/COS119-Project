#pragma once
#include <string>

class Plant
{
private:
    std::string name;
    int growthDays;
    int sellValue;

public:

    Plant(
        std::string name,
        int growthDays,
        int sellValue);

    std::string GetName() const;
};