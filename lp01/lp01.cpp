// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 1
// hopekim@usc.edu

#include <iostream>
#include <string>
int main()
{
    // variables to hold user input
    std::string animal;
    std::string verb;
    int whole = 0;
    
    // asking for user input
    std::cout << "Please give me an animal (in plural form): ";
    std::cin >> animal;
    std::cout << "Please give me a verb ending in -ing: ";
    std::cin >> verb;
    std::cout << "Please give me a whole number: ";
    std::cin >> whole;
    
    // calculations
    int total = whole*2;
    
    // output
    std::cout << "The " << whole << " pairs of " << animal << " go " << verb << "." << std::endl;
    std::cout << "That means there was a total of " << total << " " << animal << "." << std::endl;
    
    return 0;
}
