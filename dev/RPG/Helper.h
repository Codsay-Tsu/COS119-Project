#pragma once
#include <iostream>
#include <limits>

class Helper//Class to help me with user validation
{
public:
    static int GetInt(int min, int max)
    {
        int value;

        while (true)
        {
            std::cout << "Enter a choice (" << min << " to " << max << "): ";

            if (!(std::cin >> value))
            {
                // User typed something not a number
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input. Please enter a number.\n";
                continue;
            }

            if (value < min || value > max)
            {
                std::cout << "Please enter a valid option.\n";
                continue;
            }

            // Valid number
            return value;
        }
    }
};
