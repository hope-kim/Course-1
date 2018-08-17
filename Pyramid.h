// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 17
// hopekim@usc.edu

#pragma once
#include "Coordinate.h"

class Pyramid
{
private:
    Coordinate* mCoordinates;
    double mHeight;
    unsigned int mSize;
public:
    Pyramid(unsigned int inSize);
    void setBase(Coordinate base[], unsigned int inSize);
    void setHeight(double inHeight);
    Coordinate* getBase();
    double getHeight();
    void print();
    ~Pyramid();
};

