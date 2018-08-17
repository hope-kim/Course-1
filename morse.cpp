// Hope Kim
// ITP 165, Fall 2017
// Homework 4
// hopekim@usc.ediu
// MacBook Pro

#include "Sound.h"
#include <iostream>
#include <string>

int main()
{
    // Morse code representation array
    const int NUM_ALPHABET = 26;
    std::string morseRep[NUM_ALPHABET] =
    {
        ".-",           // Value of "A"
        "-...",         // Value of "B"
        "-.-.",         // Value of "C"
        "-..",          // Value of "D"
        ".",            // Value of "E"
        "..-.",         // Value of "F"
        "--.",          // Value of "G"
        "....",         // Value of "H"
        "..",           // Value of "I"
        ".---",          // Value of "J"
        "-.-",          // Value of "K"
        ".-..",         // Value of "L"
        "--",           // Value of "M"
        "-.",           // Value of "N"
        "---",          // Value of "O"
        ".--.",         // Value of "P"
        "--.-",         // Value of "Q"
        ".-.",          // Value of "R"
        "...",          // Value of "S"
        "-",            // Value of "T"
        "..-",          // Value of "U"
        "...-",         // Value of "V"
        ".--",          // Value of "W"
        "-..-",         // Value of "X"
        "-.--",         // Value of "Y"
        "--..",         // Value of "Z"
    };
    
    // User input message to translate
    std::string sentence;
    std::cout << "Input a message to translate into Morse code: ";
    std::getline(std::cin, sentence);
    std::string morseSentence = "";
    
    // Morse code translation
    for (int i = 0; i < sentence.length(); i++)
    {
        char letter = sentence[i];
        int index = 0;
        
        // Check for space
        if (letter == ' ')
        {
            morseSentence += " ";
        }
        // Check for upper case
        if (letter >= 'A' && letter <= 'Z')
        {
            index = letter - 'A';
            morseSentence += morseRep[index] + " ";
        }
        // Check for lower case
        if (letter >= 'a' && letter <= 'z')
        {
            index = letter - 'a';
            morseSentence += morseRep[index] + " ";
        }
    }
    
    // Translation output
    std::cout << "Your message translated into Morse code is: " << morseSentence << std::endl;
    
    // Asking user to hear morse code message
    char answer;
    bool isDone;
    
    std::cout << "Would you like to hear the Morse code message (Y/N)? ";
    std::cin >> answer;
    
    // User does not want to hear the message
    if (answer == 'N' || answer == 'n')
    {
        std::cout << "Quitting!" << std::endl;
        isDone = true;
    }
    // User does want to hear the message
    else
    {
        initSound();
        setBPM(500);
        
        // Loop to create message as sound
        for (int i = 0; i < morseSentence.length(); i++)
        {
            if (morseSentence[i] == ' ')
            {
                addMorsePause();
            }
            else if (morseSentence[i] == '.')
            {
                addMorseDot();
            }
            else if (morseSentence[i] == '-')
            {
                addMorseDash();
            }
        }
        
        // Plays message
        playSound();
    }
    
    return 0;
}
