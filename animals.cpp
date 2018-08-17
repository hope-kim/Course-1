// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 21
// hopekim@usc.edu

#include "animals.h"

std::string Animal::getType()
{
    return mType;
}

std::string Animal::interact(Animal* other)
{
    
    return "She swallowed the " + mType + " to catch the " + other->getType();
}

Fly::Fly()
{
    mType = "fly";
}

std::string Fly::getVerse()
{
    return "I don't know why she swallowed that fly";
}

Spider::Spider()
{
    mType = "spider";
}

std::string Spider::getVerse()
{
    return "It wriggled and jiggled and tickled inside her";
}

Bird::Bird()
{
    mType = "bird";
}

std::string Bird::getVerse()
{
    return "How absurd to swallow a bird";
}

Cat::Cat()
{
    mType = "cat";
}

std::string Cat::getVerse()
{
    return "Fancy that to swallow a cat";
}

Dog::Dog()
{
    mType = "dog";
}

std::string Dog::getVerse()
{
    return "What a hog to swallow that dog";
}

Cow::Cow()
{
    mType = "cow";
}

std::string Cow::getVerse()
{
    return "I don't know how she swallowed that cow";
}

Horse::Horse()
{
    mType = "horse";
}

std::string Horse::getVerse()
{
    return "She died of course";
}
