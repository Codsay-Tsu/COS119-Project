#include "Character.h"
#include <iostream>

Player::Player(std::string name, std::vector<std::string> inventory, int lvl, int mEN, int cEN, int bulbs)
{
	this->name = name;
	this->inventory = inventory;
	this->lvl = lvl;
	this->mEN = mEN;
	this->cEN = cEN;
	this->bulbs = bulbs;
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
