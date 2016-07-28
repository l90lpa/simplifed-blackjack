//
//  main.cpp
//  simplified-blackjack
//
//  Created by Liam on 13/07/2016.
//  Copyright © 2016 Liam. All rights reserved.
//

#include <iostream>
#include <array>
#include "shuffleDeck.hpp"
#include "playBlackjack.hpp"
#include "cardData.h"

int main()
{
    using namespace std;
    
    // The seed number for the random number generator must be specified prior to program launch of
    // randomNumberGenerator(). When it - srand() - was used inside the function randomNumberGenerator() the program
    // was iterating the loop shuffleDeck() too quickly for the seed numbers to be sufficiently different to produce
    // different numbers, hence by putting it here we just call one seed at the start of the program.
    srand(static_cast<unsigned int>(time(0)));
    
    array<Card, 52> deck;
    
    int deckIndex = 0;
    for (int x = 1; x < SUIT_MAX; ++x)   //Initialize the deck in order.
    {
        for(int y = 2; y < RANK_MAX; ++y, ++deckIndex)
        {
            deck[deckIndex].suit = static_cast<CardSuit>(x);
            deck[deckIndex].rank = static_cast<CardRank>(y);
        }
    };
    
    shuffleDeck(deck);

    if(playBlackjack(deck))
        cout << '\n'<< "Congratulations, you won!!";
    else
        cout << '\n' << "Sorry, you lost. Better luck next time!";
    
    cout << "\n\n";
    return 0;
}




