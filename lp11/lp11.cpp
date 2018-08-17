// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 11
// hopekim@usc.edu

#include <iostream>
#include <string>

int main()
{
    // Pointer to the user's string
    std::string* pointer = nullptr;
    // Initializing string output to the empty string
    std::string output = "";
    // Unsigned int initialized to 0
    unsigned int userInput = 0;
    
    // Prompt user for how many lines
    std::cout << "How many lines do you have: ";
    // User input for how many lines
    std::cin >> userInput;
    
    std::cin.ignore();
    // For loop for dynamic memory allocation
    for (int i = 0; i < userInput; i++)
    {
        // Dynamically create a new std::string
        pointer = new std::string;
        // Prompt user for input
        std::cout << "Input: ";
        // User input
        std::getline(std::cin, *pointer);
        // Append output
        output += *pointer + "\n";
        // Delete the pointer
        delete pointer;
        // Set pointer to nullptr
        pointer = nullptr;
    }
    
    // Output the final result
    std::cout << output << std::endl;
    
    return 0;
}
