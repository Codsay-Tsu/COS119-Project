#pragma once
#include <vector>
#include "Plot.h"

class Garden
{
private:

	int level;

	std::vector<Plot> plots;

public:

	//Garden();

	Garden(int level, int plotCount);

	void print_garden();
};

