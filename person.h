// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 16
// hopekim@usc.edu

#pragma once
#include <string>

class Person
{

// private member variables
private:
    std::string mName;
    int mAge;

// public functions
public:
    // Default constructor
    Person();
    // Parameterized constructor
    Person(std::string& inName, int inAge);
    // Setter for name
    void setName(std::string& inName);
    // Setter for age
    void setAge(int inAge);
    // Getter for name
    std::string getName();
    // Getter for age
    int getAge();
    // Printer
    void printInfo(); 
};
