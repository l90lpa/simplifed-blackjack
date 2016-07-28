//
//  cardData.h
//  simplified-blackjack
//
//  Created by Liam on 28/07/2016.
//  Copyright © 2016 Liam. All rights reserved.
//

#ifndef cardData_h
#define cardData_h

enum CardRank
{
    RANK_TWO = 2,
    RANK_THREE,
    RANK_FOUR,
    RANK_FIVE,
    RANK_SIX,
    RANK_SEVEN,
    RANK_EIGHT,
    RANK_NINE,
    RANK_TEN,
    RANK_JACK,
    RANK_QUEEN,
    RANK_KING,
    RANK_ACE,
    RANK_MAX
};

enum CardSuit
{
    SUIT_CLUB = 1,
    SUIT_DIAMOND,
    SUIT_HEART,
    SUIT_SPADE,
    SUIT_MAX
};

struct Card
{
    CardRank rank;
    CardSuit suit;
};

#endif /* cardData_h */
