#include <iostream>
#include <sstream>
using namespace std;

int main() {

    string user_input;
    float temp;
    cout << "Enter input: ";
    getline(cin, user_input);
    stringstream(user_input) >> temp;
    cout << temp << endl;

    return 0;
}