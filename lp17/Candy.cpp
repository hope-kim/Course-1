// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 17
// hopekim@usc.edu

#include "Candy.h"
#include <iostream>

Candy::Candy()
{
    mName = "";
    mCalories = 0.0;
}
Candy::Candy(std::string inName, double inCals)
{
    mName = inName;
    mCalories = inCals;
}
void Candy::display()
{
    std::cout << mName << " : " << mCalories << std::endl;
}
