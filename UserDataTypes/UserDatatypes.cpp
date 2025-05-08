#include <iostream>
#include "Sandwich.h"

int main() {
    //typedef float salary; -- traditional C++ way
    using salary = float; // modern C++ way
    salary wage_butcher = 12.4f;
    salary wage_cleaner = 9;
    salary wage_chef = 15;

    Sandwich bbq;

    bbq.bread = "Honey Rye";
    //bbq.price = 22; -- Price is private now
    bbq.setPrice(29.98f);
    bbq.isDelicious = true;

    bbq.meat = Meat::Prawns;

    //PrintPrice(bbq); -- Procedural Programming = member functions separate from objects
    bbq.PrintPrice(); // OOP = data members + member functions
  }