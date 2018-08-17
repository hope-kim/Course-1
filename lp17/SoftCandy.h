// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 17
// hopekim@usc.edu

#pragma once
#include "Candy.h"
#include <string>

class SoftCandy : public Candy
{
private:
    std::string mFlavor;
public:
    SoftCandy(std::string inName, double inCals, std::string inFlavor);
    void display();
};
