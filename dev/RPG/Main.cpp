#include <iostream>
#include <string>
#include "Player.h"
#include "Garden.h"
#include "Shop.h"
#include "Helper.h"


int main()
{
    std::cout << "|--=== SOMNIUM GARDEN ===--|\n\n";

    std::string PlayerName;
    std::cout << "Enter your character name: ";
    std::cin >> PlayerName;

    Player Character(PlayerName, 1, 20, 20, 1000);
    Garden pGarden(1, 3);
    Shop shop;
    
    bool choosing = true;

    while (choosing)
    {
        system("cls");

        std::cout << "1) Display Garden Info\n";
        std::cout << "2) Display Character Info\n";
        std::cout << "3) Visit Shop\n";
        std::cout << "4) View Inventory\n";
        std::cout << "5) Exit\n\n";

        std::string currentChoice;
        std::cin >> currentChoice;

        if (currentChoice == "1")
        {
            system("cls");
            pGarden.print_garden();
        }
        else if (currentChoice == "2")
        {
            system("cls");
            Character.print_character();
        }
        else if (currentChoice == "3")
        {
            system("cls");
            std::cout << "Bulbs: " << Character.GetBulbs() << "\n\n";
            shop.ShowStock();

            std::cout << "\nChoose item to buy (0 to cancel): ";
            int choice = Helper::GetInt(1, shop.StockCount());

            if (choice == 0)
            {
                continue; // Cancel Command
            }

            Item item = shop.BuyItem(choice - 1);

            if (Character.SpendBulbs(item.GetValue()))
            {
                Character.AddItem(item);
                std::cout << "Purchased " << item.GetName() << "!\n";
            }
            else
            {
                std::cout << "Not enough bulbs!\n";
            }

            system("pause");

        }
        else if (currentChoice == "4")
        {
            Character.print_inventory();
        }
        else if (currentChoice == "5")
        {
            choosing = false;
        }
        else
        {
            std::cout << "PLEASE ENTER A VALID MENU OPTION\n";
            system("pause");
        }
    }

    return 0;
}
