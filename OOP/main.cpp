#include <iostream>
#include "food.h"
#include "Fruit.h"
#include "Veggie.h"
#include <vector>
using namespace std;

int main() {
    {
        // Food food;
        //
        // food.Consume();
        //
        // food.SetCalories(25);
        // cout << "Food Calories" << food.GetCalories() << endl;
        //
        // Food* pFood = &food;
        //
        // //pFood->Consume();
        // (*pFood).Consume();
}
    cout << "fruit instance: " << endl;
    Fruit apple(10, 25);

    apple.Consume();
    cout << "Fruit calories: " << apple.GetCalories() << endl;

    cout << "Veggie instance: " << endl;
    Veggie broccoli;
    broccoli.Consume();

    vector<Food*> food_list = { &apple, &broccoli , new Veggie };
    
}