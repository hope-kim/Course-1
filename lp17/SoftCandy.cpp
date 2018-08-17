// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 17
// hopekim@usc.edu

#include "SoftCandy.h"
#include <iostream>

SoftCandy::SoftCandy(std::string inName, double inCals, std::string inFlavor)
{
    mName = inName;
    mCalories = inCals;
    mFlavor = inFlavor;
}
void SoftCandy::display()
{
    std::cout << "Name: " << mName << std::endl;
    std::cout << "\tCalories: " << mCalories << std::endl;
    std::cout << "\tFlavor: " << mFlavor << std::endl;
}
