// Hope Kim
// ITP 165, Fall 2017
// Homework 10
// hopekim@usc.edu

#include "Powers.h"
#include <iostream>

std::string Power::getDescription()
{
    return mDescription;
}
FlightPower::FlightPower()
{
    mDescription = "Flight";
}
int FlightPower::getID()
{
    return FLIGHT;
}
void FlightPower::use()
{
    std::cout << "Flying!" << std::endl;
}
int FlightPower::fight(Power* other)
{
    // cases for if flight is the current power
    switch(other->getID())
    {
        case 1:
            std::cout << "FLIGHT ties." << std::endl;
            return 0;
            break;
        case 2:
            std::cout << "GADGET WINS: Rope snares make it hard to fly away." << std::endl;
            return -1;
            break;
        case 3:
            std::cout << "FLIGHT WINS: They just fly away out of range of the attack." << std::endl;
            return 1;
            break;
        case 4:
            std::cout << "LASER WINS: They have a good sniper shot, so flying doesn't help." << std::endl;
            return -1;
            break;
        case 5:
            std::cout << "FLIGHT WINS: They just fly away out of range of the attack." << std::endl;
            return 1;
            break;
        default:
            std::cout << "FLIGHT WINS: They just fly away out of range of the attack." << std::endl;
            return 1;
            break;
    }
}
GadgetsPower::GadgetsPower()
{
    mDescription = "Gadgets";
}
int GadgetsPower::getID()
{
    return GADGETS;
}
void GadgetsPower::use()
{
    std::cout << "Using gadgets!" << std::endl;
}
int GadgetsPower::fight(Power* other)
{
    // cases for if gadgets is the current power
    switch(other->getID())
    {
        case 1:
            std::cout << "GADGET WINS: Rope snares make it hard to fly away." << std::endl;
            return 1;
            break;
        case 2:
            std::cout << "GADGET ties." << std::endl;
            return 0;
            break;
        case 3:
            std::cout << "INTELLIGENCE WINS: Brains beat the gadgets." << std::endl;
            return -1;
            break;
        case 4:
            std::cout << "GADGET WINS: Gadgets beat the lasers." << std::endl;
            return 1;
            break;
        case 5:
            std::cout << "GADGET WINS: Gadgets over nationalism." << std::endl;
            return 1;
            break;
        default:
            std::cout << "STRENGTH WINS: Strength was too powerful for the gadgets." << std::endl;
            return -1;
            break;
    }
}
IntelligencePower::IntelligencePower()
{
    mDescription = "Intelligence";
}
int IntelligencePower::getID()
{
    return INTELLIGENCE;
}
void IntelligencePower::use()
{
    std::cout << "Superhuman intelligence!" << std::endl;
}
int IntelligencePower::fight(Power* other)
{
    // cases for if intelligence is the current power
    switch(other->getID())
    {
        case 1:
            std::cout << "FLIGHT WINS: Flew right over your head." << std::endl;
            return -1;
            break;
        case 2:
            std::cout << "INTELLIGENCE WINS: Brains beat the gadgets." << std::endl;
            return 1;
            break;
        case 3:
            std::cout << "INTELLIGENCE ties." << std::endl;
            return 0;
            break;
        case 4:
            std::cout << "LASER WINS: Lasers cut through brains." << std::endl;
            return -1;
            break;
        case 5:
            std::cout << "INTELLIGENCE WINS: Intelligence over nationalism." << std::endl;
            return 1;
            break;
        default:
            std::cout << "INTELLIGENCE WINS: The pen is mightier than the sword." << std::endl;
            return 1;
            break;
    }
}
LaserPower::LaserPower()
{
    mDescription = "Laser";
}
int LaserPower::getID()
{
    return LASER;
}
void LaserPower::use()
{
    std::cout << "Lasers!" << std::endl;
}
int LaserPower::fight(Power* other)
{
    // cases for if laser is the current power
    switch(other->getID())
    {
        case 1:
            std::cout << "LASER WINS: They have a good sniper shot, so flying doesn't help." << std::endl;
            return 1;
            break;
        case 2:
            std::cout << "GADGET WINS: Gadgets beat the lasers." << std::endl;
            return -1;
            break;
        case 3:
            std::cout << "LASER WINS: Lasers cut through brains." << std::endl;
            return 1;
            break;
        case 4:
            std::cout << "LASER ties." << std::endl;
            return 0;
            break;
        case 5:
            std::cout << "LASER WINS: Lasers over nationalism." << std::endl;
            return 1;
            break;
        default:
            std::cout << "STRENGTH WINS: Strength was too strong for lasers." << std::endl;
            return -1;
            break;
    }
}
NationalismPower::NationalismPower()
{
    mDescription = "Nationalism";
}
int NationalismPower::getID()
{
    return NATIONALISM;
}
void NationalismPower::use()
{
    std::cout << "Nationalism!" << std::endl;
}
int NationalismPower::fight(Power* other)
{
    // cases for if nationalism is the current power
    switch(other->getID())
    {
        case 1:
            std::cout << "FLIGHT WINS: They just fly away out of range of the attack." << std::endl;
            return -1;
            break;
        case 2:
            std::cout << "GADGET WINS: Gadgets over nationalism." << std::endl;
            return -1;
            break;
        case 3:
            std::cout << "INTELLIGENCE WINS: Intelligence over nationalism." << std::endl;
            return -1;
            break;
        case 4:
            std::cout << "LASER WINS: Lasers over nationalism." << std::endl;
            return -1;
            break;
        case 5:
            std::cout << "NATIONALISM ties." << std::endl;
            return 0;
            break;
        default:
            std::cout << "STRENGTH WINS: Strength was too strong for nationalism." << std::endl;
            return -1;
            break;
    }
}
StrengthPower::StrengthPower()
{
    mDescription = "Strength";
}
int StrengthPower::getID()
{
    return STRENGTH;
}
void StrengthPower::use()
{
    std::cout << "Strength!" << std::endl;
}
int StrengthPower::fight(Power* other)
{
    // cases for if strength is the current power
    switch(other->getID())
    {
        case 1:
            std::cout << "FLIGHT WINS: They just fly away out of range of the attack." << std::endl;
            return -1;
            break;
        case 2:
            std::cout << "STRENGTH WINS: Strength was too powerful for the gadgets." << std::endl;
            return 1;
            break;
        case 3:
            std::cout << "INTELLIGENCE WINS: The pen is mightier than the sword." << std::endl;
            return -1;
            break;
        case 4:
            std::cout << "STRENGTH WINS: Strength was too strong for lasers." << std::endl;
            return 1;
            break;
        case 5:
            std::cout << "STRENGTH WINS: Strength was too strong for nationalism." << std::endl;
            return 1;
            break;
        default:
            std::cout << "STRENGTH ties." << std::endl;
            return 0;
            break;
    }
}
Power* powerFactory(std::string& powerInput)
{
    if (powerInput == "flight")
    {
        return new FlightPower;
    }
    if (powerInput == "gadget")
    {
        return new GadgetsPower;
    }
    if (powerInput == "intel")
    {
        return new IntelligencePower;
    }
    if (powerInput == "laser")
    {
        return new LaserPower;
    }
    if (powerInput == "national")
    {
        return new NationalismPower;
    }
    if (powerInput == "strength")
    {
        return new NationalismPower;
    }
    return 0;
}
