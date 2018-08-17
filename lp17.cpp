// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 17
// hopekim@usc.edu

#include <iostream>
#include "Pyramid.h"

int main()
{
    const unsigned int bSize = 4;
    Pyramid myPyramid(bSize);
    
    Coordinate cArr[bSize];
    cArr[0].setX(0.0);
    cArr[0].setY(1.1);
    cArr[1].setX(2.0);
    cArr[1].setY(2.1);
    cArr[2].setX(3.0);
    cArr[2].setY(3.1);
    cArr[3].setX(4.0);
    cArr[3].setY(4.1);
    
    myPyramid.setBase(cArr, bSize);
    myPyramid.setHeight(3.14159);
    
    myPyramid.print();
    
    return 0;
}
