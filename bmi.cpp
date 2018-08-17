// Hope Kom
// ITP 165, Fall 2017
// Homework 1
// hopekim@usc.edu

#include <iostream>
#include <string>
int main()
{
    std::string name = "name";
    int feet = 0;
    int inch = 0;
    int weight = 0;
    
    // Prompt for name input
    std::cout << "Hello, whose BMI shall I calculate: ";
    std::cin >> name;
    
    // Prompt for height in feet input
    std::cout << "Okay first I need "<< name << "'s height. I'll take it in feet and inches." << std::endl;
    std::cout << "Feet first: ";
    std::cin >> feet;
    
    // Prompt for height in inches input
    std::cout << "Now inches: ";
    std::cin >> inch;
    
    // Prompt for weight input
    std::cout << "Thanks. Now I need "<< name << "'s weight in pounds." << std::endl;
    std::cout << "Please enter " << name << "'s weight: ";
    std::cin >> weight;
    
    // Calculate total inches
    int totalHeight = (feet*12) + (inch);
    
    // Calculate height in meters
    double meter = totalHeight/39.3701;
    
    // Calculate mass in kilograms
    double kilo = weight/2.20462;
    
    // Calculate and output final BMI;
    double bmi = kilo/(meter*meter);
    
    // Output BMI
    std::cout << name << "'s BMI is " << bmi << std::endl;

    return 0;
}
