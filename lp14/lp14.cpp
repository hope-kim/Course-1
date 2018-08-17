// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 14
// hopekim@usc.edu

#include "person.h"

int main()
{
    // data to use for Person class
    std::string myName = "Hope Kim";
    int myAge = 19;
    
    Person me(myName, myAge);
    
    me.printInfo();
    
    return 0;
}
