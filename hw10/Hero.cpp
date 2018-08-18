// Hope Kim
// ITP 165, Fall 2017
// Homework 10
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
    // Setting the mPowers using strSplit and tempPowers
    std::vector<std::string> tempPowers;
    tempPowers = strSplit(characteristics[1], ',');
    for (int i = 0; i < tempPowers.size(); i++)
    {
        mPowers.push_back(powerFactory(tempPowers[i]));
    }
    // Setting the mCurrentHealth and mMaxHealth using std::stoi
    std::string healthString = characteristics[2];
    mCurrentHealth = std::stoi(characteristics[2]);
    mMaxHealth = std::stoi(characteristics[2]);
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
        std::cout << mPowers[i]->getDescription() << std::endl;
    }
}

void Hero::printHealth()
{
    std::cout << getName() << " has the following health: " << getHealth() << std::endl;
}

Power* Hero::useRandomPower()
{
    // Using a random index from 0 to the mPowers vector's size - 1 to create a random Power*
    Power* randomPower = mPowers[std::rand() % mPowers.size()];
//    std::cout << randomPower->getDescription() << std::endl;
    // if the randomPower is flight
    if (randomPower->getDescription() == "Flight")
    {
        FlightPower power;
        // I commented this out because it is redundant: power.use();
    }
    // if the randomPower is flight
    if (randomPower->getDescription() == "Gadgets")
    {
        GadgetsPower power;
        // I commented this out because it is redundant: power.use();
    }
    // if the randomPower is flight
    if (randomPower->getDescription() == "Intelligence")
    {
        IntelligencePower power;
        // I commented this out because it is redundant: power.use();
    }
    // if the randomPower is flight
    if (randomPower->getDescription() == "Laser")
    {
        LaserPower power;
	// I commented this out because it is redundant: power.use();
    }
    // if the randomPower is flight
    if (randomPower->getDescription() == "Nationalism")
    {
        NationalismPower power;
	// I commented this out because it is redundant: power.use();
    }
    // if the randomPower is flight
    if (randomPower->getDescription() == "Strength")
    {
        StrengthPower power;
	// I commented this out because it is redundant: power.use();
    }
    
    return randomPower;
}

void Hero::takeDamage()
{
    mCurrentHealth -= 1;
}

void Hero::resetHealth()
{
    mCurrentHealth = mMaxHealth;
}
