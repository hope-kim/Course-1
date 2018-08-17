// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 2
// hopekim@usc.edu

#include <iostream>
int main()
{
    int fave;
    
    std::cout << "Please tell me your favorite number: ";
    std::cin >> fave;
    
    if (fave % 2 == 0)
    {
        std::cout << "Your number is divisible by 2!" << std::endl;
    }
    if (fave % 3 == 0)
    {
        std::cout << "Your number is divisible by 3!" << std::endl;
    }
    if (fave % 5 == 0)
    {
        std::cout << "Your number is divisible by 5!" << std::endl;
    }
    if (fave % 7 == 0)
    {
        std::cout << "Your number is divisible by 7!" << std::endl;
    }
    if (fave % 11 == 0)
    {
        std::cout << "Your number is divisible by 11!" << std::endl;
    }
    if (fave % 13 == 0)
    {
        std::cout << "Your number is divisible by 13!" << std::endl;
    }
    
    return 0;
}
