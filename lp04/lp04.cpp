// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 4
// hopekim@usc.edu

#include <iostream>
int main()
{
    // variables to hold user input and calculations
    int userNum = 0;
    long long counter = 0;
    long long result = 0;
    
    // loops until negative number
    while (userNum >= 0)
    {
        // asking for user input
        std::cout << "Enter a number to use to compute a factorial...\nEnter a negative number to quit: ";
        std::cin >> userNum;
        
        // temp variables for calculations
        counter = userNum;
        result = 1;
            
        // calculates factorial
        while (counter > 0)
        {
            result *= counter;
            counter--;
        }
        
        // output
        std::cout << userNum << "! = " << result << std::endl;
    }
    
    // quit statement
    std::cout << "Quitting!" << std::endl;
    return 0;
}
