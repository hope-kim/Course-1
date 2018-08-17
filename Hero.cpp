// Hope Kim
// ITP 165, Fall 2017
// Homework 9
// hopekim@usc.edu

#include "Hero.h"
#include "StrLib.h"
#include <fstream>
#include <iostream>

// Parameterized constructor
Hero::Hero(std::string& inFileText)
{
    // Vector to hold the characteristics of each hero
    std::vector<std::string> characteristics;
    // Using strSplit to split the characteristics
    characteristics = strSplit(inFileText, '|');
    // Setting the mName
    mName = characteristics[0];
    // Setting the mPowers using strSplit
    mPowers = strSplit(characteristics[1], ',');
    // Setting the mCurrentHealth using std::stoi
    mCurrentHealth = std::stoi(characteristics[2]);
}

std::string Hero::getName()
{
    return mName;
}

int Hero::getHealth()
{
    return mCurrentHealth;
}

void Hero::printPowers()
{
    std::cout << getName() << " has the following powers:" << std::endl;
    for (int i = 0; i < mPowers.size(); i++)
    {
        std::cout << mPowers[i] << std::endl;
    }
}

void Hero::printHealth()
{
    std::cout << getName() << " has the following health: " << getHealth() << std::endl;
}
