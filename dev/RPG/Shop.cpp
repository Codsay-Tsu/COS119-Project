#include "Shop.h"
#include <string>
#include <vector>
#include <iostream>
#include "inventory.h"
#include "Player.h"

void Shop::PrintShop(int shopLvl, int bulbs, Player Character)//might need to remove player charactyer trying to figure out how to add character stats when adding items
{
	system("cls");
	bool choosing = true;
	std::string choice;

	while (choosing)
	{
		if (shopLvl == 1)
		{
			
			std::cout << "1.) Kale        100 Bulbs" << std::endl;
			std::cout << "2.) Tomatoe     200 Bulbs" << std::endl;
			std::cout << "3.) Green Bean  300 Bulbs" << std::endl;
			

			if (choice == "1")
			{
				bulbs = bulbs - 100;
				
			}
		}
	}
}
