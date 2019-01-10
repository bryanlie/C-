#include "Core.hpp"

using namespace std;

std::istream& read_hw(std::istream& in, std::vector<double>& hw);

istream& Core::read_common(istream& in) {
    in >> n >> midterm >> exam;

    return in;
}

istream& Core::read(istream& in) {
    read_common(in);
    read_hw(in, homework);

    return in;
}

istream& Grad::read(istream& in) {
    read_common(in);
    in >> thesis;
    read_hw(in, homework);

    return in;
}

bool compare(const Core& c1, const Core& c2) {
    return c1.name() < c2.name();
}

bool compare_Core_ptrs(const Core* cp1, const Core* cp2) {
    return compare(*cp1, *cp2);
}