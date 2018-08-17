// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 19
// hopekim@usc.edu


#pragma once
#include <string>

class Candy
{
protected:
    std::string mName;
    double mCalories;
public:
    Candy();
    Candy(std::string inName, double inCals);
    void display();
};
