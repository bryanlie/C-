#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#include "Core.hpp"

class Student {
    public:
        Student(): cp(0) { }
        Student(std::istream& is): cp(0) { read(is); }
        Student(const Student&);
        Student& operator=(const Student&);
        ~Student() { delete cp; }

        std::istream& read(std::istream&);

        std::string name() const {
            if (cp) return cp->name();
            else throw std::runtime_error("uninitialized Student");
        }

        double grade() const {
            if (cp) return cp->grade();
            else throw std::runtime_error("uninitialized Student");
        }

        static bool compare(const Student& s1, const Student& s2) {
            return s1.name() < s2.name();
        }
    private:
        Core* cp;
};