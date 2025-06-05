#pragma once
#include "Animal.h"

class Mammal : public Animal {
public:
    eType GetType() override { return eType::MAMMAL; }

    void Read(ostream& ostream, istream& istream) override;
    void Write(ostream& ostream) override;

    void Read(ifstream &istream) override;
    void Write(ofstream &ostream) override;

protected:
    bool m_hasAPouch;
};