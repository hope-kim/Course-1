// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 14
// hopekim@usc.edu

#include "person.h"
#include <iostream>
#include <string>

Person::Person()
{
    // std::cout << "Default constructor called!" << std::endl;
    mName = "";
    mAge = 0;
}
Person::Person(std::string& inName, int inAge)
{
    setName(inName);
    setAge(inAge);
}
// Setter for name
void Person::setName(std::string& inName)
{
    // If I wanted to do any bounds checking, here
    mName = inName;
}
// Setter for age
void Person::setAge(int inAge)
{
    if (inAge > 0 && inAge < 150)
    {
        mAge = inAge;
    }
}

// Getter for name
std::string Person::getName()
{
    return mName;
}
// Getter for age
int Person::getAge()
{
    return mAge;
}

void Person::printInfo()
{
    std::cout << "Name: " << mName << std::endl;
    std::cout << "Age: " << mAge << std::endl;
}
