#include "Item.h"

Item::Item(int pLvl, int value, std::string name, int amount) : pLvl(pLvl), value(value), name(name), amount(amount)
{
}

std::string Item::GetName() const { return name; }
int Item::GetValue() const { return value; }
int Item::GetAmount() const { return amount; }

void Item::AddAmount(int amt)
{
    amount += amt;
}

