#include "Plot.h"
#include <iostream>

Plot::Plot()
{
    plantedCrop = nullptr;
}

bool Plot::IsEmpty() const
{
    return plantedCrop == nullptr;
}

void Plot::PlantCrop(Plant* crop)
{
    plantedCrop = crop;
}

void Plot::DisplayPlot() const
{
    if (plantedCrop == nullptr)
    {
        std::cout << "Empty";
    }
    else
    {
        std::cout << plantedCrop->GetName() << " (" << plantedCrop->GetCurrentGrowth() << "/" << plantedCrop->GetGrowthDays() << ")";
    }
}

void Plot::AdvanceDay()
{
    if (plantedCrop != nullptr)
    {
        plantedCrop->AdvanceDay();
    }
}