// Hope Kim
// ITP 165, Fall 2017
// Homework 08
// hopekim@usc.edu
#pragma once
#include <string>

class Student
{
// Private member variables
private:
    std::string mName;
    unsigned int mLabs;
    unsigned int* mLabsArray;
    unsigned int mHomeworks;
    unsigned int mHomeworkPoints;
    unsigned int* mHomeworksArray;
    unsigned int mMidterm;
    unsigned int mFinal;
// Public member functions
public:
    // Default constructor
    Student();
    
    // Destructor
    ~Student();
    
    // Parameterized constructor
    Student(std::string& inName, std::string& inLabs, std::string& inHomeworks, std::string& inMidterm, std::string& inFinal);
    
    // Function: toString
    // Purpose: returns a string for output with all the homework variables
    // Parameters: nothing
    // Returns: std::string
    std::string toString();
    
    // Function: setName
    // Purpose: sets the name
    // Parameters: std::string& inName
    // Returns: nothing
    void setName(std::string& inName);
    
    // Function: setMidterm
    // Purpose: sets the midterm grade
    // Parameters: std::string& inMidterm
    // Returns: nothing
    void setMidterm(std::string& inMidterm);
    
    // Function: setFinal
    // Purpose: sets the final grade
    // Parameters: std::string& inFinal
    // Returns: nothing
    void setFinal(std::string& inFinal);
    
    // Function: setLabs
    // Purpose: sets the lab grades
    // Parameters: std::string& inLabs
    // Returns: nothing
    void setLabs(std::string& inLabs);
    
    // Function: setHomework
    // Purpose: sets the homework grades
    // Parameters: std::string& inHomeworks
    // Returns: nothing
    void setHomework(std::string& inHomeworks);
    
    // Function: getName
    // Purpose: gets the name
    // Parameters: nothing
    // Returns: std::string of the name
    std::string getName();
    
    // Function: getMidterm
    // Purpose: gets the midterm grade
    // Parameters: nothing
    // Returns: unsigned int of the midterm grade
    unsigned int getMidterm();
    
    // Function: getFinal
    // Purpose: gets the final grade
    // Parameters: nothing
    // Returns: unsigned int of the final grade
    unsigned int getFinal();
    
    // Function: getLabPercent
    // Purpose: gets the lab percent
    // Parameters: nothing
    // Returns: double of the percent of lab grades
    double getLabPercent();
    
    // Function: getHomeworkPercent
    // Purpose: gets the homework percent
    // Parameters: nothing
    // Returns: double of the percent of homework grades
    double getHomeworkPercent();
    
    // Function: getOverallGrade
    // Purpose: gets the overall grade
    // Parameters: nothing
    // Returns: double of the overall grade
    double getOverallGrade();
};


