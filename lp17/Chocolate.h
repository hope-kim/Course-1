// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 17
// hopekim@usc.edu

#pragma once
#include "Candy.h"

class Chocolate : public Candy
{
private:
    double mPerCocoa;
public:
    Chocolate(std::string inName, double inCals, double inPerC);
    void display();
};
