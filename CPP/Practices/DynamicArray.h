/**
 * Allows for the creation of a DynamicArray object. The behavior allows for the user to specify an array of a specified size.
 */

#ifndef CPP_DYNAMICARRAY_H
#define CPP_DYNAMICARRAY_H

#include <string>
#include <iostream>
#include <cstdlib>


using namespace std;

class DynamicArray {
public:
    int *array;
    int length;

    DynamicArray(int size);

    //used to construct a DynamicArray object
    void construct();

    //ask the user for the size of the array
    int length_of_array();

    //retrieve the length of the array
    int get_length();

    //used to populate the array with random numbers
    void populate();

    //used to print the contents of the array
    void print_contents();

    //deconstructor
    ~DynamicArray() {

        delete array;
        array = nullptr;

    }

};

DynamicArray::DynamicArray(int size) {
    length = size;
    array = new int[length];
}

/**
 * Populate the array with a random number between 1 and 100.
 */
void DynamicArray::populate() {
    int i = length;
    while (i >= 0) {
        array[i] = rand() % 100 + 1;
        i--;
    }
}

/**
 * Print the contents of an array.
 */
void DynamicArray::print_contents() {

    cout << "Printing the array of length ";
    cout << length;
    cout << "...." << endl;
    for (int i = 0; i < length; i++) {
        cout << "Array[";
        cout << i;
        cout << "] = ";
        cout << array[i] << endl;
    }
}

/**
 * Retrieve the length of the DynamicArrat
 * @return int Length of the Dynamic Array
 */
int DynamicArray::get_length() {

    return length;
}


#endif //CPP_DYNAMICARRAY_H
