#include "Garden.h"
#include <iostream>

Garden::Garden(int level, int plotCount)//Take an extra look at this
{
    this->level = level;

    for (int i = 0; i < plotCount; i++)
    {
        plots.push_back(Plot());
    }
}

void Garden::print_garden()
{
    std::cout << "Current Day: " << currentDay << "\n";
    std::cout << "Garden Level: " << level << "\n\n";

    for (int i = 0; i < plots.size(); i++)
    {
        std::cout << "Plot " << i + 1 << ": ";

        plots[i].DisplayPlot();

        std::cout << "\n";
    }

    system("pause");
}

Plot& Garden::GetPlot(int index)
{
    return plots[index];
}

int Garden::GetPlotCount() const
{
    return plots.size();
}

int Garden::GetCurrentDay() const
{
    return currentDay;
}

void Garden::AdvanceDay()
{
    currentDay++;

    for (auto& plot : plots)
    {
        plot.AdvanceDay();
    }
}