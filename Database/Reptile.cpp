#include "Reptile.h"

void Reptile::Read(ostream &ostream, istream &istream) {
    Animal::Read(ostream, istream);

    ostream << "Enter color of scales: ";
    istream >> m_scalesColor;
}

void Reptile::Write(ostream &ostream) {
    Animal::Write(ostream);

    ostream << "Color of Scales: " << m_scalesColor << endl;
}

void Reptile::Read(ifstream &istream) {
    Animal::Read(istream);
    istream >> m_scalesColor;
}

void Reptile::Write(ofstream &ostream) {
    Animal::Write(ostream);
    ostream << m_scalesColor;
}


