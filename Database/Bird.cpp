#include "Bird.h"

void Bird::Read(ostream& ostream, istream& istream) {
    Animal::Read(ostream, istream);

    ostream << "Enter number of feathers: ";
    istream >>  m_numFeathers;
}

void Bird::Write(ostream &ostream) {
    Animal::Write(ostream);

    ostream << "Number of feathers: " << m_numFeathers << endl;
}

void Bird::Read(ifstream &istream) {
    Animal::Read(istream);
    istream >> m_numFeathers;
}

void Bird::Write(ofstream &ostream) {
    Animal::Write(ostream);
    ostream << m_numFeathers;
}


