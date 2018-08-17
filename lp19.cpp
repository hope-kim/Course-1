// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 19
// hopekim@usc.edu

#include <iostream>
#include "Candy.h"
#include "Chocolate.h"
#include "HardCandy.h"
#include "SoftCandy.h"

int main()
{
    // Bool to decide if the while loop should continue
    bool again = true;
    
    // Answer if the user wants to continue
    std::string answer = "y";
    
    // While loop to determine if the program should continue
    while (again)
    {
        // Int to determine the user's choice
        int choice = 0;
        
        // User choice of candy type
        std::cout << "Choose from one of the following:" << std::endl;
        std::cout << "1. Chocolate" << std::endl;
        std::cout << "2. Hard Candy" << std::endl;
        std::cout << "3. Soft Candy" << std::endl;
        std::cout << "Choose: ";
        std::cin >> choice;
        
        // Switch statement for each type of candy
        switch (choice)
        {
            // Case for chocolate
            case 1:
            {
                // Variables and input
                std::string inName = "";
                double inCalories = 0.0;
                double inPerC = 0.0;
                std::cout << "Name: ";
                std::cin.ignore();
                std::getline(std::cin, inName);
                std::cout << "Calories: ";
                std::cin >> inCalories;
                std::cout << "% cocoa: ";
                std::cin >> inPerC;
                
                // Parameterized constructor
                Chocolate yourChocolate(inName, inCalories, inPerC);
                
                // Displays the chocolate variables
                yourChocolate.display();
            }
                break;
                
            // Case for hard candy
            case 2:
            {
                // Variables and input
                std::string inName = "";
                double inCalories = 0.0;
                double inTransparency = 0.0;
                std::cout << "Name: ";
                std::cin.ignore();
                std::getline(std::cin, inName);
                std::cout << "Calories: ";
                std::cin >> inCalories;
                std::cout << "Transparency: ";
                std::cin >> inTransparency;
                
                // Parameterized constructor
                HardCandy yourHardCandy(inName, inCalories, inTransparency);
                
                // Displays the hard candy variables
                yourHardCandy.display();
            }
                break;
            
            // Case for soft candy
            case 3:
            {
                // Variables and input
                std::string inName = "";
                double inCalories = 0.0;
                std::string inFlavor = "";
                std::cout << "Name: ";
                std::cin.ignore();
                std::getline(std::cin, inName);
                std::cout << "Calories: ";
                std::cin >> inCalories;
                std::cout << "Flavor: ";
                std::cin >> inFlavor;
                
                // Parameterized constructor
                SoftCandy yourSoftCandy(inName, inCalories, inFlavor);
                
                // Displays the soft candy variables
                yourSoftCandy.display();
            }
                break;
            // Case for invalid option
            default:
            {
                std::cout << "Invalid option. No candy for you!" << std::endl;
            }
                break;
        }
        
        // Prompting the user to go again
        std::cout << "Do you want to go again? (y/n): ";
        std::cin >> answer;
        
        // Determines the bool from if the user wants to go again
        if (answer == "n" || answer == "N")
        {
            again = false;
        }
        else
        {
            again = true;
        }
    }
    
    // If the user does not go again
    std::cout << "Quitting!" << std::endl;
    
    return 0;
}
