// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 18
// hopekim@usc.edu

#pragma once
#include <string>

// Employee class
class Employee
{
protected:
    std::string mName;
    std::string mID;
    double mMonthlyPay;
public:
    Employee(std::string inName, std::string inID);
    virtual void display();
    virtual double calculatePay();
};

// FullTime class
class FullTime : public Employee
{
private:
    double mMonthlySalary;
    double mMonthlyBonus;
public:
    FullTime(std::string inName, std::string inID, double inMonthlySalary, double inMonthlyBonus);
    void display();
    double calculatePay();
};

// PartTime class
class PartTime : public Employee
{
private:
    double mHourlyWage;
    double mHoursWorked;
public:
    PartTime(std::string inName, std::string inID, double inHourlyWage, double inHoursWorked);
    void display();
    double calculatePay();
};
