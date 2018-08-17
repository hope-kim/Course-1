// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 3
// hopekim@usc.edu

#include <iostream>
int main()
{
    double first = 0.0;
    double second = 0.0;
    double option = 0.0;
    
    std::cout << "Calculator..." << std::endl;
    std::cout << "Enter first input: ";
    std::cin >> first;
    std::cout << "Enter second input: ";
    std::cin >> second;
    std::cout << "Choose an option:\n\t1: Add\n\t2: Subtract\n\t3: Multiply\n\t4: Divide" << std::endl;
    std::cout << "Enter option: ";
    std::cin >> option;
    
    if (option == 1.0)
    {
        std::cout << first << " + " << second << " = " << first+second << std::endl;
    }
    else if (option == 2.0)
    {
        std::cout << first << " - " << second << " = " << first-second << std::endl;
    }
    else if (option == 3.0)
    {
        std::cout << first << " * " << second << " = " << first*second << std::endl;
    }
    else if (option == 4.0)
    {
      
        if (second == 0.0)
        {
            std::cout << "Cannot divide by zero!" << std::endl;
        }
        else
        {
        std::cout << first << " / " << second << " = " << first/second << std::endl;
        }
    }
    else
    {
        std::cout << "Error: Invalid option!" << std::endl;
    }
    
    return 0;
}
