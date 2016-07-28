//
//  randomNumberGenerator.cpp
//  simplified-blackjack
//
//  Created by Liam on 28/07/2016.
//  Copyright © 2016 Liam. All rights reserved.
//

#include <cstdlib> // for srand() and rand()
#include <ctime>  // for time()
#include "randomNumberGenerator.hpp"


int randomNumberGenerator()
{
    int rangeMinimum = 0;   // The minimum and maximum of the range of random numbers to be used needs to be set prior to program launch.
    int rangeMaximum = 51;
    
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
    
    rand(); // There is a possible flaw that required rand() to be called at least once before being used in the return statement overwise it keeps giving the
    // same number.
    
    return static_cast<int>(rand() * fraction * (rangeMaximum - rangeMinimum + 1) + rangeMinimum);  // evenly distribute the random number across our range
}