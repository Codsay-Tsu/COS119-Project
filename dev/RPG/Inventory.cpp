#include "Inventory.h"
#include  <iostream>

Inventory::Inventory(int pLvl, int value, std::string plantType)
{
	this->pLvl = pLvl;
	this->value = value;
	this->plantType = plantType;

}

void Inventory::AddItem(int pLvl, int value, std::string plantType)
{
	this->pLvl = pLvl;
	this->value = value;
	this->plantType = plantType;
}

