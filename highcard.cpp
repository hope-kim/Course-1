// Hope Kim
// ITP 165, Fall 2017
// Homework 6
// hopekim@usc.edu

#include <iostream>
#include <string>

struct Card
{
    int rank;
    std::string suit;
};

std::string cardToString (Card& myCard)
{
    std::string retVal;
    
    
    if (myCard.rank >= 2 && myCard.rank <= 9)
    {
        char rank = '0' + myCard.rank;
        retVal = rank;
        
    }
    else if (myCard.rank >= 10 && myCard.rank <= 14)
    {
        if (myCard.rank == 10)
        {
            retVal = "10";
        }
        else if (myCard.rank == 11)
        {
            retVal = "Jack";
        }
        else if (myCard.rank == 12)
        {
            retVal = "Queen";
        }
        else if (myCard.rank == 13)
        {
            retVal = "King";
        }
        else if (myCard.rank == 14)
        {
            retVal = "Ace";
        }
    }
    return retVal;
};

Card makeCard(int rank, std::string& suit)
{
    Card newCard;
    newCard.rank = rank;
    newCard.suit = suit;
    return newCard;
};

int getRandRank ()
{
    int randomRank = std::rand() % 12 + 2;
    return randomRank;
};

std::string getRandSuit ()
{
    int randomRank = std::rand() % 4 + 1;
    std::string randomSuit;
    if (randomRank == 1)
    {
        randomSuit = "Hearts";
    }
    else if (randomRank == 2)
    {
        randomSuit = "Diamonds";
    }
    else if (randomRank == 3)
    {
        randomSuit = "Clubs";
    }
    else if (randomRank == 4)
    {
        randomSuit = "Spades";
    }
    return randomSuit;
};

bool isEqual(Card myCard, Card newCard)
{
    if (myCard.rank == newCard.rank)
    {
        return true;
    }
    else
    {
        return false;
    }
};

bool isLess(Card myCard, Card newCard)
{
    if (myCard.rank < newCard.rank)
    {
        return true;
    }
    else
    {
        return false;
    }
};

bool isMore(Card myCard, Card newCard)
{
    if (myCard.rank > newCard.rank)
    {
        return true;
    }
    else
    {
        return false;
    }
};

int main()
{
    std::srand(std::time(0));
    
    int roundCount = 1;
    char answer = 'y';
    std::cout << "Welcome to the world champion High-card tournament finals!" << std::endl;
    std::cout << "It's a match between Hope and Computer!" << std::endl;
    std::cout << std::endl;
    
    int counterHope = 0;
    int counterComputer = 0;
    while (answer == 'y' || answer == 'Y')
    {
        std::cout << "They're starting round " << roundCount << "." << std::endl;
        std::cout << "The players are shuffling..." << std::endl;
        std::cout << "Isn't this exciting!?" << std::endl;
        
        int randomRankHope = getRandRank();
        std::string randomSuitHope = getRandSuit();
        int randomRankComp = getRandRank();
        std::string randomSuitComp = getRandSuit();
        
        Card myCard = makeCard(randomRankHope, randomSuitHope);
        Card newCard = makeCard(randomRankComp, randomSuitComp);
        
        if (isEqual(myCard, newCard) == 1)
        {
            std::cout << "Hope drew a " << cardToString(myCard) << " of " << myCard.suit << " to match Computer's " << cardToString(newCard) << " of " << newCard.suit << std::endl;
            std::cout << "It's a draw! The score is..." << std::endl;
        }
        else if (isLess(myCard, newCard) == 1)
        {
            std::cout << "Computer's " << cardToString(newCard) << " of " << myCard.suit << " beat Hope's " << cardToString(myCard) << " of " << myCard.suit << "! The score is..." << std::endl;
            counterComputer++;
        }
        else if (isMore(myCard, newCard) == 1)
        {
            std::cout << "Hope's " << cardToString(myCard) << " of " << myCard.suit << " beat Computer's " << cardToString(newCard) << " of " << newCard.suit << "! The score is..." << std::endl;
            counterHope++;
        }
        
        std::cout << "Hope: " << counterHope << ", Computer: " << counterComputer << std::endl;
        std::cout << "Should the players go again (y/n): ";
        std::cin >> answer;
        
        roundCount++;
    }
    
    std::cout << "Game ended!" << std::endl;
    
    return 0;
}
