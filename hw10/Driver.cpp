// Hope Kim
// ITP 165, Fall 2017
// Homework 10
// hopekim@usc.edu

#include "Hero.h"
#include "Powers.h"
#include <iostream>
#include <fstream>

// Function: selectHero
// Purpose: uses the std::string userInput to select a hero
// Parameters: std::vector<Hero*>& heroes, std::string& userInput
// Returns: Hero* of a specific hero
Hero* selectHero(std::vector<Hero*>& heroes, std::string& userInput)
{
    switch(std::stoi(userInput))
    {
        case 0:
            return heroes[0];
            break;
        case 1:
            return heroes[1];
            break;
        case 2:
            return heroes[2];
            break;
        case 3:
            return heroes[3];
            break;
        case 4:
            return heroes[4];
            break;
        case 5:
            return heroes[5];
            break;
        case 6:
            return heroes[6];
            break;
        case 7:
            return heroes[7];
            break;
        case 8:
            return heroes[8];
            break;
        default:
            return heroes[9];
            break;
    }
}

// Function: heroCombat
// Purpose: displays the names of the heroes, prompts the user for 2 heroes, has the 2 selected heroes fight until 1 wins
// Parameters: std::vector<Hero*>& heroes
// Returns: nothing
void heroCombat(std::vector<Hero*> heroes)
{
    // std::strings to hold the user's choices for heroes
    std::string userInputOne;
    std::string userInputTwo;
    // displays the nbames of the heroes
    for (int i = 0; i < heroes.size(); i++)
    {
        std::cout << i << ": " << heroes[i]->getName() << std::endl;
    }
    // output for user's choices for heroes
    std::cout << "Select your first hero: ";
    std::cin >> userInputOne;
    std::cout << "Select your second hero: ";
    std::cin >> userInputTwo;
    // Hero*s of the heroes
    Hero* firstHero = selectHero(heroes, userInputOne);
    Hero* secondHero = selectHero(heroes, userInputTwo);
    // std::strings of the heroes' names
    std::string firstHeroName = firstHero->getName();
    std::string secondHeroName = secondHero->getName();
    
    // do-while loop for the fight between the 2 heroes until one wins or they tie
    do
    {
        // output for the heroes' healths
        std::cout << firstHeroName << " has " << firstHero->getHealth() << " health" << std::endl;
        std::cout << secondHeroName << " has " << secondHero->getHealth() << " health" << std::endl;
        
        // Power*s for the heroes' powers
        Power* firstPower = firstHero->useRandomPower();
        Power* secondPower = secondHero->useRandomPower();
        
        // output for the heroes' powers
        std::cout << firstHeroName << " is using " << firstPower->getDescription() << std::endl;
        std::cout << secondHeroName << " is using " << secondPower->getDescription() << std::endl;
        
        // int to hold which hero won
        int win = firstPower->fight(secondPower);
        
        // if the first hero lost
        if (win == -1)
        {
            selectHero(heroes, userInputOne)->takeDamage();
        }
        // if the 2 heroes tied
        else if (win == 0)
        {
            selectHero(heroes, userInputOne)->takeDamage();
            selectHero(heroes, userInputTwo)->takeDamage();
        }
        // if the first hero won
        else if (win == 1)
        {
            selectHero(heroes, userInputTwo)->takeDamage();
        }
        std::cout << "---------------------------------------" << std::endl;
    }
    while(firstHero->getHealth() > 0 && secondHero->getHealth() > 0);
    
    // output if the 2 heroes tie and resetting both of their healths to mMaxHealth
    if (firstHero->getHealth() == 0 && secondHero->getHealth() == 0)
    {
        std::cout << firstHeroName << " and " << secondHeroName << " tie!" << std::endl;
        firstHero->resetHealth();
        secondHero->resetHealth();
        
        
    }
    // output if the first hero loses and resetting both of their healths to mMaxHealth
    else if (firstHero->getHealth() == 0)
    {
        std::cout << secondHeroName << " wins!" << std::endl;
        firstHero->resetHealth();
        secondHero->resetHealth();
        
    }
    // output if the second hero loses and resetting both of their healths to mMaxHealth
    else if (secondHero->getHealth() == 0)
    {
        std::cout << firstHeroName << " wins!" << std::endl;
        firstHero->resetHealth();
        secondHero->resetHealth();
    }
}

// Function: loadHeroes
// Purpose: reads in a file name, dynamically creates Hero variables, stores Hero pointers in a vector, and outputs the number of heroes loaded
// Parameters: std::string& inputFile, std::vector<Hero*>& heroes
// Returns: nothing
void loadHeroes(std::string& inputFile, std::vector<Hero*>& heroes)
{
    // clears the heroes vector
    heroes.clear();
    // file input from inputFile
    std::ifstream fileInput(inputFile);
    
    // if the file is valid
    if (fileInput.is_open())
    {
        // while loop until the end of the file
        while (!fileInput.eof())
        {
            // std::string to hold the file input as a std::string
            std::string inFileText = "";
            // inputs the file into the std::string inFileText
            std::getline(fileInput, inFileText);
            // dynamically creates Hero variables
            Hero* newHero = new Hero(inFileText);
            // stores Hero pointers in a vector
            heroes.push_back(newHero);
        }
        
        // outputting the number of heroes loaded
        std::cout << heroes.size() << " heroes loaded..." << std::endl;
    }
    // if the file is invalid
    else
    {
        std::cout << "Invalid file name." << std::endl;
    }
}
// Function: printRoster
// Purpose: prints each hero and each hero's powers
// Parameters: std::vector<Hero*>& heroes
// Returns: nothing
void printRoster(std::vector<Hero*>& heroes)
{
    for (int i = 0; i < heroes.size(); i++)
    {
        heroes[i]->printPowers();
    }
}

int main()
{
    // priming std::rand()
    std::srand(std::time(0));
    
    // int to hold the choice of the user
    int choice = 0;
    // vector of Hero pointers
    std::vector<Hero*> heroes;
    
    // do-while loop to continue the menu option
    do
    {
        // output for user input for choice
        std::cout << "Choose an option:" << std::endl;
        std::cout << "\t1: Load Heroes" << std::endl;
        std::cout << "\t2: Print Hero Roster" << std::endl;
        std::cout << "\t3: Hero Fight!" << std::endl;
        std::cout << "\t4: Quit" << std::endl;
        std::cout << "> ";
        std::cin >> choice;
        
        // switch statement for the user's choice
        switch (choice)
        {
            // if the user wants to load heroes
            case 1:
            {
                // std::string to hold the input file name
                std::string inputFile;
                // output for user input for file name
                std::cout << "Enter file to load please: ";
                std::cin.ignore();
                // inputs the user's file name into inputFile
                std::getline(std::cin, inputFile);
                
                // calls the function loadHeroes
                loadHeroes(inputFile, heroes);
            }
                
                break;
                
            // if the user wants to print roster
            case 2:
            {
                // output
                std::cout << "The following " << heroes.size() << " heroes are loaded..." << std::endl;
                std::cout << "---------------------------------------" << std::endl;
                // for loop to loop through each hero's powers
                for (int i = 0; i < heroes.size(); i ++)
                {
                    heroes[i]->printPowers();
                    std::cout << "---------------------------------------" << std::endl;
                }
            }
                break;
                
            // if the user wants to hero fight
            case 3:
                // calls the function heroCombat
                heroCombat(heroes);
                break;
                
            // if the user wants to quit
            default:
                // outputs "Quitting!"
                std::cout << "Quitting!" << std::endl;
                // prevents the memory leak and deletes from the heap
                if (heroes.size() > 0)
                {
                    for (int i = 0; i < heroes.size(); i++)
                    {
                        delete heroes[i];
                    }
                    // clears the vector out
                    heroes.clear();
                }
                break;
        }
    }
    while (choice != 4);
    
    return 0;
}

