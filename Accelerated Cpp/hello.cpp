#include <iostream>
#include <string>

using namespace std;

int main(void) {
    cout<< "Please input your name: ";

    string name;
    cin>> name;

    const string greetings = " Hello, " + name + "! ";

    const string space(greetings.size(), ' ');
    const string second = "*" + space + "*";
    const string first(second.size(), '*');

    cout<< endl;
    cout<< first<<endl;
    cout<< second<<endl;
    cout<< "*" + greetings + "*"<<endl;
    cout<< second<<endl;
    cout<< first<<endl;

    return 0;
}