#pragma once
#include <iostream>
using namespace std;

class Animal
{
public:
    enum class eType
    {
        BIRD = 0,
        REPTILE = 1,
        MAMMAL = 2
    };

    string GetName() { return m_name; }
    virtual eType GetType() = 0;

    virtual void Read(ostream& ostream, istream& istream); // stores cout & cin
    virtual void Write(ostream& ostream);

protected:
    string m_name;
    int m_lifespan = 0;
    


};