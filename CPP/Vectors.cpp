#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    vector<int> v;

    v = {1,2,3,4,5};


    cout << "Vector size: " << v.size() << endl;
    cout << "Vector capacity: " << v.capacity() << endl;

    cout << "Printing vector..." << endl;
    for (unsigned int ii=0;ii < v.size(); ii++) {
        cout << v[ii] << ", ";
    }

    cout << endl;

    vector<string> k(20);

    k = {"Obama", "Tookie", "Snoopy",  "Bloop", "Chicken Coop"};

    cout << "K vector size: " << k.size() << endl;
    cout << "Vector capacity: " << k.capacity() << endl;

    cout << "Printing vector..." << endl;
    for (unsigned int ii=0;ii < k.size(); ii++) {
        cout << k[ii] << ", ";
    }
    cout << endl;

    return 0;
}