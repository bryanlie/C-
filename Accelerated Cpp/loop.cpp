#include <iostream>
#include <string>

using namespace std;

int main(void) {
    cout<< "Please enter your name: ";
    
    string name;
    cin>> name;

    const string greetings = "Hello, " + name + "!";

    const int pad = 1;
    const int rows = pad * 2 + 3;
    const string::size_type cols = greetings.size() + pad * 2 + 2;

    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;

        while(c != cols){
            if (r == pad + 1 && c == pad + 1) {
                cout<< greetings;
                c +=greetings.size();
            } else {
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) cout<< "*";
                else cout<< " ";
                c++;
            }
        }

        cout<< endl;
    }    
    
    return 0;
}