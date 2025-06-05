#include "Mammal.h"

void Mammal::Read(ostream &ostream, istream &istream) {
    Animal::Read(ostream, istream);

    ostream << "Does this animal have a pouch?";
    istream >> m_hasAPouch;
}

void Mammal::Write(ostream &ostream) {
    Animal::Write(ostream);

    ostream << "Animal has a pouch: " << m_hasAPouch << endl;
}

void Mammal::Read(ifstream &istream) {
    Animal::Read(istream);
    istream >> m_hasAPouch;
}

void Mammal::Write(ofstream &ostream) {
    Animal::Write(ostream);
    ostream << m_hasAPouch;
}


