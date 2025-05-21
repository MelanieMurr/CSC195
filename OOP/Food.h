#pragma once
#include <iostream>
using namespace std;

class Food
{
public:
       // Constructor
       //allocating memory for data members
       //initializing data members with a default value
       // if we don't create one manually. one is created for us
       Food() {
           m_calories = 0;

       }

        Food(int calories) {
           m_calories = calories;
       }

        ~Food() {
           delete m_p;
       }

        virtual void Consume() = 0; // pure virtual function, does not need a body
        int GetCalories() { return m_calories; }
        int SetCalories(int calories) { m_calories = calories; }


protected:
        int m_calories;
        int* m_p;
};