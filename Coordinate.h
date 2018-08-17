// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 17
// hopekim@usc.edu

#pragma once

class Coordinate
{
public:
	// Constructors
	Coordinate();
	Coordinate(double x, double y);

	// Getters
	double getX();
	double getY();

	// Setters
	void setX(double inX);
	void setY(double inY);

	// Display
	void print();
	double calcDist(Coordinate* p1);

private:
	double mXCoord;
	double mYCoord;
};

