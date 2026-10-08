#pragma once
#include <string>

class Item
{
private:
    int pLvl;        // Plant level
    int value;       // Sell value
    std::string name;
    int amount;      // Quantity owned

public:
    Item(int pLvl, int value, std::string name, int amount);

    std::string GetName() const;
    int GetValue() const;
    int GetAmount() const;
    void AddAmount(int amt);
};

