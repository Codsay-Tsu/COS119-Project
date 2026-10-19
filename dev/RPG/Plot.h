#pragma once

#include "Plant.h"

class Plot
{
private:

    Plant* plantedCrop;

public:

    Plot();

    bool IsEmpty() const;

    void PlantCrop(Plant* crop);

    void DisplayPlot() const;

    void AdvanceDay();
};

