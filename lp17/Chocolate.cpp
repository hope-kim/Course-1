// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 17
// hopekim@usc.edu

#include "Chocolate.h"
#include <iostream>

Chocolate::Chocolate(std::string inName, double inCals, double inPerC)
{
    mName = inName;
    mCalories = inCals;
    mPerCocoa = inPerC;
}
void Chocolate::display()
{
    std::cout << "Name: " << mName << std::endl;
    std::cout << "\tCalories: " << mCalories << std::endl;
    std::cout << "\t% cocoa: " << mPerCocoa << "%" << std::endl;
}
