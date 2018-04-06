#include <iostream>
#include <string>
using namespace std;

class activity1 {

public:
    int doubleNum(int);
} act1;

int activity1::doubleNum(int n) { return n * 2; };

int main() {

    activity1 act;
    int k = 2;
    string ok;

    cout << act.doubleNum(k);
    cout << k;

    return 0;
}