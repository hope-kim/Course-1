// Hope Kim
// ITP 165, Fall 2017
// Homework 9
// hopekim@usc.edu

#pragma once
#include <string>
#include <vector>

class Hero
{
private:
    // Private member variables
    int mMaxHealth;
    int mCurrentHealth;
    std::string mName;
    std::vector<std::string> mPowers;
public:
    // Parameterized constructor
    Hero(std::string& inFileText);
    
    // Function: getName
    // Purpose: gets the name of the hero
    // Parameters: nothing
    // Returns: std::string of the name of the hero
    std::string getName();
    
    // Function: getHealth
    // Purpose: gets the current health of the hero
    // Parameters: nothing
    // Returns: int of the current health of the hero
    int getHealth();
    
    // Function: printPowers
    // Purpose: prints the powers of each hero
    // Parameters: nothing
    // Returns: nothing
    void printPowers();
    
    // Function: printHealth
    // Purpose: prints the current health of each hero
    // Parameters: nothing
    // Returns: nothing
    void printHealth();
};
