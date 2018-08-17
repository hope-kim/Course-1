// Name
// ITP 165, Fall 2017
// Lab Practical 16
// hopekim@usc.edu

#include "StrLib.h"
#include <string>
#include <iostream>

int main()
{
    // user input
    std::string input;
    std::vector<std::string> words;
    double sum = 0;
    double average = 0.0;
    std::cout << "Please enter a list of words separated by commas: ";
    std::cin >> input;
    
    // splits line through commas
    words = strSplit(input, ',');
    
    // loops through all words
    for (int i = 0; i < words.size(); i++)
    {
        sum += (words[i]).size();
    }
    average = sum/words.size();
    std::cout << "The average word length was " << average << "." << std::endl;
    
    return 0;
}
