#include <algorithm>
#include <iterator>
#include <vector>

#include "Student_info.h"
#include "grade.h"

using namespace std;

vector<Student_info> extract_fails(vector<Student_info>& students) {
    vector<Student_info> fail;
    remove_copy_if(students.begin(), students.end(), back_inserter(fail), pgrade);
    students.erase(remove_if(students.begin(), students.end(), fgrade), students.end());

    return fail;
}