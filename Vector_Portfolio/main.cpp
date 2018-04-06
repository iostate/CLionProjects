#include <iostream>
#include <vector>
#include <string>


/**
 * This program is compiled with the -ansi and -pedantic flag
 * in order to ensure backwards compatibility with the c89 standard.
 *
 */

int main() {

    //Create an array of integers that is to be copied to the vector
    static const int a[] = {1,2,3,4,5};

    //Copy the array of integers to the vector
    const int * sizeOfVector = a + sizeof(a) / sizeof(a[0]);
    std::vector<int> vec (a, sizeOfVector);

    //Create an iterator for the vector
    std::vector<int>::iterator it;

    //Iterate through the vector and print out its data
    std::cout << "Printing the elements in the vector beginning "
            "from the 0th index to the last: " << std::endl;
    for (it = vec.begin(); it != vec.end(); it++) {
        std::cout << *it;
    }
    std::cout << std::endl << std::endl;

    //Reset the iterator
    it = vec.begin();

    //Create a reverse iterator
    std::vector<int>::reverse_iterator rIt;

    //Iterate through the vector backwards and print out its data
    std::cout << "Printing the elements in the vector beginning from"
            " the last index to the 0th index: " << std::endl;
    for (rIt = vec.rbegin(); rIt != vec.rend(); rIt++) {
        std::cout << *rIt;
    }
    std::cout << std::endl << std::endl;

    //Push an element onto the vector
    vec.push_back(27);

    //Delete the last element
    vec.pop_back();

    //Wipe the elements in the vector
    std::vector<int>::iterator beginningOfVector = vec.begin();
    std::vector<int>::iterator endOfVector = vec.end();
    vec.erase(beginningOfVector, endOfVector);

    //Reset the iterator
    std::cout << "Printing the elements after erasing the contents: " << std::endl;
    for (it = vec.begin(); it != vec.end(); it++) {
        std::cout << *it;
    }

    std::cout << std::endl << std::endl;
    return 0;
}
