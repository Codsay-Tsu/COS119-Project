#pragma once
#include <vector>
#include "Item.h"

class Shop
{
private:
    std::vector<Item> stock;

public:
    Shop();

    void ShowStock() const;
    Item BuyItem(int index);

    int StockCount() const { return stock.size(); }

};
