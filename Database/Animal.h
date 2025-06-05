#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Animal
{
public:
    enum eType
    {
        BIRD = 0,
        REPTILE = 1,
        MAMMAL = 2
    };

    string GetName() { return m_name; }
    virtual eType GetType() = 0;

    virtual void Read(ostream& ostream, istream& istream); // stores cout & cin
    virtual void Write(ostream& ostream);

    virtual void Read(ifstream& istream);
    virtual void Write(ofstream& ostream);

    friend istream& operator >> (istream& istream, Animal& animal);
    friend ostream& operator << (ostream& ostream, Animal& animal);

    friend ifstream& operator >> (ifstream& ifs, Animal& ani);
    friend ofstream& operator << (ofstream& ofs, Animal& ani);

protected:
    string m_name;
    int m_lifespan = 0;
};








