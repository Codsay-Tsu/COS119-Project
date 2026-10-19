#include <iostream>
#include <string>
#include "Player.h"
#include "Garden.h"
#include "Shop.h"
#include "Helper.h"
#include "Plant.h"
#include "Plot.h"

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
        std::cout << "2) Plant Seed\n";
        std::cout << "3) Water Plant\n";
        std::cout << "4) Display Character Info\n";
        std::cout << "5) Visit Shop\n";
        std::cout << "6) View Inventory\n";
        std::cout << "7) Explanation\n";
        std::cout << "8) Rest\n";
        std::cout << "9) Exit\n";
        std::cout << "0) Harvest: THIS OPTION WILL CHANGE IN THE FUTURE";

        std::string currentChoice;
        std::cin >> currentChoice;
        ////////////////////////////////////////////////////////////////////||--GARDEN INFO--||///////////////////////////////////////////////////////////////////////////////////////////////////

        if (currentChoice == "1")
        {
            system("cls");
            pGarden.print_garden();
        }
        /////////////////////////////////////////////////////////////////////||--PLANT SEEDS--||/////////////////////////////////////////////////////////////////////////////////////////////////////

        else if (currentChoice == "2")
        {
            system("cls");

            auto& inventory = Character.GetInventory();

            if (inventory.empty())
            {
                std::cout << "You do not have any seeds!\n";
                system("pause");
                continue;
            }

            std::cout << "=== Select Seed ===\n\n";

            for (int i = 0; i < inventory.size(); i++)
            {
                if (inventory[i].GetAmount() > 0)
                {
                    std::cout << i + 1 << ") " << inventory[i].GetName() << " x" << inventory[i].GetAmount() << "\n";
                }
            }

            int seedChoice = Helper::GetInt(1, inventory.size());

            Item& selectedSeed = inventory[seedChoice - 1];

            system("cls");

            std::cout << "=== Select Plot ===\n\n";

            for (int i = 0; i < pGarden.GetPlotCount(); i++)
            {
                std::cout << i + 1 << ") ";

                pGarden.GetPlot(i).DisplayPlot();

                std::cout << "\n";
            }

            int plotChoice = Helper::GetInt(1, pGarden.GetPlotCount());

            Plot& selectedPlot = pGarden.GetPlot(plotChoice - 1);

            if (!selectedPlot.IsEmpty())
            {
                std::cout << "That plot already contains a plant!\n";

                system("pause");
                continue;
            }

            if (!Character.UseEnergy(2))
            {
                std::cout << "Not enough energy!\n";

                system("pause");
                continue;
            }

            Plant* newPlant = nullptr;

            if (selectedSeed.GetName() == "Kale Seed")
            {
                newPlant = new Plant("Kale", 3, 12);
            }
            else if (selectedSeed.GetName() == "Tomato Seed")
            {
                newPlant = new Plant("Tomato", 5, 20);
            }
            else if (selectedSeed.GetName() == "Green Bean Seed")
            {
                newPlant = new Plant("Green Bean", 4, 15);
            }

            if (newPlant != nullptr)
            {
                selectedPlot.PlantCrop(newPlant);

                Character.RemoveItem(selectedSeed.GetName());

                std::cout << selectedSeed.GetName() << " planted successfully!\n";

                std::cout << "Energy Remaining: " << Character.GetCurrentEnergy() << "\n";

                system("pause");
            }
        }
        ///////////////////////////////////////////////////////////////////////||--WATER PLANTS--||/////////////////////////////////////////////////////////////////////////////////////////////////////


        else if (currentChoice == "3")
        {
            system("cls");

            std::cout << "=== Water Plant ===\n\n";

            for (int i = 0; i < pGarden.GetPlotCount(); i++)
            {
                std::cout << i + 1 << ") ";

                pGarden.GetPlot(i).DisplayPlot();

                std::cout << "\n";
            }

            int plotChoice = Helper::GetInt(1, pGarden.GetPlotCount());

            Plot& selectedPlot = pGarden.GetPlot(plotChoice - 1);

            if (selectedPlot.IsEmpty())
            {
                std::cout << "There is nothing planted in that plot!\n";

                system("pause");

                continue;
            }

            if (!Character.UseEnergy(1))
            {
                std::cout << "Not enough energy!\n";

                system("pause");

                continue;
            }

            if (selectedPlot.IsWatered())
            {
                std::cout << "This plant has already been watered today!\n";

                system("pause");

                continue;
            }

            selectedPlot.WaterPlant();

            std::cout << "Plant watered successfully!\n";

            std::cout << "Energy Remaining: "
                << Character.GetCurrentEnergy()
                << "\n";

            system("pause");
        }
        ///////////////////////////////////////////////////////////////////////||--CHARACTER INFO--||/////////////////////////////////////////////////////////////////////////////////////////////////////


        else if (currentChoice == "4")
        {
            system("cls");
            Character.print_character();
        }
        ///////////////////////////////////////////////////////////////////////||--SHOP--||/////////////////////////////////////////////////////////////////////////////////////////////////////
        else if (currentChoice == "5")
        {
            system("cls");

            std::cout << "=== Shop ===\n";
            std::cout << "Bulbs: "
                << Character.GetBulbs()
                << "\n\n";

            std::cout << "1) Buy Seeds\n";
            std::cout << "2) Sell Crops\n";
            std::cout << "0) Leave\n\n";

            int shopChoice =
                Helper::GetInt(0, 2);

            if (shopChoice == 1)
            {
                system("cls");

                shop.ShowStock();

                std::cout
                    << "\nChoose item to buy (0 to cancel): ";

                int choice =
                    Helper::GetInt(
                        0,
                        shop.StockCount());

                if (choice == 0)
                {
                    continue;
                }

                Item item =
                    shop.BuyItem(choice - 1);

                if (Character.SpendBulbs(item.GetValue()))
                {
                    Character.AddItem(item);

                    std::cout
                        << "Purchased "
                        << item.GetName()
                        << "!\n";
                }
                else
                {
                    std::cout
                        << "Not enough bulbs!\n";
                }

                system("pause");
            }

            else if (shopChoice == 2)
            {
                //add selling here next
            }
        }
        ///////////////////////////////////////////////////////////////////////||--INVENTORY--||/////////////////////////////////////////////////////////////////////////////////////////////////////


        else if (currentChoice == "6")
        {
            Character.print_inventory();

        }
        ///////////////////////////////////////////////////////////////////////||--TUTORIAL AND UPDATES--||/////////////////////////////////////////////////////////////////////////////////////////////////////


        else if (currentChoice == "7")
        {
            system("cls");

            std::cout << "Welcome to Somnium Garden " << PlayerName << "!\n\n";
            std::cout << "There is still a lot of work to be done, but here is a breif explanation of statistics and features (MOST OF WHICH ARE NOT IMPLIMENTED YET)\n\n";
            std::cout << "Character stats \nLevel or lvl - will effect your maximum amount of energy which will increase as you garden and gain exp. Allowing you to do more each day\n";
            std::cout << "Energy - reduces as you perform garden actions and can only be refilled by resting\nBulbs - This is used as currency for purchasing new seeds to plant, you can earn Bulbs by selling fully grown plants\n\n";
            std::cout << "Garden stats \nLevel or lvl - increases as you harvest plants, increasing the garden level will increase the amount of plots available to you for planting \n";
            std::cout << "Plots - Current amount and status of plots you have available to you for planting seeds which can be purchased at the shop for Bulbs" << std::endl;
            std::cout << "\n[UPDATE:] PLANTS MUST BE WATERED EACH DAY AFTER THEY ARE PLANTED OR THEY WILL NOT GROW!\n";
            system("pause");
        }
        ///////////////////////////////////////////////////////////////////////||--REST--||///////////////////////////////////////////////////////////////////////////////////////////////////////


        else if (currentChoice == "8")
        {
            Character.Rest();

            pGarden.AdvanceDay();

            std::cout << "You rest for the night.\n";

            std::cout << "Day " << pGarden.GetCurrentDay() << " begins.\n";

            system("pause");

        }
        ///////////////////////////////////////////////////////////////////////||--EXIT--||/////////////////////////////////////////////////////////////////////////////////////////////////////


        else if (currentChoice == "9")
        {
            choosing = false;;
        }
        ///////////////////////////////////////////////////////////////////////||--HARVEST--||////////////////////////////////////////////////////////////////////////////////////////////////////


        else if (currentChoice == "0")
        {
            system("cls");

            std::cout << "=== Harvest Crop ===\n\n";

            for (int i = 0; i < pGarden.GetPlotCount(); i++)
            {
                std::cout << i + 1 << ") ";

                pGarden.GetPlot(i).DisplayPlot();

                std::cout << "\n";
            }

            int plotChoice = Helper::GetInt(1, pGarden.GetPlotCount());

            Plot& selectedPlot = pGarden.GetPlot(plotChoice - 1);

            if (selectedPlot.IsEmpty())
            {
                std::cout << "That plot is empty!\n";

                system("pause");

                continue;
            }

            if (!selectedPlot.IsReadyToHarvest())
            {
                std::cout << "That crop is not fully grown yet!\n";

                system("pause");

                continue;
            }

            Plant* harvestedPlant = selectedPlot.HarvestCrop();

            Item harvestedCrop(CROP, 1, harvestedPlant->GetSellValue(), harvestedPlant->GetName(), 1);

            Character.AddItem(harvestedCrop);

            std::cout << harvestedPlant->GetName() << " harvested successfully!\n";

            delete harvestedPlant;

            system("pause");
        }

        else
        {
            std::cout << "PLEASE ENTER A VALID MENU OPTION\n";
            system("pause");
        }
    }

    return 0;
}
