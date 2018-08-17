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
    std::string morseSentence= "";
    
    // Morse code translation
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == ' ')
        {
            morseSentence += " ";
        }
        else if (sentence[i] == 'A' || sentence[i] == 'a')
        {
            morseSentence += morseRep[0] + " ";
        }
        else if (sentence[i] == 'B' || sentence[i] == 'b')
        {
            morseSentence += morseRep[1] + " ";
        }
        else if (sentence[i] == 'C' || sentence[i] == 'c')
        {
            morseSentence += morseRep[2] + " ";
        }
        else if (sentence[i] == 'D' || sentence[i] == 'd')
        {
            morseSentence += morseRep[3] + " ";
        }
        else if (sentence[i] == 'E' || sentence[i] == 'e')
        {
            morseSentence += morseRep[4] + " ";
        }
        else if (sentence[i] == 'F' || sentence[i] == 'f')
        {
            morseSentence += morseRep[5] + " ";
        }
        else if (sentence[i] == 'G' || sentence[i] == 'g')
        {
            morseSentence += morseRep[6] + " ";
        }
        else if (sentence[i] == 'H' || sentence[i] == 'h')
        {
            morseSentence += morseRep[7] + " ";
        }
        else if (sentence[i] == 'I' || sentence[i] == 'i')
        {
            morseSentence += morseRep[8] + " ";
        }
        else if (sentence[i] == 'J' || sentence[i] == 'j')
        {
            morseSentence += morseRep[9] + " ";
        }
        else if (sentence[i] == 'K' || sentence[i] == 'k')
        {
            morseSentence += morseRep[10] + " ";
        }
        else if (sentence[i] == 'L' || sentence[i] == 'l')
        {
            morseSentence += morseRep[11] + " ";
        }
        else if (sentence[i] == 'M' || sentence[i] == 'm')
        {
            morseSentence += morseRep[12] + " ";
        }
        else if (sentence[i] == 'N' || sentence[i] == 'n')
        {
            morseSentence += morseRep[13] + " ";
        }
        else if (sentence[i] == 'O' || sentence[i] == 'o')
        {
            morseSentence += morseRep[14] + " ";
        }
        else if (sentence[i] == 'P' || sentence[i] == 'p')
        {
            morseSentence += morseRep[15] + " ";
        }
        else if (sentence[i] == 'Q' || sentence[i] == 'q')
        {
            morseSentence += morseRep[16] + " ";
        }
        else if (sentence[i] == 'R' || sentence[i] == 'r')
        {
            morseSentence += morseRep[17] + " ";
        }
        else if (sentence[i] == 'S' || sentence[i] == 's')
        {
            morseSentence += morseRep[18] + " ";
        }
        else if (sentence[i] == 'T' || sentence[i] == 't')
        {
            morseSentence += morseRep[19] + " ";
        }
        else if (sentence[i] == 'U' || sentence[i] == 'u')
        {
            morseSentence += morseRep[20] + " ";
        }
        else if (sentence[i] == 'V' || sentence[i] == 'v')
        {
            morseSentence += morseRep[21] + " ";
        }
        else if (sentence[i] == 'W' || sentence[i] == 'w')
        {
            morseSentence += morseRep[22] + " ";
        }
        else if (sentence[i] == 'X' || sentence[i] == 'x')
        {
            morseSentence += morseRep[23] + " ";
        }
        else if (sentence[i] == 'Y' || sentence[i] == 'y')
        {
            morseSentence += morseRep[24] + " ";
        }
        else if (sentence[i] == 'Z' || sentence[i] == 'z')
        {
            morseSentence += morseRep[25] + " ";
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
