#include <iostream>
#include <sstream>

#define a 14
using namespace std;

int main() {
  /*  int age;
    string full_name;
    cout << "WHat is your full name?"  << endl;
         getline(cin, full_name);
    cout << "What is your age?" << endl;
    cin >> age;
    cout << "Your age is " << age << endl;*/


   /* string a_number ("1222");
    int a_num;
    stringstream(a_number) >> a_num;
    cout << a_num << endl;*/

   string mystr;
    float price=0;
    int quantity=0;

    cout << "Enter the price: " << endl;
    getline(cin, mystr);
    stringstream(mystr) >> price;
    cout << " Enter the quantity: " << endl;
    getline(cin, mystr);
    stringstream(mystr) >> quantity;
    cout << "The price is " << price << " and the quantity is " <<
         quantity << endl;













/*
    cout << "Enter price: ";
    getline (cin,mystr);
    stringstream(mystr) >> price;
    cout << "Enter quantity: ";
    getline (cin,mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price*quantity << endl;*/
    return 0;
}