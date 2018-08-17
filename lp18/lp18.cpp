// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 18
// hopekim@usc.edu

#include <iostream>
#include <string>
#include "Employee.h"
#include <vector>

int main()
{
    // variables to hold user input
    int choice = 0;
    std::string inName;
    std::string inID;
    double inSalary;
    double inBonus;
    double inHourlyWage;
    double inHoursWorked;
    Employee* newEmp = nullptr;
    std::vector<Employee*> employees;
    
    // repeat until quit
    do
    {
        // asking for user input
        std::cout << "What kind of employee do you have?" << std::endl;
        std::cout << "\t1. Full time employee" << std::endl;
        std::cout << "\t2. Part time employee" << std::endl;
        std::cout << "\t3. Quit" << std::endl;
        std::cout << "> ";
        std::cin >> choice;
        std::cin.ignore();
        
        switch (choice)
        {
            // full-time employee
            case 1:
                std::cout << "Making a full-time employee..." << std::endl;
                std::cout << "Name: ";
                std::getline(std::cin, inName);
                std::cout << "ID: ";
                std::getline(std::cin, inID);
                std::cout << "Salary: ";
                std::cin >> inSalary;
                std::cout << "Bonus: ";
                std::cin >> inBonus;
                newEmp = new FullTime(inName, inID, inSalary, inBonus);
                employees.push_back(newEmp);
                break;
                
            // part-time employee
            case 2:
                std::cout << "Making a part-time employee..." << std::endl;
                std::cout << "Name: ";
                std::getline(std::cin, inName);
                std::cout << "ID: ";
                std::getline(std::cin, inID);
                std::cout << "Hourly Wage: ";
                std::cin >> inHourlyWage;
                std::cout << "Hours Worked: ";
                std::cin >> inHoursWorked;
                newEmp = new PartTime(inName, inID, inHourlyWage, inHoursWorked);
                employees.push_back(newEmp);
                break;
            
            // default case
            default:
                std::cout << "Quitting and displaying employees!" << std::endl;
                break;
        }
    }
    while (choice != 3);
    
    // deallocate memory
    for (int i = 0; i < employees.size(); i++)
    {
        employees[i]->display();
        delete employees[i];
    }
    
    return 0;
}
