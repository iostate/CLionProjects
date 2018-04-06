

#ifndef CPP_PRACTICE3_H
#define CPP_PRACTICE3_H

#include <vector>
#include <iostream>


class NumberList {

public:
    int maxAmountOfNumbers;
    std::vector<int> a;
    void allocate_memory(int param);
    void receive_numbers();
    void print_list();





};

void NumberList::allocate_memory(int param) {
    a.reserve(param);
    maxAmountOfNumbers = param;

}

void NumberList::receive_numbers() {
    int count = maxAmountOfNumbers;

    while (count > 0 ) {
        std::cout << "Enter number: " << std::endl;
        int user_input;
        std::cin >> user_input;
        a.push_back(user_input);
        count--;
    }
}

void NumberList::print_list() {

    std::cout << "number of integers stored in the list is " << maxAmountOfNumbers;
    for (unsigned i = 0; i < a.size(); i++) {
        std::cout << a.at(i) << std::endl;
    }
}


#endif //CPP_PRACTICE3_H
