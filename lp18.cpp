// Name
// ITP 165, Fall 2017
// Lab Practical 18
// hopekim@usc.edu

#include "StrLib.h"
#include <string>
#include <iostream>

int main()
{
    std::string input;
    std::vector<std::string> words;
    double sum = 0;
    double average = 0.0;
    std::cout << "Please enter a list of words separated by commas: ";
    std::cin >> input;
    words = strSplit(input, ',');
    
    for (int i = 0; i < words.size(); i++)
    {
        sum += (words[i]).size();
    }
    average = sum/words.size();
    std::cout << "The average word length was " << average << "." << std::endl;
    
    return 0;
}
