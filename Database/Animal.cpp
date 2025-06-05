#include "Animal.h"

void Animal::Read(ostream& ostream, istream& istream)
{
    ostream << "Enter name: ";
    istream >> m_name;

    ostream << "Enter lifespan: ";
    istream >> m_lifespan;
}

void Animal::Write(ostream& ostream)
{
    ostream << "Name: " << m_name << endl;
    ostream << "Lifespan: "<< m_lifespan << endl;
}

void Animal::Read(ifstream& istream) {
    istream >> m_name;
    istream >> m_lifespan;
}

void Animal::Write(ofstream& ostream) {
    ostream << m_name << endl;
    ostream << m_lifespan << endl;
}

istream & operator>>(istream &istream, Animal &animal) {
    animal.Read(cout, istream);
    return istream;
}

ostream & operator<<(ostream &ostream, Animal &animal) {
    animal.Write(ostream);
    return ostream;
}

ifstream & operator>>(ifstream &ifs, Animal &ani) {
    ani.Read(ifs);
    return ifs;
}

ofstream & operator<<(ofstream &ofs, Animal &ani) {
    ani.Write(ofs);
    return ofs;
}
