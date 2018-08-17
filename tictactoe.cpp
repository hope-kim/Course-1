// Hope Kim
// ITP 165, Fall 2017
// Homework 07
// hopekim@usc.edu

#include <iostream>
#include <string>

// Function: makeBoard
// Purpose: dynamically creates the 9 item tic-tac-toe board
// Parameters: nothing
// Returns: char pointer
char* makeBoard()
{
    // Dynamically creates the array
    char size = 9;
    char* array = new char[size];
    for (int i = 0; i < size; i++)
    {
        char number = '1';
        array[i] = number + i;
    }
    delete[] array;
    return array;
}
// Function: displayBoard
// Purpose: outputs the tic-tac-toe board
// Parameters: char array
// Returns: nothing
void displayBoard(char array[])
{
    std::cout << " " << array[0] << " | " << array[1] << " | " << array[2] << std::endl;
    std::cout << "------------" << std::endl;
    std::cout << " " << array[3] << " | " << array[4] << " | " << array[5] << std::endl;
    std::cout << "------------" << std::endl;
    std::cout << " " << array[6] << " | " << array[7] << " | " << array[8] << std::endl;
}
// Function: validMove
// Purpose: determines if the place is a valid move
// Parameters: char array and int for place on tic-tac-toe board
// Returns: bool
bool validMove(char array[], int place)
{
    // Valid input
    if (place >= 1 && place <= 9)
    {
        int index = place + '0';
        // Determines if the place is a valid move
        if (array[place-1] == index)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // Invalid input
    else
    {
        return false;
    }
}
// Function: determineWinner
// Purpose: determines if there is a winner
// Parameters: char array
// Returns: char
char determineWinner(char array[])
{
    // Determines if player X wins
    if ((array[0] == array[1]) && (array[1] == array[2]) && (array[2] == 'X'))
    {
        return 'X';
    }
    if ((array[3] == array[4]) && (array[4] == array[5]) && (array[5] == 'X'))
    {
        return 'X';
    }
    if ((array[6] == array[7]) && (array[7] == array[8]) && (array[8] == 'X'))
    {
        return 'X';
    }
    if ((array[0] == array[3]) && (array[3] == array[6]) && (array[6] == 'X'))
    {
        return 'X';
    }
    if ((array[1] == array[4]) && (array[4] == array[7]) && (array[7] == 'X'))
    {
        return 'X';
    }
    if ((array[2] == array[5]) && (array[5] == array[8]) && (array[8] == 'X'))
    {
        return 'X';
    }
    if ((array[0] == array[4]) && (array[4] == array[8]) && (array[8] == 'X'))
    {
        return 'X';
    }
    if ((array[2] == array[4]) && (array[4] == array[6]) && (array[6] == 'X'))
    {
        return 'X';
    }
    
    // Determines if player O wins
    if ((array[0] == array[1]) && (array[1] == array[2]) && (array[2] == 'O'))
    {
        return 'O';
    }
    if ((array[3] == array[4]) && (array[4] == array[5]) && (array[5] == 'O'))
    {
        return 'O';
    }
    if ((array[6] == array[7]) && (array[7] == array[8]) && (array[8] == 'O'))
    {
        return 'O';
    }
    if ((array[0] == array[3]) && (array[3] == array[6]) && (array[6] == 'O'))
    {
        return 'O';
    }
    if ((array[1] == array[4]) && (array[4] == array[7]) && (array[7] == 'O'))
    {
        return 'O';
    }
    if ((array[2] == array[5]) && (array[5] == array[8]) && (array[8] == 'O'))
    {
        return 'O';
    }
    if ((array[0] == array[4]) && (array[4] == array[8]) && (array[8] == 'O'))
    {
        return 'O';
    }
    if ((array[2] == array[4]) && (array[4] == array[6]) && (array[6] == 'O'))
    {
        return 'O';
    }
    // No one is currently winning
    else
    {
        return 'N';
    }
}
// Function: fullBoard
// Purpose: determines if the board is full
// Parameters: char array
// Returns: bool
bool fullBoard(char array[])
{
    // Determines if the board is full
    if ((array[0] == 'X' || array[0] == 'O') && (array[1] == 'X' || array[1] == 'O') && (array[2] == 'X' || array[2] == 'O') && (array[3] == 'X' || array[3] == 'O') && (array[4] == 'X' || array[4] == 'O') && (array[5] == 'X' || array[5] == 'O') && (array[6] == 'X' || array[6] == 'O') && (array[7] == 'X' || array[7] == 'O') && (array[8] == 'X' || array[8] == 'O'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    // char* array that is made through makeBoard()
    char* array = makeBoard();
    // char to keep track of the turn
    char turn = 'X';
    // unisnged int to keep track of the place
    unsigned int place = 0;
    // std::string to keep track of if the player wants to continue playing
    std::string answer = "y";
    // while loop if the player wants to continue playing
    while (answer != "n")
    {
        // If the player wants to continue playing
        if (answer == "y")
        {
            // Output to begin game
            std::cout << "Let's start a new game!" << std::endl;
            std::cout << "Here's the current board... " << std::endl;
            // Displays board
            displayBoard(array);
            // char to determine if there is a winner
            char winner = 'N';
            // bool to determine if the board is full
            bool full = false;
            // while loop for if the game is neither won or done
            while (winner == 'N' && full == false)
            {
                // Player X's turn
                if (turn == 'X')
                {
                    // Output to start player X's turn
                    std::cout << "It's " << turn << "'s turn." << std::endl;
                    std::cout << "Where do you want to go: ";
                    // Input for target place
                    std::cin >> place;
                    // Determines if it is a valid move
                    bool target = validMove(array,place);
                    // while loop for when it is an invalid move
                    while (target == false)
                    {
                        std::cout << "INVALID OPTION. Please try again: ";
                        std::cin >> place;
                        target = validMove(array,place);
                    }
                    // Makes the move for player X
                    if (target == true)
                    {
                        array[place-1] = turn;
                        displayBoard(array);
                        turn = 'O';
                    }
                    // Determines if the game is won or done
                    winner = determineWinner(array);
                    full = fullBoard(array);
                }
                // Player O's turn
                else if (turn == 'O')
                {
                    // Output to start player O's turn
                    std::cout << "It's " << turn << "'s turn." << std::endl;
                    std::cout << "Where do you want to go: ";
                    // Input for target place
                    std::cin >> place;
                    // Determines if it is a valid move
                    bool target = validMove(array,place);
                    // while loop for when it is an invalid move
                    while (target == false)
                    {
                        std::cout << "INVALID OPTION. Please try again: ";
                        std::cin >> place;
                        target = validMove(array,place);
                    }
                    // Makes the move for player O
                    if (target == true)
                    {
                        array[place-1] = turn;
                        displayBoard(array);
                        turn = 'X';
                    }
                    // Determines if the game is won or done
                    winner = determineWinner(array);
                    full = fullBoard(array);
                }
            }
            // If player X wins
            if (winner == 'X')
            {
                std::cout << "PLAYER X WINS!" << std::endl;
            }
            // If player O wins
            else if (winner == 'O')
            {
                std::cout << "PLAYER O WINS!" << std::endl;
            }
            // If neither player wins
            else if (full == true)
            {
                std::cout << "Draw. Neither player wins." << std::endl;
            }
            // Output for if the player wants to play again
            std::cout << "Would you like to play again (y/n): ";
            // Input for answer
            std::cin >> answer;
        }
        // If player enters invalid answer
        else
        {
            std::cout << "INVALID OPTION. Please try again: ";
            std::cin >> answer;
        }
    }
    // If player quits
    if (answer == "n")
    {
        std::cout << "Quitting!" << std::endl;
    }
    return 0;
}
