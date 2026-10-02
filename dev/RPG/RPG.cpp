#include <iostream>
#include "Character.h"
#include <string>
#include "Garden.h"

int main()
{
	std::cout << "|--===SOMNIUM GARDEN===--|\n\n";
	
	std::string PlayerName;
	std::cout << "Enter your character name: ";
	std::cin >> PlayerName;
	Player Character(PlayerName, {}, 1, 20, 20, 1000);

	Character.print_character();

	Garden pGarden(1, 3);

	pGarden.print_garden();

	//std::system("cls");
	
}

