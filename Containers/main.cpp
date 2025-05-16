#include <iostream>
#include <array>
#include <list>
#include <vector>
#include <map>
using namespace std;

void makeArray() {
    array<string, 7> weekDays = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    cout << "Num of Weekdays: " << weekDays.size() << endl;
    cout << "Each week day: ";

    for (string day : weekDays) {
        cout << day << " ";
    }
    cout << endl;
}

void makeVector() {
    vector<int> num = {1, 2, 3, 4, 5};
    num.push_back(6);
    num.push_back(7);
    num.pop_back();

    for (int number : num) {
        cout << number << endl;
    }

}

void makeList() {
    list<string> fruit = {"Orange", "Mango", "Tomato"}; //tomato IS a fruit :P
    fruit.push_back("Strawberry");
    fruit.push_front("Banana");
    fruit.remove("Orange");

    for (string fru : fruit) {
        cout << fru << " ";
    }
    cout << endl;
}

void makeMap() {
    map<string, int> groceries;
    groceries["Toilet Paper"] = 1;
    groceries["Clorox wipes"] = 5;
    groceries["Tissues"] = 3;
    groceries["Frozen Pizza"] = 6;
    groceries["Tub of ice cream"] = 1;

    groceries["Clorox wipes"] = 4;

    for (const auto& item : groceries) {
        cout << item.first << ": " << item.second << endl;
    }
}

int main() {
    makeArray();
    makeList();
    makeVector();
    makeMap();
    return 0;
}