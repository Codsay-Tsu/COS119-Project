#include "Shop.h"
#include <iostream>

Shop::Shop()
{
    stock.push_back(Item(1, 5, "Kale Seed", 1));
    stock.push_back(Item(1, 8, "Tomato Seed", 1));
    stock.push_back(Item(2, 12, "Green Bean Seed", 1));
}

void Shop::ShowStock() const
{
    std::cout << "--- Shop ---\n";
    for (int i = 0; i < stock.size(); i++)
    {
        std::cout << i + 1 << ") " << stock[i].GetName() << " - " << "cost:" << stock[i].GetValue() << "\n";
    }
}

Item Shop::BuyItem(int index)
{
    return stock[index];
}
