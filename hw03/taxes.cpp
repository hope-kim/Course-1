// Hope Kim
// ITP 165, Fall 2017
// Homework 3
// hopekim@usc.edu

#include <iostream>
#include <string>

int main()
{
    // Array for months
    const int NUM_MONTHS = 12;
    std::string months[NUM_MONTHS] =
    {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December",
    };
    
    // Array for indices for the user unput incomes for each months
    int income[NUM_MONTHS] =
    {
        0,
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
        9,
        10,
        11,
    };
    
    // Array for maximum income for each tax bracket
    const int NUM_MAX_INCOME = 6;
    int maxIncome[NUM_MAX_INCOME] =
    {
        9325,
        28625,
        53950,
        99750,
        225050,
        1700,
    };
    
    // Array for tax percentages in each tax brackets
    const int NUM_TAX_BRACKET = 7;
    double tax[NUM_TAX_BRACKET] =
    {
        0.1,
        0.15,
        0.25,
        0.28,
        0.33,
        0.35,
        0.396,
    };
    
    // User input for monthly incomes
    std::cout << "Enter income for January: ";
    std::cin >> income[0];
    std::cout << "Enter income for February: ";
    std::cin >> income[1];
    std::cout << "Enter income for March: ";
    std::cin >> income[2];
    std::cout << "Enter income for April: ";
    std::cin >> income[3];
    std::cout << "Enter income for May: ";
    std::cin >> income[4];
    std::cout << "Enter income for June: ";
    std::cin >> income[5];
    std::cout << "Enter income for July: ";
    std::cin >> income[6];
    std::cout << "Enter income for August: ";
    std::cin >> income[7];
    std::cout << "Enter income for September: ";
    std::cin >> income[8];
    std::cout << "Enter income for October: ";
    std::cin >> income[9];
    std::cout << "Enter income for November: ";
    std::cin >> income[10];
    std::cout << "Enter income for December: ";
    std::cin >> income[11];
    
    std::cout << "******************************" << std::endl;
    
    // Total income output
    double totalIncome = income[0]+income[1]+income[2]+income[3]+income[4]+income[5]+income[6]+income[7]+income[8]+income[9]+income[10]+income[11];
    std::cout << "Your total income is $" << totalIncome << "." << std::endl;
    
    // Tax bracket 1
    if (totalIncome >= 0 && totalIncome <= 9325)
    {
        double taxOne = totalIncome*tax[0];
        double totalTax = taxOne;
        double taxRate = (totalTax/totalIncome)*100;
        
        std::cout << "You owe taxes in the amount of $" << totalTax << "." << std::endl;
        std::cout << "Your effective tax rate is " << taxRate << "%." << std::endl;
    }
    
    // Tax bracket 2
    if (totalIncome >= 9326 && totalIncome < 37950)
    {
        double taxTwo = (totalIncome-maxIncome[0])*tax[1];
        double totalTax = 932.5 + taxTwo;
        double taxRate = (totalTax/totalIncome)*100;
        
        std::cout << "You owe taxes in the amount of $" << totalTax << "." << std::endl;
        std::cout << "Your effective tax rate is " << taxRate << "%." << std::endl;
    }
    
    // Tax bracket 3
    if (totalIncome >= 37950 && totalIncome < 91900)
    {
        double taxThree = (totalIncome-maxIncome[1])*tax[2];
        double totalTax = 5226.25 + taxThree;
        double taxRate = (totalTax/totalIncome)*100;
        
        std::cout << "You owe taxes in the amount of $" << totalTax << "." << std::endl;
        std::cout << "Your effective tax rate is " << taxRate << "%." << std::endl;
    }
    
    // Tax bracket 4
    if (totalIncome >= 91900 && totalIncome < 191650)
    {
        double taxFour = (totalIncome-maxIncome[2])*tax[3];
        double totalTax = 18713.75 + taxFour;
        double taxRate = (totalTax/totalIncome)*100;
        
        std::cout << "You owe taxes in the amount of $" << totalTax << "." << std::endl;
        std::cout << "Your effective tax rate is " << taxRate << "%." << std::endl;
    }
    
    // Tax bracket 5
    if (totalIncome >= 191650 && totalIncome < 416700)
    {
        double taxFive = (totalIncome-maxIncome[3])*tax[4];
        double totalTax = 46643.75 + taxFive;
        double taxRate = (totalTax/totalIncome)*100;
        
        std::cout << "You owe taxes in the amount of $" << totalTax << "." << std::endl;
        std::cout << "Your effective tax rate is " << taxRate << "%." << std::endl;
    }
    
    // Tax bracket 6
    if (totalIncome >= 416700 && totalIncome < 418400)
    {
        double taxSix = (totalIncome-maxIncome[4])*tax[5];
        double totalTax = 120910.25 + taxSix;
        double taxRate = (totalTax/totalIncome)*100;
        
        std::cout << "You owe taxes in the amount of $" << totalTax << "." << std::endl;
        std::cout << "Your effective tax rate is " << taxRate << "%." << std::endl;
    }
    
    // Tax bracket 7
    if (totalIncome >= 418400)
    {
        double taxSeven = (totalIncome-maxIncome[5])*tax[6];
        double totalTax = 121505.25 + taxSeven;
        double taxRate = (totalTax/totalIncome)*100;
        
        std::cout << "You owe taxes in the amount of $" << totalTax << "." << std::endl;
        std::cout << "Your effective tax rate is " << taxRate << "%." << std::endl;
    }
    
    return 0;
}
