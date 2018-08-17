// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 18
// hopekim@usc.edu

#include "Employee.h"
#include <iostream>

Employee::Employee(std::string inName, std::string inID)
{
    mName = inName;
    mID = inID;
    mMonthlyPay = 0;
}

void Employee::display()
{
    std::cout << "Name: " << mName << std::endl;
    std::cout << "ID: " << mID << std::endl;
}

double Employee::calculatePay()
{
    return mMonthlyPay;
}

FullTime::FullTime(std::string inName, std::string inID, double inMonthlySalary, double inMonthlyBonus) : Employee(inName, inID), mMonthlySalary(inMonthlySalary), mMonthlyBonus(inMonthlyBonus)
{
    
}

void FullTime::display()
{
    std::cout << "Full Time Employee:" << std::endl;
    std::cout << "Name: " << mName << std::endl;
    std::cout << "ID: " << mID << std::endl;
    std::cout << "Monthly Pay: " << calculatePay() << std::endl;
}

double FullTime::calculatePay()
{
    return mMonthlyBonus + mMonthlySalary;
}

PartTime::PartTime(std::string inName, std::string inID, double inHourlyWage, double inHoursWorked) : Employee(inName, inID), mHourlyWage(inHourlyWage), mHoursWorked(inHoursWorked)
{
    
}

void PartTime::display()
{
    std::cout << "Part Time Employee:" << std::endl;
    std::cout << "Name: " << mName << std::endl;
    std::cout << "ID: " << mID << std::endl;
    std::cout << "Monthly Pay: " << calculatePay() << std::endl;
}

double PartTime::calculatePay()
{
    return mHourlyWage * mHoursWorked;
}
