//
//  shuffleDeck.cpp
//  simplified-blackjack
//
//  Created by Liam on 28/07/2016.
//  Copyright © 2016 Liam. All rights reserved.
//

#include "shuffleDeck.hpp"
#include "cardData.h"
#include "randomNumberGenerator.hpp"

void swapCards(Card &cardOne, Card &cardTwo)
{
    Card cardThree = cardOne;
    cardOne = cardTwo;
    cardTwo = cardThree;
}

void shuffleDeck(std::array<Card, 52> &deck)
{
    for(int currentCard = 0; currentCard < deck.size(); ++currentCard)
    {
        swapCards(deck[currentCard], deck[randomNumberGenerator()]);
    };
}