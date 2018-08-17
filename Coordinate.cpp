// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 17
// hopekim@usc.edu

#include "Coordinate.h"
#include <iostream>
#include <cmath>

Coordinate::Coordinate()
{
	mXCoord = 0.0;
	mYCoord = 0.0;
}

Coordinate::Coordinate(double x, double y)
{
	mXCoord = x;
	mYCoord = y;
}

void Coordinate::setX(double inX)
{
	mXCoord = inX;
}

void Coordinate::setY(double inY)
{
	mYCoord = inY;
}

double Coordinate::getX()
{
	return mXCoord;
}

double Coordinate::getY()
{
	return mYCoord;
}

void Coordinate::print()
{
	std::cout << "(" << mXCoord << "," << mYCoord << ")";
}

double Coordinate::calcDist(Coordinate* p1)
{
	double dist = std::sqrt((std::pow((mXCoord - p1->getX()), 2) + std::pow((mYCoord - p1->getY()), 2)));
	return dist;
}
