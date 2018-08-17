// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 4
// hopekim@usc.edu

#include <iostream>
int main()
{
    int userNum = 0;
    long long counter = 0;
    long long result = 0;
    
    while (userNum >= 0)
    {
        std::cout << "Enter a number to use to compute a factorial...\nEnter a negative number to quit: ";
        std::cin >> userNum;
        
        if (userNum >= 0)
        {
            counter = userNum;
            result = 1;
            
            while (counter > 0)
            {
                result *= counter;
                counter--;
            }
            std::cout << userNum << "! = " << result << std::endl;
        }
    }
    std::cout << "Quitting!" << std::endl;
    return 0;
}
