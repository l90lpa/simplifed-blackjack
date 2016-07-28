//
//  printDeck.cpp
//  simplified-blackjack
//
//  Created by Liam on 28/07/2016.
//  Copyright © 2016 Liam. All rights reserved.
//

#include <iostream>
#include "printDeck.hpp"
#include "printCard.hpp"

void printDeck(const std::array<Card, 52> &deck)
{
    for(auto &card : deck)
    {
        printCard(card);
        std::cout << '\n';
    }
}
