//
//  playBlackjack.cpp
//  simplified-blackjack
//
//  Created by Liam on 28/07/2016.
//  Copyright © 2016 Liam. All rights reserved.
//

#include <iostream>
#include "playBlackjack.hpp"
#include "printCard.hpp"


//Returns the associated numerical value of a card.
short getValue(Card &card)
{
    if(card.rank <= RANK_TEN)
        return card.rank;
    else if((card.rank >= RANK_JACK)&&(card.rank <= RANK_KING))
        return 10;
    else
        return 11;
}

//The main logic for the game.
bool playBlackjack(std::array<Card, 52> &deck)
{
    using namespace std;
    Card *cardPtr = &deck[0];
    
    short dealerScore = 0;
    short playerScore = 0;
    short i = 0;
    
    std::cout << "The Dealers first card is: ";
    printCard(deck[i++]);
    dealerScore = getValue(*cardPtr++);
    std::cout << '\n';
    
    std::cout << "Your first two cards are: ";
    printCard(deck[i++]);
    playerScore = getValue(*cardPtr++);
    std::cout << " and ";
    printCard(deck[i++]);
    playerScore += getValue(*cardPtr++);
    
    std::cout << '\n' << "You have " << playerScore << " do you want to stick or twist, s/t: ";
    char choice;
    std::cin >> choice;
    
    while(choice == 't')
    {
        std::cout << "Your card is ";
        printCard(deck[i++]);
        playerScore += getValue(*cardPtr++);
        std::cout << '\n';
        if(playerScore < 21)
        {
            std::cout << "You have " << playerScore << "Do you want to stick or twist, s/t: ";
            std::cin >> choice;
        }
        else if(playerScore == 21)
        {
            std::cout << "You go 21!" << '\n';
            break;
        }
        else
        {
            std::cout << playerScore << "! Sorry, you're bust!" << '\n';
            break;
        }
    }
    std::cout << "Now it is the dealers turn!" << '\n';
    if(playerScore > 21)
    {
        while(dealerScore < 17)
        {
            std::cout << "Dealers card is ";
            printCard(deck[i++]);
            dealerScore += getValue(*cardPtr++);
            std::cout << '\n';
        }
    }
    else
    {
        while(dealerScore < playerScore)
        {
            std::cout << "Dealers card is ";
            printCard(deck[i++]);
            dealerScore += getValue(*cardPtr++);
            std::cout << '\n';
        }
    }
    if((playerScore > 21)&&(dealerScore <= 21))
    {
        std::cout << "Dealer got " << dealerScore;
        return false;
    }
    else if((playerScore <= 21)&&(dealerScore <= 21))
    {
        std::cout << "Dealer got " << dealerScore;
        return false;
    }
    else if((playerScore > 21)&&(dealerScore > 21))
    {
        std::cout << "Dealer got " << dealerScore;
        return false;
    }
    else
    {
        std::cout << "Dealer got " << dealerScore;
        return true;
    }
    
}
