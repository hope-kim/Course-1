// Hope Kim
// ITP 165, Fall 2017
// Homework 9
// hopekim@usc.edu

#include "Hero.h"
#include <iostream>
#include <fstream>

// Function: loadHeroes
// Purpose: reads in a file name, dynamically creates Hero variables, stores Hero pointers in a vector, and outputs the number of heroes loaded
// Parameters: std::string& inputFile and std::vector<Hero*>& heroes
// Returns: nothing
void loadHeroes(std::string& inputFile, std::vector<Hero*>& heroes)
{
    // file input from inputFile
    std::ifstream fileInput(inputFile);
    // std::string to hold the file input as a std::string
    
    
    // if the file is valid
    if (fileInput.is_open())
    {
        // while loop until the end of the file
        while (!fileInput.eof())
        {
            // inputs the file into the std::string inFileText
            std::string inFileText = "";
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

int main() {
    
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
                std::cout << "We are saving this for later!" << std::endl;
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
