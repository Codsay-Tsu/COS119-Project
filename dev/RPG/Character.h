#pragma once
#include <string>
#include <vector>
#include <iostream>
class Player
{
private:
	std::string name;
	int mHP;
	int cHP;
	int mMP;
	int cMP;

	std::vector<std::string> inventory;

public:
	Player (std::string name, int mHP, int cHP, int mMP, int cMP, std::vector<std::string> inventory);

	void AddItem(std::string item);


	void Print_Player()
	{
		std::cout << "Name: " << name;
		std::cout << "HP: " << mHP << "/" << cHP;
		std::cout << "MP: " << mMP << "/" << cMP;
	}
};

