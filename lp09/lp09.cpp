// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 9
// hopekim@usc.edu

#include <iostream>
#include <string>
#include <fstream>

// toUpper function to capitalize contents of file
std::string toUpper(std::string& line)
{
    // string to hold final capitalized final
    std::string result = "";
    
    // loops through the entire file
    for (int i = 0; i < line.size(); i++)
    {
        // case for lowercase letters
        if (line[i] >= 'a' && line[i] <= 'z')
        {
            result += line[i] - 32;
        }
        
        // case for uppercase letters
        else
        {
            result += line[i];
        }
    }
    return result;
}

int main()
{
    // variables to hold user input
    std::string fileInput = "";
    std::string fileOutput = "";
    
    // asking for user input
    std::cout << "Enter the name of the text file to capitalize: ";
    std::cin >> fileInput;
    std::cout << "Enter the name of the output file: ";
    std::cin >> fileOutput;
    
    // filestreams
    std::ifstream input(fileInput);
    std::ofstream output(fileOutput);
    
    // validates file
    if (input.is_open())
    {
        
        // goes through entire file
        while (!input.eof())
        {
            // stores entire file
            std::string line;
            std::getline(input, line);

            // writes to output file
            output << toUpper(line) << std::endl;
        }
    }
    
    // fail case
    else
    {
        std::cout << "Error: File not found :(" << std::endl;
    }
    
    // final output
    std::cout << "The file \"" << fileOutput << "\" now contains a completely uppercase version of the contents of the file \"" << fileInput << "\"." << std::endl;
    
    return 0;
}
