// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 17
// hopekim@usc.edu

#include "HardCandy.h"
#include <iostream>

HardCandy::HardCandy(std::string inName, double inCals, double inTransparency)
{
    mName = inName;
    mCalories = inCals;
    mTransparency = inTransparency;
}
void HardCandy::display()
{
    std::cout << "Name: " << mName << std::endl;
    std::cout << "\tCalories: " << mCalories << std::endl;
    std::cout << "\tTransparency: " << mTransparency << std::endl;
}
