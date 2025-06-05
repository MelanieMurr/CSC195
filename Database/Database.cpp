#include "Database.h"
#include <iostream>
#include <fstream>
#include "Bird.h"
#include "Reptile.h"
#include "Mammal.h"


Database::~Database() = default;

void Database::Add(Animal::eType type) {
    auto animal = Create(type);
    if (animal) {
        cin >> *animal;
        m_animals.push_back(move(animal));
    }
}

unique_ptr<Animal> Database::Create(Animal::eType type) {
    unique_ptr<Animal> animal = nullptr;
    switch (type) {
        case Animal::eType::BIRD:
            animal = make_unique<Bird>(); // Using make_unique because cpp 14 uses this, not "new"
        break;
        case Animal::eType::REPTILE:
            animal = make_unique<Reptile>();
        break;
        case Animal::eType::MAMMAL:
            animal = make_unique<Mammal>();
        break;
        default:
            cout << "Error! Enter valid animal type!";
            break;
    }
    return animal;
}

void Database::DisplayAll() {
    for (const auto& ani : m_animals) {
        ani->Write(std::cout);
    }
}

void Database::Display(const string &name) {
    for (const auto& ani : m_animals)
    {
        if (ani->GetName() == name)
        {
            ani->Write(std::cout);
        }
    }
}

void Database::Display(Animal::eType type) {
    for (const auto& ani : m_animals)
    {
        if (ani->GetType() == type)
        {
            ani->Write(std::cout);
        }
    }
}

void Database::Load(const string &filename) {
    std::ifstream input(filename);
    if (input.is_open())
    {
        for (auto& obj : m_animals) {
            obj.release();
        }
        m_animals.clear();
        while (!input.eof()) {
            int type;
            input >> type;
            unique_ptr<Animal> animal = Create(static_cast<Animal::eType>(type));
            animal->Read(input);
            m_animals.push_back(move(animal));
        }
    }

}

void Database::Save(const string &filename) {
    ofstream output(filename);
    if (output.is_open())
    {
        for (auto& obj : m_animals)
        {
            output << static_cast<int>(obj->GetType()) << std::endl;
            obj->Write(output);
        }
    }
}


