#include <iostream>
#include <vector>

#include "grade.h"
#include "Student_info.hpp"

using std::istream;
using std::vector;

double Student_info::grade() const {
    return ::grade(midterm, final_grade, homework);
}

Student_info::Student_info(): midterm(0), final_grade(0) { }

Student_info::Student_info(istream& is) { read(is); }

istream& Student_info::read(istream& in) {
    in >> n >> midterm >> final_grade;
    read_hw(in, homework);

    return in;
}

istream& read_hw(istream& in, vector<double>& hw) {
    if (in) {
        hw.clear();

        double x;
        while (in >> x)
            hw.push_back(x);

        in.clear()
    }

    return in;
}

bool compare(const Student_info& x, const Student_info& y) {
    return x.name() < y.name();
}
