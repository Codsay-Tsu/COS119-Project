#include "MainMenu.h"
#include <iostream>

MainMenu::MainMenu(int cursor)
{
	cursor = 0;
	int currentChoice = cursor;

	system("cls");

	switch (currentChoice)
	{
	case 0:
		system("cls");

		std::cout << ">> Display Garden Info <<";
		std::cout << "Display Character Info";
		std::cout << "Exit";
		
	case 1:
		system("cls");

		std::cout << "Display Garden Info";
		std::cout << ">> Display Character Info <<";
		std::cout << "Exit";

	case 2:
		system("cls");

		std::cout << "Display Garden Info";
		std::cout << "Display Character Info";
		std::cout << ">> Exit <<";

	default:
		system("cls");

		break;
	}
}
