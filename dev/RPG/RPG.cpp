#include <iostream>
#include "Character.h"
#include "Inventory.h"
#include <string>

//initial global variables

std::string name;
int mHP = 100;
int cHP = 100;
int mMP = 20;
int cMP = 20;

std::vector<std::string> inventory;

int main()
{
	std::cout << "|--===SOMNIUM===--|\n\n";
	std::cout << "Please enter your characters name: ";
	std::cin >> name;

	std::system("cls");
	std::cout << "Welcome to the dream, " << name;
	//std::system("cls");
	//initial stats

	
}

