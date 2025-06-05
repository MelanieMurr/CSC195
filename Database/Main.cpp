#include <iostream>
#include "Animal.h"
#include "Database.h"
#include <string>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
using namespace std;

int main()
{
    Database* database = new Database;


    bool quit = false;
    while (!quit)
    {
        cout << "1) Add\n";
        cout << "2) Display All\n";
        cout << "3) Display Name\n";
        cout << "4) Display Type\n";
        cout << "5) Load\n";
        cout << "6) Save\n";
        cout << "7) Quit\n";
        int choice;
        std::cin >> choice;
        switch (choice)
        {
            case 1: {
                int t;
                cout << "Enter animal type to create (0 for BIRD, 1 for REPTILE, 2 for MAMMAL): ";
                cin >> t;

                if (t == 0) {
                    database->Add(Animal::eType::BIRD);
                } else if (t == 1) {
                    database->Add(Animal::eType::REPTILE);
                } else if (t == 2) {
                    database->Add(Animal::eType::MAMMAL);
                } else {
                    cout << t << " is not a valid option. Try again." << endl;
                }
                break;
            }
            case 2:
                database->DisplayAll();
                break;
            case 3: {
                string name;
                cout << "Enter name: ";
                cin >> name;
                database->Display(name);
                break;
            }
            case 4:
            {
                cout << "Enter type (0 for BIRD, 1 for REPTILE, 2 for MAMMAL): ";
                int t;
                cin >> t;
                database->Display(static_cast<Animal::eType>(t));
                break;
            }
            case 5: {
                cout << "Enter file name: ";
                string nameL;
                cin >> nameL;
                database->Load(nameL);
                break;
            }
            case 6: {
                cout << "Enter file name: ";
                string nameS;
                cin >> nameS;
                database->Save(nameS);
                break;
            }
            case 7:
                quit = true;
                break;
            default:
                cout << "Error! Enter valid option!";
                break;
        }
    }
    delete database;
    _CrtDumpMemoryLeaks();
}
