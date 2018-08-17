// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 6
// hopekim@usc.edu

#include <iostream>
#include <string>
int main()
{
    // Encyryption Key
    const std::string ENCRYPT_KEY = "EHTGDBWIUQRXLMVFSJCPYZKAON";
    // Word to encrypt
    std::string word;
    // Y/N to quit
    char answer;
    // Storing individual characters
    char letter;
    // Loop
    bool isDone = false;
    // Place in alphabet
    int index;
    
    while (!isDone)
    {
        // Non-encrytped word input
        std::cout << "Enter a word to encrypt: ";
        std::cin >> word;
        
        // Encryption
        for (int i = 0; i < word.length(); i++)
        {
            letter = word[i];
            // Check for upper case
            if (letter >= 'A' && letter <= 'Z')
            {
                index = letter - 'A';
                letter = ENCRYPT_KEY[index];
                word[i] = letter;
            }
            // Check for lower case
            if (letter >= 'a' && letter <= 'z')
            {
                index = letter - 'a';
                letter = ENCRYPT_KEY[index];
                word[i] = letter;
            }
        }
        
        // Encrypted word output
        std::cout << "Your word encrypts to \"" << word << "\"" << std::endl;
        
        // Redo input and output
        std::cout << "Would you like to go again (Y/N): ";
        std::cin >> answer;
        
        if (answer == 'N' || answer == 'n')
        {
            std::cout << "Quitting!" << std::endl;
            isDone = true;
        }
    }
    
    return 0;
}
