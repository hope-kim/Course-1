// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 11
// hopekim@usc.edu

#include <iostream>
#include <string>
#include <fstream>

std::string toUpper(std::string& line)
{
    std::string result = "";
    for (int i = 0; i < line.size(); i++)
    {
        if (line[i] >= 'a' && line[i] <= 'z')
        {
            result += line[i] - 32;
        }
        else
        {
            result += line[i];
        }
    }
    return result;
}

int main()
{
    std::cout << "Enter the name of the text file to capitalize: ";

    std::string fileInput = "";
    std::string fileOutput = "";
    std::cin >> fileInput;
    std::cout << "Enter the name of the output file: ";
    std::cin >> fileOutput;

    std::ifstream input(fileInput);
    std::ofstream output(fileOutput);

    if (input.is_open())
    {
        while (!input.eof())
        {
            std::string line;
            std::getline(input, line);

            output << toUpper(line) << std::endl;
        }
    }
    else
    {
        std::cout << "Error: File not found :(" << std::endl;
    }

    std::cout << "The file \"" << fileOutput << "\" now contains a completely uppercase version of the contents of the file \"" << fileInput << "\"." << std::endl;
    
    return 0;
}



