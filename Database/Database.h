#pragma once
#include <memory>
#include "Animal.h"
#include <vector>
using namespace std;

class Database
{
public:
    ~Database();
    void Add(Animal::eType type);
    void DisplayAll();
    void Display(const string& name);
    void Display(Animal::eType type);

    void Load(const string& filename);
    void Save(const string& filename);
private:
    vector<unique_ptr<Animal>> m_animals;
    unique_ptr<Animal> Create(Animal::eType type);
};



