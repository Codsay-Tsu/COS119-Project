#include <iostream>
#include "Character.h"
#include <string>

int main()
{
	std::cout << "|--===SOMNIUM GARDEN===--|\n\n";
	
	std::string PlayerName;
	std::cout << "Enter your character name: ";
	std::cin >> PlayerName;
	Player Character(PlayerName, {}, 1, 20, 20, 1000);

	Character.print_character();

	//std::system("cls");
	
}

