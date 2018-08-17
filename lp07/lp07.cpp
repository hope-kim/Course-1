// Hope Kim
// ITP 165, Fall 2017
// Lab Practical 7
// hopekim@usc.ediu
// MacBook Pro

#include "Sound.h"
#include <iostream>

int main()
{
    int bpm = 100;
    
    // User input for bpm
    std::cout << "Enter the beats per minute: ";
    std::cin >> bpm;
    
    // Loop for invalid entry
    while (bpm < 100 || bpm > 1200)
    {
        std::cout << "Invalid entry. Please enter a value between 100 and 1200: ";
        std::cin >> bpm;
    }
    
    // Playing "Mary Had a Little Lamb"
    std::cout << "Now playing \"Mary Had a Little Lamb.\"" << std::endl;
    initSound();
    setBPM(bpm);
    
    // Notes for "Mary Had a Little Lamb"
    addB(1);
    addA(1);
    addG(1);
    addA(1);
    addB(1);
    addB(1);
    addB(2);
    addA(1);
    addA(1);
    addA(2);
    addB(1);
    addD(1);
    addD(2);
    addB(1);
    addA(1);
    addG(1);
    addA(1);
    addB(1);
    addB(1);
    addB(1);
    addB(1);
    addA(1);
    addA(1);
    addB(1);
    addA(1);
    addG(4);
    
    playSound();
    
    return 0;
}
