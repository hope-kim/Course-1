// Hope Kim
// ITP 165, Fall 2017
// Homework 08
// hopekim@usc.edu

#include "student.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

// Function: loadStudents
// Purpose: loads the student variables
// Parameters: std::string& inputFile and unsigned int& numberStudentVariables
// Returns: pointer to Student
Student* loadStudents(std::string& inputFile, unsigned int& numberStudentVariables)
{
    // using the file in an std::ifstream
    std::ifstream fileInputStream(inputFile);
    
    // if the file is a valid name
    if (fileInputStream.is_open())
    {
        // setting numberStudentVariables using std::getline and std::istringstream
        std::string stringNumberStudents = "";
        std::getline(fileInputStream, stringNumberStudents);
        std::istringstream stringNumberStream(stringNumberStudents);
        stringNumberStream >> numberStudentVariables;
        
        // output for number of students
        std::cout << "Loaded " << numberStudentVariables << " students..." << std::endl;
        
        // dynamically creating an array of students
        Student* arrayStudents = new Student[numberStudentVariables];
        
        // double to hold the sum of overall grades for the class
        double sumOverallGrade = 0.0;
        
        // for loop to create and set student variables
        for (int i = 0; i < numberStudentVariables; i++)
        {
            // variables
            std::string inName;
            std::string inLabs;
            std::string inHomeworks;
            std::string inMidterm;
            std::string inFinal;
            
            // setting variables
            std::getline(fileInputStream, inName);
            std::getline(fileInputStream, inLabs);
            std::getline(fileInputStream, inHomeworks);
            std::getline(fileInputStream, inMidterm);
            std::getline(fileInputStream, inFinal);
            
            // making a student variable in the student array
            Student myStudent(inName, inLabs, inHomeworks, inMidterm, inFinal);
            arrayStudents[i] = myStudent;
            
            // calculating each student's overall grade
            double studentOverallGrade = arrayStudents[i].getOverallGrade();
            std::cout << arrayStudents[i].getName() << ": " << studentOverallGrade << "%" << std::endl;
            
            // summing the overall grades for the class
            sumOverallGrade += studentOverallGrade;
        }
        
        // outputting the class average
        std::cout << "Class average: " << sumOverallGrade/numberStudentVariables << "%" << std::endl;
        return arrayStudents;
    }
    
    // if the file is not a valid file name
    else
    {
        return nullptr;
    }
}

int main()
{
    // variables
    std::string inputFile = "";
    std::string stringNumberStudents = "";
    
    // input for the file name
    std::cout << "Please enter the input file name: ";
    std::cin >> inputFile;
    
    // loading the students
    unsigned int numberStudentVariables = 0;
    loadStudents(inputFile, numberStudentVariables);
    
    return 0;
}

