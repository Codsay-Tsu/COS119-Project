#include "Character.h"
#include <iostream>

Player::Player(std::string name, int mHP, int cHP, int mMP, int cMP, std::vector<std::string> inventory)
{

}

void Player::AddItem(std::string item)
{
	inventory.push_back(item);
}
