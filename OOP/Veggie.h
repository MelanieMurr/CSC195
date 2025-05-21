#pragma once
#include "Food.h"

class Veggie : public Food {
public:
    void Consume() override;
protected:
    bool isBoiled;
};
