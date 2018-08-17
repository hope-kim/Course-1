// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 14
// hopekim@usc.edu


#include <iostream>
#include <string>
#include <cstdlib>


// Function: makeRandArray
// Purpose: generate an array filled with random numbers
// Parameters: unsigned int containing "size" of the array
// Returns: an integer pointer (int*) referencing the array
int* makeRandArray(unsigned int size)
{
    int* retVal = new int[size];
    for (unsigned int i = 0; i < size; i ++)
    {
        retVal[i] = std::rand();
    }
    return retVal;
}

// Function: avgArray
// Purpose: calculates the average of the array
// Parameters: integer array and an unsigned int containing "size" of the array
// Returns: double
double avgArray(int* array, unsigned int size)
{
    double average = 0;
    double sum = 0;
    for (unsigned int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    average = sum/size;
    return average;
}

// Function: printArray
// Purpose: outputs the contents of an int array
// Parameters: integer array and an unsigned int containing "size" of the array
// Returns: none
void printArray(int* array, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
    {
        std::cout << "\t" << array[i] << std::endl;
    }
}

int main()
{
    // Variables for size of the array, answer to seed, and array to be made
    unsigned int size = 0;
    std::string answer = "";
    int* array = nullptr;
    
    // Output to get array size
    std::cout << "Enter an array size: ";
    // Input for size for the array
    std::cin >> size;
    // Output to seed random numbers (y/n)
    std::cout << "Seed the random numbers (y/n): ";
    // Input for answer to seed
    std::cin >> answer;
    
    // If user wants the numbers to be seeded
    if (answer == "y" || answer == "Y")
    {
        std::cout << "Seeding random numbers...: " << std::endl;
        std::srand(std::time(0));
    }
    
    // Makes a random array
    array = makeRandArray(size);
    // Prints the random array
    printArray(array, size);
    // Prints the average size of the random array
    std::cout << size << " random numbers average out to " << avgArray(array, size) << "." << std::endl;
    // Clears the contents of int* array
    delete[] array;
    // Sets int* array to nullptr
    array = nullptr;
    
    return 0;
}
