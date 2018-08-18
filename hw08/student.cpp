// Hope Kim
// ITP 165, Fall 2017
// Homework 08
// hopekim@usc.edu

#include "student.h"
#include <iostream>
#include <string>
#include <sstream>

Student::Student()
{
    std::string mName = "";
    unsigned int mLabs = 0;
    unsigned int* mLabsArray = nullptr;
    unsigned int mHomeworks = 0;
    unsigned int mHomeworkPoints = 0;
    unsigned int* mHomeworksArray = nullptr;
    unsigned int mMidterm = 0;
    unsigned int mFinal = 0;
}

Student::~Student()
{
    if (mLabsArray != nullptr)
    {
        delete[] mLabsArray;
        mLabsArray = nullptr;
    }
    if (mHomeworksArray != nullptr)
    {
        delete[] mHomeworksArray;
        mHomeworksArray = nullptr;
    }
    mName = "";
    mLabs = 0;
    mHomeworks = 0;
    mHomeworkPoints = 0;
    mMidterm = 0;
    mFinal = 0;
}

Student::Student(std::string& inName, std::string& inLabs, std::string& inHomeworks, std::string& inMidterm, std::string& inFinal)
{
    setName(inName);
    setLabs(inLabs);
    setHomework(inHomeworks);
    setMidterm(inMidterm);
    setFinal(inFinal);
}

std::string Student::toString()
{
    std::ostringstream stream;
    stream << "Name: " << mName << "\n\tLabs: ";
    for (int i = 0; i < mLabs; i ++)
    {
        if (i < mLabs-1)
        {
            stream << mLabsArray[i] << ", ";
        }
        else
        {
            stream << mLabsArray[i];
        }
    }
    
    stream << "\n\tHomeworks: ";
    for (int i = 0; i < mHomeworks; i ++)
    {
        if (i < mHomeworks-1)
        {
            stream << mHomeworksArray[i] << ", ";
        }
        else
        {
            stream << mHomeworksArray[i];
        }
    }
    
    stream << "\n\tMidterm: " << mMidterm;
    stream << "\n\tFinal: " << mFinal;
    stream << "\nLab %: " << getLabPercent() << "%";
    stream << "\nHomework %: " << getHomeworkPercent() << "%";
    stream << "\nOverall %: " << getOverallGrade() << "%";
    
    std::string overallstring = stream.str();
    
    return overallstring;
}

void Student::setName(std::string& inName)
{
    mName = inName;
}

void Student::setMidterm(std::string& inMidterm)
{
    std::istringstream streamMidterm(inMidterm);
    while (!streamMidterm.eof())
    {
        streamMidterm >> mMidterm;
    }
}

void Student::setFinal(std::string& inFinal)
{
    std::istringstream streamFinal(inFinal);
    while (!streamFinal.eof())
    {
        streamFinal >> mFinal;
    }
}

void Student::setLabs(std::string& inLabs)
{
    if (inLabs != "")
    {
        std::istringstream stream(inLabs);
        stream >> mLabs;
        mLabsArray = new unsigned int[mLabs];
        while (!stream.eof())
        {
            for (unsigned int i = 0; i < mLabs; i++)
            {
                stream >> mLabsArray[i];
            }
        }
    }
}

void Student::setHomework(std::string& inHomeworks)
{
    if (inHomeworks != "")
    {
        std::istringstream stream(inHomeworks);
        stream >> mHomeworks;
        mHomeworksArray = new unsigned int[mHomeworks];
        stream >> mHomeworkPoints;
        while (!stream.eof())
        {
            for (unsigned int i = 0; i < mHomeworks; i++)
            {
                stream >> mHomeworksArray[i];
            }
        }
    }
}

std::string Student::getName()
{
    return mName;
}

unsigned int Student::getMidterm()
{
    return mMidterm;
}

unsigned int Student::getFinal()
{
    return mFinal;
}

double Student::getLabPercent()
{
    double sum = 0.0;
    for (int i = 0; i < mLabs; i++)
    {
        sum += mLabsArray[i];
    }
    return (sum/mLabs)*100;
}

double Student::getHomeworkPercent()
{
    double sum = 0.0;
    for (int i = 0; i < mHomeworks; i++)
    {
        sum += mHomeworksArray[i];
    }
    return (sum/mHomeworkPoints)*100;
}

double Student::getOverallGrade()
{
    double overallGrade = 0.0;
    overallGrade += (getLabPercent() * 0.2);
    overallGrade += (getHomeworkPercent() * 0.4);
    overallGrade += (getMidterm() * 0.2);
    overallGrade += (getFinal() * 0.2);
    return overallGrade;
}



