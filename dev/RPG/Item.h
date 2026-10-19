#pragma once
#include <string>

enum ItemType
{
    SEED,
    CROP
};

class Item
{
private:

    ItemType type;

    int pLvl;        // Plant level
    int value;       // Sell value
    std::string name;
    int amount;      // Quantity owned

public:
    Item(ItemType type, int pLvl, int value, std::string name, int amount);

    std::string GetName() const;

    int GetValue() const;
    
    int GetAmount() const;
    
    void AddAmount(int amt);
    
    void RemoveAmount(int amt);
    
    ItemType GetType() const;

};

