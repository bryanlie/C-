#include <ios>
#include <iostream>
#include <iomanip>
#include <string>

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
    float x;

    while(cin >> x) {
        ++count;
        sum += x;
    }

    streamsize prec = cout.precision();

    cout<< "Your final grade is " << setprecision(3) 
        << 0.2 * midterm + 0.4 * fin + 0.4 * sum / count
        << setprecision(prec) <<endl;

    return 0;
}