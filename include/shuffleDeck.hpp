//
//  shuffleDeck.hpp
//  simplified-blackjack
//
//  Created by Liam on 28/07/2016.
//  Copyright © 2016 Liam. All rights reserved.
//

#ifndef shuffleDeck_hpp
#define shuffleDeck_hpp

#include <array>

struct Card;

void shuffleDeck(std::array<Card, 52> &deck);

#endif /* shuffleDeck_hpp */
