// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 8
// hopekim@usc.edu

#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    if (y == 0)
    {
        std::cout << "Cannot divide by zero!" << std::endl;
        return 0;
    }
    else
    {
        return x / y;
    }
}

int exp(int x, int y)
{
    int retVal = 1;
    for (int i = 0; i < y; i++)
    {
        retVal *= x;
    }
    
    return retVal;
}

int main()
{
    int first = 0;
    int second = 0;
    int option = 0;
    
    std::cout << "Calculator..." << std::endl;
    std::cout << "Enter first input: ";
    std::cin >> first;
    std::cout << "Enter second input: ";
    std::cin >> second;
    std::cout << "Choose an option:\n\t0: Quit\n\t1: Add\n\t2: Subtract\n\t3: Multiply\n\t4: Divide\n\t5: Exponent" << std::endl;
    std::cout << "Enter option: ";
    std::cin >> option;
    
    
    if (option == 0)
    {
        std::cout << "Quitting!" << std::endl;
    }
    else if (option == 1)
    {
        std::cout << first << " + " << second << " = " << add(first, second) << std::endl;
    }
    else if (option == 2)
    {
        std::cout << first << " - " << second << " = " << sub(first, second) << std::endl;
    }
    else if (option == 3)
    {
        std::cout << first << " * " << second << " = " << mul(first, second) << std::endl;
    }
    else if (option == 4)
    {
        std::cout << first << " / " << second << " = " << divide(first, second) << std::endl;
    }
    else if (option == 5)
    {
        std::cout << first << " ^ " << second << " = " << exp(first, second) << std::endl;
    }
    else
    {
        std::cout << "Error: Invalid option!" << std::endl;
    }
    
    return 0;
}
