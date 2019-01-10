#include <iostream>
#include <stdexcept>

#include "Core.hpp"
#include "Student.hpp"

using namespace std;

istream& Student::read(istream& is) {
    delete cp;

    char ch;
    is >> ch;

    if (ch == 'U') cp = new Core(is);
    else if (ch == 'G') cp = new Grad(is);
    else throw runtime_error("read invalid student type");

    return is;
}

Student::Student(const Student& s): cp(0) {
    if (s.cp) cp = s.cp->clone();
}

Student& Student::operator=(const Student& s) {
    if (&s != this) {
        delete cp;
        if (s.cp) cp = s.cp->clone();
        else cp = 0;
    }

    return *this;
}