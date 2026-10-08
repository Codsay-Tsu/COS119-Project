#pragma once
#include <string>
#include <vector>

class Inventory
{
	//std::vector<std::string> Kale;
	//std::vector<std::string> GreenBean;
	//std::vector<std::string> Tomato;
	int pLvl;
	int value;
	std::string plantType;

public:

	Inventory(int pLvl, int value, std::string plantType);

	void AddItem(int pLvl, int value, std::string plantType);

};

