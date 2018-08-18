// Hope Kim
// ITP 165, Fall 2017
// Homework 10
// hopekim@usc.edu

#pragma once
#include <string>

// const ints indicating power
const int FLIGHT = 1;
const int GADGETS = 2;
const int INTELLIGENCE = 3;
const int LASER = 4;
const int NATIONALISM = 5;
const int STRENGTH = 6;

class Power
{

protected:
    // protected member variables
    std::string mDescription;
public:
    // Function: getDescription
    // Purpose: gets the description of the power
    // Parameters: nothing
    // Returns: std::string of the description of the power
    std::string getDescription();
    
    // Function: getID
    // Purpose: gets the ID, or the const int representation, of the power for each individual power
    // Parameters: nothing
    // Returns: int of the power from the const ints
    virtual int getID() = 0;
    
    // Function: use
    // Purpose: outputs a statement indicating which power is being used for each individual power
    // Parameters: nothing
    // Returns: nothing
    virtual void use() = 0;
    
    // Function: fight
    // Purpose: determines which power won, outputs a statement indicating which power won, and returns -1, 0, or 1 depending on if the power lost, tied, or won
    // Parameters: a Power* of the other power
    // Returns: int indicating if the current power lost, tied, or won
    virtual int fight(Power* other) = 0;
};

class FlightPower : public Power
{
public:
    // default constructor
    FlightPower();
    int getID();
    void use();
    int fight(Power* other);
};

class GadgetsPower : public Power
{
public:
    // default constructor
    GadgetsPower();
    int getID();
    void use();
    int fight(Power*);
};

class IntelligencePower : public Power
{
public:
    // default constructor
    IntelligencePower();
    int getID();
    void use();
    int fight(Power* other);
};

class LaserPower : public Power
{
public:
    // default constructor
    LaserPower();
    int getID();
    void use();
    int fight(Power* other);
};

class NationalismPower : public Power
{
public:
    // default constructor
    NationalismPower();
    int getID();
    void use();
    int fight(Power* other);
};

class StrengthPower : public Power
{
public:
    // default constructor
    StrengthPower();
    int getID();
    void use();
    int fight(Power* other);
};

// Function: powerFactory
// Purpose: uses the std::string to return a
// Parameters: std::string of which power is being used
// Returns: Power* of the power being used
Power* powerFactory(std::string& powerInput);
