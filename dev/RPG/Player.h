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

};
