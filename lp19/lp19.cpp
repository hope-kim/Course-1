// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 19
// hopekim@usc.edu

#include <iostream>
#include <string>
#include <vector>
#include "animals.h"

int main()
{
    unsigned int userInput = 0;
    
    // Vector of options
    std::vector<Animal*> animalList;
    animalList.push_back(new Fly);
    animalList.push_back(new Spider);
    animalList.push_back(new Bird);
    animalList.push_back(new Cat);
    animalList.push_back(new Dog);
    animalList.push_back(new Cow);
    animalList.push_back(new Horse);
    
    // Vector of what the lady swallowed
    std::vector<Animal*> ladyStomach;
    
    // User interface
    do
    {
        std::cout << "What did the lady swallow?" << std::endl;
        // Option list
        std::cout << "\t0: quit to sing the song" << std::endl;
        for (int i = 0; i < animalList.size(); i++)
        {
            std::cout << "\t" << (i+1) << ": " << animalList[i]->getType() <<std::endl;
        }
        std::cout << "> ";
        std::cin >> userInput;
        
        // Check for error
        if (userInput == 0)
        {
            std::cout << "Here comes the song!" << std::endl << std::endl;
            break;
        }
        else if (userInput <= animalList.size())
        {
            ladyStomach.push_back(animalList[userInput-1]);
        }
        else
        {
            std::cout << "Error: Bad input, try again... " << std::endl;
        }
        
    }
    while (userInput != 0);
    
    // Sing the song
    for (int i = 0; i < ladyStomach.size(); i++)
    {
        std::cout << "There was an old lady who swallowed a " << ladyStomach[i]->getType() << std::endl;
        
        if (i > 0)
        {
            std::cout << ladyStomach[i]->getVerse() << std::endl;
        }
        for (int j = i; j >= 0; j--)
        {
            if (j == 0)
            {
                std::cout << ladyStomach[j]->getVerse() << std::endl;
                std::cout << "... perhaps she'll die!" << std::endl << std::endl;
            }
            else
            {
                std::cout << ladyStomach[j]->interact(ladyStomach[j-1]) << std::endl;
            }
        }
    }
    
    return 0;
}
