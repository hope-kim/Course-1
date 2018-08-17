// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 13
// hopekim@usc.edu

#include <iostream>
#include <cmath>


// Class for coordinates
class myCoordinate
{
// Private member variables
private:
    double mX;
    double mY;
    
// Public functions
public:
    // Function: setX
    // Purpose: sets the x coordinate of the private member variable mX
    // Parameters: double inX
    // Returns: nothing
    void setX(double inX)
    {
        mX = inX;
    }
    // Function: setY
    // Purpose: sets the y coordinate of the private member variable mY
    // Parameters: double inY
    // Returns: nothing
    void setY(double inY)
    {
        mY = inY;
    }
    // Function: getX
    // Purpose: returns the x coordinate of the private member variable mX
    // Parameters: nothing
    // Returns: double mX
    double getX()
    {
        return mX;
    }
    // Function: getY
    // Purpose: returns the y coordinate of the private member variable mY
    // Parameters: nothing
    // Returns: double mY
    double getY()
    {
        return mY;
    }
};

// Function: calcDist
// Purpose: calculates the distance between the two coordinates
// Parameters: two variables of type myCoordinate with the coordinates' xs and ys
// Returns: double retVal
double calcDist (myCoordinate& c1, myCoordinate& c2)
{
    double retVal = 0.0;
    retVal += std::pow((c1.getX() - c2.getX()), 2.0);
    retVal += std::pow((c1.getY() - c2.getY()), 2.0);
    retVal = std::sqrt(retVal);
    return retVal;
}

// Function: printCoord
// Purpose: outputs the coordinates
// Parameters: variable of type myCoordinate with coordinates x and y
// Returns: nothing
void printCoord(myCoordinate& item)
{
    std::cout << "(" << item.getX() << ", " << item.getY() << ")";
}
// Function: printDistance
// Purpose: prints the distance between the two coordinates
// Parameters: two variables of type myCoordinatewith the coordinates' xs and ys
// Returns: nothing
void printDistance(myCoordinate& c1, myCoordinate& c2)
{
    std::cout << calcDist(c1, c2);
}

int main()
{
    // Variables of type "myCoordinate"
    myCoordinate first;
    myCoordinate second;
    
    // Variables for coordinate input
    double inX = 0.0;
    double inY = 0.0;
    
    // Read in the first coordinate x value
    std::cout << "First x: ";
    std::cin >> inX;
    first.setX(inX);
    
    // Read in the first coordinate y value
    std::cout << "First y: ";
    std::cin >> inY;
    first.setY(inY);
    
    // Read in the second coordinate x value
    std::cout << "Second x: ";
    std::cin >> inX;
    second.setX(inX);
    
    // Read in the second coordinate y value
    std::cout << "Second y: ";
    std::cin >> inY;
    second.setY(inY);
    
    // Outputs the coordinates and the distance between the coordinates
    std::cout << "The distance between ";
    printCoord(first);
    std::cout << " and ";
    printCoord(second);
    std::cout << " is ";
    printDistance(first, second);
    std::cout << "." << std::endl;
    
    return 0;
}
