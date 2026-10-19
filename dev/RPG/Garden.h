#pragma once
#include <vector>
#include "Plot.h"

class Garden
{
private:

	int level;
	int currentDay;
	std::vector<Plot> plots;

public:
	
	Garden(int level, int plotCount);

	void print_garden();

	Plot& GetPlot(int index);

	int GetPlotCount() const;

	int GetCurrentDay() const;

	void AdvanceDay();
};

