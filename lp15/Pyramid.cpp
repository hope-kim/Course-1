// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 15
// hopekim@usc.edu

#include <stdio.h>
#include "Pyramid.h"
#include <iostream>

Pyramid::Pyramid(unsigned int inSize)
{
    mSize = inSize;
    mCoordinates = new Coordinate[inSize];
    double mHeight = 0.0;
    
}
void Pyramid::setBase(Coordinate inBase[], unsigned int inSize)
{
    mCoordinates = new Coordinate[inSize];
    for (unsigned int i = 0; i < inSize; i ++)
    {
        mCoordinates[i] = inBase[i];
    }
}
void Pyramid::setHeight(double inHeight)
{
    mHeight = inHeight;
}
Coordinate* Pyramid::getBase()
{
    return mCoordinates;
}
double Pyramid::getHeight()
{
    return mHeight;
}
void Pyramid::print()
{
    std::cout << "The base points are: " << std::endl;
    for (int i = 0; i < mSize; i++)
    {
        mCoordinates[i].print();
        std::cout << std::endl;
    }
    std::cout << "The height is: " << mHeight << std::endl;
}
Pyramid::~Pyramid()
{
    delete[] mCoordinates;
    mSize = 0;
}
