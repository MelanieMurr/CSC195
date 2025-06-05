#pragma once
#include "Animal.h"

class Bird : public Animal {
public:
    eType GetType() override { return eType::BIRD; }

    void Read(ostream& ostream, istream& istream) override; // stores cout & cin
    void Write(ostream& ostream) override;

    void Read(ifstream &istream) override;
    void Write(ofstream &ostream) override;

protected:
    int m_numFeathers = 0;
};