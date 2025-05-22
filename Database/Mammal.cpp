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
