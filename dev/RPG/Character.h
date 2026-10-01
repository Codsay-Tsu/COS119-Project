#pragma once
#include <string>
#include <vector>
#include <iostream>

class Player
{
private:
	std::string name;
	std::vector<std::string> inventory;
	int lvl;   //Characters level increased by gardening and controls max energy
	int mEN;   //Max energy
	int cEN;   //current energy
	int bulbs; //currency
	
public:

	Player(std::string name, std::vector<std::string> inventory, int lvl, int mEN, int cEN, int bulbs);

	void print_character();
			
};

