// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 5
// hopekim@usc.edu

#include <iostream>
#include <string>
int main()
{
    // const variable for my name
    const int NAME_SIZE = 4;
    
    // make name array
    std::string name [NAME_SIZE];
    name[0] = "H";
    name[1] = "O";
    name[2] = "P";
    name[3] = "E";
    
    // make storage array for user input
    std::string poem[NAME_SIZE];
    
    // asking for user input
    std::cout << "Let's make a name poem!" << std::endl;
    
    // loops through name
    for (int i = 0; i < NAME_SIZE; i++)
    {
        std::cout << "What word describes you that starts with a \"" << name[i] << "\": ";
        std::cin >> poem[i];
    }
    
    std::cout << std::endl;
    
    // output
    for (int i = 0; i < NAME_SIZE; i++)
    {
        std::cout << name[i];
    }
    
    for (int i = 0; i < NAME_SIZE; i++)
    {
        std::cout << "\n" << name[i] << " is for " << poem[i];
    }
    
    std::cout << std::endl;
    
    return 0;
}
