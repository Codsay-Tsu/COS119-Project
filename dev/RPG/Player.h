#pragma once
#include <string>
#include <vector>
#include "Item.h"

class Player
{
private:
    std::string name;
    std::vector<Item> inventory;   // REAL inventory
    int lvl;
    int mEN;
    int cEN;
    int bulbs;

public:
    Player(std::string name, int lvl, int mEN, int cEN, int bulbs);

    void print_character();
    void print_inventory();

    void AddItem(const Item& item);
    bool SpendBulbs(int amount);

    int GetBulbs() const { return bulbs; }//for displaying current amount of bulbs player has in the shop

    std::vector<Item>& GetInventory();

    bool HasItem(std::string itemName);

    void RemoveItem(std::string itemName);

    bool UseEnergy(int amount);

    int GetCurrentEnergy() const;
    
    void Rest();
};
