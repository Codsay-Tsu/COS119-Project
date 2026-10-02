#include <iostream>
#include "Character.h"
#include <string>
#include "Garden.h"
#include "MainMenu.h"

int main()
{
	std::cout << "|--===SOMNIUM GARDEN===--|\n\n";
	
	std::string PlayerName;
	std::cout << "Enter your character name: ";
	std::cin >> PlayerName;
	Player Character(PlayerName, {}, 1, 20, 20, 1000);

	Garden pGarden(1, 3);

	bool choosing = true;

	while (choosing)
	{
		system("cls");

		std::cout << "1)   -=Display Garden Info=-\n";
		std::cout << "2) -=Display Character Info=-\n";
		std::cout << "3)          -=Exit=-\n";

		int currentChoice;
		std::cin >> currentChoice;
		if (currentChoice == 1)
		{
			system("cls");
			pGarden.print_garden();
		}
		else if(currentChoice == 2)
		{

			system("cls");
			Character.print_character();
		}
		else if (currentChoice == 3)
		{
			system("cls");
			choosing = false;
		}
		else
		{
			std::cout << "PLEASE ENTER A VALID MENU OPTION\n";
			system("pause");
		}
	}
		
}

