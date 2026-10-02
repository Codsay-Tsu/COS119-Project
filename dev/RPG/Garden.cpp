#include "Garden.h"
#include <iostream>

Garden::Garden(int GardenLvl, int MaxPlots)
{
	this->GardenLvl = GardenLvl;
	this->MaxPlots = MaxPlots;

}

void Garden::print_garden()
{
	std::cout << "Garden Level: " << GardenLvl << "\n";
	std::cout << "MaxPlots:     " << MaxPlots << "\n";
}
