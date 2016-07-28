//
//  printCard.cpp
//  simplified-blackjack
//
//  Created by Liam on 28/07/2016.
//  Copyright © 2016 Liam. All rights reserved.
//

#include <iostream>
#include "printCard.hpp"

void printCard(const Card &card)
{
    if(card.rank < 11)
        std::cout << card.rank;
    else
    {
        switch (card.rank)
        {
            case RANK_JACK:
                std::cout << "J";
                break;
            case RANK_QUEEN:
                std::cout << "Q";
                break;
            case RANK_KING:
                std::cout << "K";
                break;
            case RANK_ACE:
                std::cout << "A";
                break;
            default:
                break;
        }
    };
    switch (card.suit)
    {
        case SUIT_CLUB:
            std::cout << "C";
            break;
        case SUIT_DIAMOND:
            std::cout << "D";
            break;
        case SUIT_HEART:
            std::cout << "H";
            break;
        case SUIT_SPADE:
            std::cout << "S";
            break;
        default:
            break;
    }
}