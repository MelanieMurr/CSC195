#pragma once
#include "Animal.h"

class Reptile : public Animal {
public:
    eType GetType() override { return eType::REPTILE; }

    void Read(ostream& ostream, istream& istream) override;
    void Write(ostream& ostream) override;

    void Read(ifstream &istream) override;
    void Write(ofstream &ostream) override;

protected:
    string m_scalesColor = " ";
};
