#include "Garden.h"
#include <iostream>

Garden::Garden(int level, int plotCount)
{
    this->level = level;

    for (int i = 0; i < plotCount; i++)
    {
        plots.push_back(Plot());
    }
}

void Garden::print_garden()
{
    std::cout << "Garden Level: "
        << level
        << "\n\n";

    for (int i = 0; i < plots.size(); i++)
    {
        std::cout << "Plot "
            << i + 1
            << ": ";

        plots[i].DisplayPlot();

        std::cout << "\n";
    }

    system("pause");
}
