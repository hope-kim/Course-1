// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 16
// hopekim@usc.edu

#include "person.h"

int main()
{
    std::string myName = "Hope Kim";
    int myAge = 19;
    
    Person me(myName, myAge);
    
    me.printInfo();
    
    return 0;
}
