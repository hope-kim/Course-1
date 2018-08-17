// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 19
// hopekim@usc.edu

#pragma once
#include "Candy.h"

class HardCandy : public Candy
{
private:
    double mTransparency;
public:
    HardCandy(std::string inName, double inCals, double inTransparency);
    void display();
};
