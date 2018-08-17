// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 19
// hopekim@usc.edu

#pragma once
#include <string>

// all Animal classes
class Animal
{
protected:
    std::string mType;
public:
    std::string getType();
    std::string interact(Animal* other);
    virtual std::string getVerse() = 0;
};

class Fly : public Animal
{
public:
    Fly();
    std::string getVerse();
};

class Spider : public Animal
{
public:
    Spider();
    std::string getVerse();
};

class Bird : public Animal
{
public:
    Bird();
    std::string getVerse();
};

class Cat : public Animal
{
public:
    Cat();
    std::string getVerse();
};

class Dog : public Animal
{
public:
    Dog();
    std::string getVerse();
};

class Cow : public Animal
{
public:
    Cow();
    std::string getVerse();
};

class Horse : public Animal
{
public:
    Horse();
    std::string getVerse();
};
