// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 12
// hopekim@usc.edu

#include <iostream>
#include <cmath>


// Structure for coordinates
struct Coordinate
{
    double x;
    double y;
};

// Function: printCoord
// Purpose: outputs the coordinates
// Parameters: structure with coordinate's x and y
// Returns: nothing
void printCoord(Coordinate& item)
{
    std::cout << "(" << item.x << ", " << item.y << ")" << std::endl;
}

// Function: calcDist
// Purpose: calculates the distance between the two coordinates
// Parameters: two structure with the coordinates' xs and ys
// Returns: double retVal

double calcDist (Coordinate& c1, Coordinate& c2)
{
    double retVal = 0.0;
    retVal += std::pow((c1.x - c2.x), 2.0);
    retVal += std::pow((c1.y - c2.y), 2.0);
    retVal = std::sqrt(retVal);
    return retVal;
}

int main()
{
    // Variables of type "Coordinate"
    Coordinate first;
    Coordinate second;
    
    // Read in the first coordinate values
    std::cout << "First x: ";
    std::cin >> first.x;
    std::cout << "First y: ";
    std::cin >> first.y;
    
    // Read in the second coordinate values
    std::cout << "Second x: ";
    std::cin >> second.x;
    std::cout << "Second y: ";
    std::cin >> second.y;
    
    // Displays the two coordinates
    std::cout << "First: ";
    printCoord(first);
    std::cout << "Second: ";
    printCoord(second);
    
    // Displays distance
    std::cout << "Distance: " << calcDist(first, second) << std::endl;
    return 0;
}
