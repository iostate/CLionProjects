#include <sstream>
#include <iostream>

using namespace std;

int main() {

    int age;
    string age_string;
    cout << "Welcome, please enter your age: ";
    getline(cin, age_string);
    stringstream(age_string) >> age;

    if (age < 18) {
        cout << "You are not allowed to enter this domain." << endl;
    } else {
        cout << "Welcome to our site!" << endl;
    }

    return 0;
}