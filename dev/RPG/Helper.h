#pragma once
#include <iostream>
#include <string>

class Helper
{
public:
    static int GetInt(int min, int max)
    {
        std::string input;

        while (true)
        {
            std::getline(std::cin, input);

            try
            {
                int value = std::stoi(input);

                if (value < min || value > max)
                {
                    std::cout << "Please enter a valid option.\n";
                    continue;
                }

                return value;
            }
            catch (...)
            {
                std::cout << "Invalid input. Please enter a number.\n";
            }
        }
    }
};