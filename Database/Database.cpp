#include "Database.h"
#include "Bird.h"
#include "Reptile.h"
#include "Mammal.h"


Database::~Database() {
    for (Animal* obj : m_animals)
    {
        delete obj;
    }
}

void Database::Create(Animal::eType type) {
    Animal* animal = nullptr;

    switch (type) {
        case Animal::eType::BIRD:
            animal = new Bird;
            break;
        case Animal::eType::REPTILE:
            animal = new Reptile;
            break;
        case Animal::eType::MAMMAL:
            animal = new Mammal;
            break;
        default:
            cout << "Error! Enter valid animal type!";
            break;
    }
    if (animal != nullptr) {
        animal->Read(cout, cin);
        m_animals.push_back(animal);
    }
}

void Database::DisplayAll() {
    for (Animal* ani : m_animals) {
        ani->Write(std::cout);
    }
}

void Database::Display(const string &name) {
    for (Animal* ani : m_animals)
    {
        if (ani->GetName() == name)
        {
            ani->Write(std::cout);
        }
    }
}

void Database::Display(Animal::eType type) {
    for (Animal* ani : m_animals)
    {
        if (ani->GetType() == type)
        {
            ani->Write(std::cout);
        }
    }
}


