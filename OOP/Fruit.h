#pragma once
#include "Food.h"

class Fruit : public Food
{
public:
    Fruit (int calories, int numSeeds) : Food(calories) {
        num_of_seeds = numSeeds;
    }
    void Consume() override;
protected:
    int num_of_seeds;
};


