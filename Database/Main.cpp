#include <iostream>
#include "Animal.h"
#include "Database.h"
using namespace std;

int main()
{
    Database database;                             


    bool quit = false;
    while (!quit)
    {
        std::cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
        int choice;
        std::cin >> choice;
        switch (choice)
        {
            case 1: {
                int t;
                cout << "Enter animal type to create (0 for BIRD, 1 for REPTILE, 2 for MAMMAL): ";
                cin >> t;

                if (t == 0) {
                    database.Create(Animal::eType::BIRD);
                } else if (t == 1) {
                    database.Create(Animal::eType::REPTILE);
                } else if (t == 2) {
                    database.Create(Animal::eType::MAMMAL);
                }
                break;
            }
            case 2:
                database.DisplayAll();
                break;
            case 3: {
                string name;
                cout << "Enter name: ";
                cin >> name;
                database.Display(name);
                break;
            }
            case 4:
            {
                cout << "Enter type (0 for BIRD, 1 for REPTILE, 2 for MAMMAL): ";
                int t;
                cin >> t;
                database.Display(static_cast<Animal::eType>(t));
                break;
            }
            case 5:
                quit = true;
                break;
            default:
                cout << "Error! Enter valid option!";
                break;
        }
    }
}
