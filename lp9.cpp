// Name
// ITP 165, Spring 2017
// Lab Practical 10
// hopekim@usc.edu

// main.cpp

#include <iostream>

void compareValues(int value1, int value2)
{
    if (value1 = value2)                    // should be ==
    {
        std::cout << "The two values are the same: " << value1 << " and " << value2 << std::endl;
    }
    else if ( value1 > value2 )             // same as else
    {
        std::cout << "The first value " << value1 << " is greater than the second value " << value2 << std::endl;
    }
    else                                    // same as else if
    {
        std::cout << "The first value " << value1 << " is greater than the second value " << value2 << std::endl;
    }
}

int doSomething()
{
    const int SIZE = 10;
    int array[SIZE];                        // no values assigned to array so will assign random numbers
    int value = 10;
    
    // the for loop is not really necessary
    for (int i = 0; i <= SIZE; i++) {       // <= will make the array go 1 more than necessary, which will invalidate function
        array[i] = i * 2;
    }
    
    return value;                           // returns initial value but does not return anything in main bc error in for loop
}

void printArrayValues(int* array, int size)
{
    int value;                              // no values assigned to int so will assign random number
    
    std::cout << "Printing array values" << std::endl;
    for (int i = 0; i < size; i++)          // for loop goes once more?
        value = array[i];                   // random number
    std::cout << value << std::endl;        // random number printed out
}

void compareCStrings(char* cstring1, char* cstring2)
{
    if (strcmp(cstring1, cstring2))         // cannot use c-style strings in comparisons like these
    {
        std::cout << "The two C-style strings are the same" << std::endl;
    }
    else
    {
        std::cout << "The two C-style strings are not the same" << std::endl;
        
    }
}

int main()
{
    
    int retValue = doSomething();           // returns a random number because the for loop invalidates the function
    std::cout << "Return value is " << retValue << std::endl;
    
    int value1, value2;
    std::cout << "Enter two whole numbers. They can be different or the same" << std::endl;
    std::cin >> value1 >> value2;           // cannot cin two values at once in addition to the std::endl;
    compareValues(value1, value2);          // therefore, puts two random numbers in
    
    int array[] = { 1,2,3,4,5 };            // no values assigned to array so will assign random numbers
    printArrayValues(array, 6);             // wrong size
    
    char cs1[] = "Hello";                   // using double quotes
    char cs2[] = "World";                   // using double quotes
    compareCStrings(cs1, cs2);
    
    return 0;
}
