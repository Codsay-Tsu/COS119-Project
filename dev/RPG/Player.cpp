#include "Player.h"
#include <iostream>

Player::Player(std::string name, int lvl, int mEN, int cEN, int bulbs)
    : name(name), lvl(lvl), mEN(mEN), cEN(cEN), bulbs(bulbs)
{
}

void Player::print_character()
{
    system("cls");
    std::cout << "Name:   " << name << "\n\n";
    std::cout << "Lvl:    " << lvl << "\n";
    std::cout << "Energy: " << cEN << "/" << mEN << "\n";
    std::cout << "Bulbs:  " << bulbs << std::endl;
    system("pause");
}

void Player::print_inventory()
{
    system("cls");
    std::cout << "--- Inventory ---\n";

    if (inventory.empty())
    {
        std::cout << "Inventory is empty.\n";
    }
    else
    {
        for (const auto& item : inventory)
        {
            std::cout << item.GetName()
                << " x" << item.GetAmount()
                << " (Value: " << item.GetValue() << ")\n";
        }
    }

    system("pause");
}

void Player::AddItem(const Item& item)
{
    // Check if item already exists
    for (auto& invItem : inventory)
    {
        if (invItem.GetName() == item.GetName())
        {
            invItem.AddAmount(item.GetAmount());
            return;
        }
    }

    // Otherwise add new item
    inventory.push_back(item);
}

bool Player::SpendBulbs(int amount)
{
    if (bulbs >= amount)
    {
        bulbs -= amount;
        return true;
    }
    return false;
}
