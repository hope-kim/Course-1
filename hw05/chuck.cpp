// Hope Kim
// ITP 165, Fall 2017
// Homework 05
// hopekim@usc.edu
// Macbook Pro

#include <iostream>
#include <cstdlib>

// Function: roll (int version)
// Purpose: generates a random integer between 1 and 6
// Parameters: nothing
// Returns: a random integer
int roll()
{
    int random = std::rand() % 6 + 1;
    return random;
}

// Function: roll (void version)
// Purpose: fills the array diceRolls[] of size SIZE_OF_ARRAY with random numbers
// Parameters: an array and a const int
// Returns: nothing
void roll(int diceRolls[], const int SIZE_OF_ARRAY)
{
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        diceRolls[i] = roll();
    }
}

// Function: displayRoll
// Purpose: displays contents of the array diceRolls[]
// Parameters: an array and a const int
// Returns: nothing
void displayRoll(int diceRolls[], const int SIZE_OF_ARRAY)
{
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        std::cout << diceRolls[i] << std::endl;
    }
}

// Function: computeBetResult
// Purpose: determines whether or not the rolls match the number that is bet on and calculates the payout
// Parameters: an array, a const int, and 2 ints
// Returns: payout amount from the bet
int computeBetResult(int diceRolls[], const int SIZE_OF_ARRAY, int amountBet, int numberBet)
{
    int match = 0;
    int payout = 0;
    
    // Loop to see if the rolls match the number that is bet on
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        if (diceRolls[i] == numberBet)
        {
            match++;
        }
    }
    
    // Payout it there are no matches
    if (match == 0)
    {
        payout = 0;
        std::cout << "You matched 0 dice!" << std::endl;
    }
    // Payout if there is 1 match
    else if (match == 1)
    {
        payout = amountBet;
        std::cout << "You matched 1 dice!" << std::endl;
        std::cout << "You win $" << payout << "." << std::endl;
    }
    // Payout if there are 2 matches
    else if (match == 2)
    {
        payout = 3*amountBet;
        std::cout << "You matched 2 dice!" << std::endl;
        std::cout << "You win $" << payout << "." << std::endl;
    }
    // Payout if there are 3 matches
    else if (match == 3)
    {
        payout = 10*amountBet;
        std::cout << "You matched 3 dice!" << std::endl;
        std::cout << "You win $" << payout << "." << std::endl;
    }
    
    return payout;
}

int main()
{
    // Primes the random number generation system
    std::srand(std::time(0));
    
    // Size of array
    const int SIZE_OF_ARRAY = 3;
    
    // Array for dice rolls
    int diceRolls[SIZE_OF_ARRAY];
    
    // Starting amount of money
    int money = 100;
    
    // Amount that the user wants to bet
    int amountBet;
    
    // If the user wants to continue
    char answer = 'y';
    
    // Determines if the game continues
    bool isDone = true;
    
    // Introduction to the game and current amount of money
    std::cout << "STEP RIGHT UP AND PLAY SOME CHUCK-A-LUCK!" << std::endl;
    std::cout << "You have $" << money << "." << std::endl;
    
    // Loop to continue the game
    while (isDone)
    {
        // User input for bet amount
        std::cout << "Enter a bet amount: ";
        std::cin >> amountBet;
        
        // Loop for an invalid bet amount
        while (amountBet < 0 || amountBet > money)
        {
            std::cout << "Invalid bet amount. Please try again between $0 and $" << money << ": ";
            std::cin >> amountBet;
        }
        
        // User input for what number to bet on
        int numberBet = 0;
        std::cout << "What number would you like to bet on: ";
        std::cin >> numberBet;
        
        // Loop for invalid number to bet on
        while (numberBet < 1 || numberBet > 6)
        {
            std::cout << "Invalid number. Please try again between 1 and 6: ";
            std::cin >> numberBet;
        }
        
        // Output for what the user chose
        std::cout << "You bet $" << amountBet << " on " << numberBet << "." << std::endl;
        
        // Calls function roll
        roll(diceRolls, SIZE_OF_ARRAY);
        
        // Calls function displayRoll
        displayRoll(diceRolls, SIZE_OF_ARRAY);
        
        // Calls function computeBetResult and stores it in an int
        int result = computeBetResult(diceRolls, SIZE_OF_ARRAY, amountBet, numberBet);
        
        // Output if user won bet
        if (result > 0)
        {
            money += result;
            std::cout << "Congratulations! You won your bet." << std::endl;
            std::cout << "You now have $" << money << "." << std::endl;
        }
        
        // Output if user lost bet
        else if (result == 0)
        {
            money -= amountBet;
            std::cout << "I'm sorry. You lost your bet. :(" << std::endl;
            std::cout << "You now have $" << money << "." << std::endl;
        }
        
        // User input to continue the game
        std::cout << "Would you like to play again (Y/N): ";
        std::cin >> answer;
        
        if (answer == 'n' || answer == 'N')
        {
            isDone = false;
        }
        
        // End the game if the user is out of money
        if (money <= 0)
        {
            isDone = false;
        }
    }
    
    // Output to end the game
    std::cout << "You have ended the game with $" << money << "." << std::endl;
    
    return 0;
}
