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
        if (plantedCrop->IsWatered())
        {
            std::cout << " [WATERED]";
        }
    }
}

void Plot::AdvanceDay()
{
    if (plantedCrop != nullptr)
    {
        plantedCrop->AdvanceDay();
    }
}

void Plot::WaterPlant()
{
    if (plantedCrop != nullptr)
    {
        plantedCrop->Water();
    }
}

bool Plot::IsWatered() const
{
    if (plantedCrop == nullptr)
    {
        return false;
    }

    return plantedCrop->IsWatered();
}

Plant* Plot::HarvestCrop()
{
    if (plantedCrop == nullptr)
    {
        return nullptr;
    }

    Plant* harvestedPlant = plantedCrop;

    plantedCrop = nullptr;

    return harvestedPlant;
}

bool Plot::IsReadyToHarvest() const
{
    if (plantedCrop == nullptr)
    {
        return false;
    }

    return plantedCrop->IsGrown();
}