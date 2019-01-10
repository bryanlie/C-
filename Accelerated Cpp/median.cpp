#include <ios>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cout<< "Please enter your name: ";

    string name;
    cin>> name;

    cout<< "Hello, " + name + "!" <<endl;

    cout<< "Please enter your midtern and final grades: ";
    float midterm, fin;
    cin>> midterm >> fin;

    cout << "Enter your homework grads, "
            "followed by end-of-file: ";

    int count = 0;
    float sum = 0.0;

    vector<double> homework;
    float x;

    while(cin >> x) {
        homework.push_back(x);
    }

    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();

    if (size == 0) {
        cout << endl << "You must enter your grades. "
                     << "Please try again." << endl;
        
        return 1;
    }
    
    sort(homework.begin(), homework.end());

    vec_sz mid = size / 2;
    double median;
    median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];

    streamsize prec = cout.precision();

    cout<< "Your final grade is " << setprecision(3) 
        << 0.2 * midterm + 0.4 * fin + 0.4 * median
        << setprecision(prec) <<endl;

    return 0;
}