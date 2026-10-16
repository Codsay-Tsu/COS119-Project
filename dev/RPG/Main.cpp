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
       // std::cout << "2) Go to garden plots";
        std::cout << "2) Display Character Info\n";
        std::cout << "3) Visit Shop\n";
        std::cout << "4) View Inventory\n";
        std::cout << "5) Explanation\n";
        std::cout << "6) Exit\n\n";

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
            int choice = Helper::GetInt(0, shop.StockCount());

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
            std::cout << "Welcome to Somnium Garden " << PlayerName << "!\n\n";
            std::cout << "There is still a lot of work to be done, but here is a breif explanation of statistics and features (MOST OF WHICH ARE NOT IMPLIMENTED YET)\n\n";
            std::cout << "Character stats \n Level or lvl - will effect your maximum amount of energy which will increase as you garden and gain exp. Allowing you to do more each day\n";
            std::cout << "Energy - reduces as you perform garden actions and can only be refilled by resting\n Bulbs - This is used as currency for purchasing new seeds to plant, you can earn Bulbs by selling fully grown plants";
            std::cout << "Garden stats \n Level or lvl - increases as you harvest plants, increasing the garden level will increase the amount of plots available to you for planting \n";
            std::cout << "Max Plots - Current amount of plots you have available to you for planting seeds which you can purchase at the shop for Bulbs" << std::endl;
            system("pause");
        }
        else if (currentChoice == "6")
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
