//
// Created by Quan Truong on 10/29/17.
//

#include "NameList.h"

/**
 * Default constructor
 */
NamesList::NamesList() {
}
/*
NamesList::NamesList() {

    std::vector<std::string> empty;

    setList(empty);

}
*/







/*NamesList::NamesList(std::string filename) {
  list = createList(filename);
}*/

/**
 * Read the list of names from a file
 * @param filename Name of the file to read
 * @return vector<string> of all the names in the file
 */
std::vector<std::string> createList(std::string filename) {

    std::vector <std::string> listOfFirstName;

    std::ifstream file(filename);

    std::string current;

    while (std::getline(file, current)) {
        listOfFirstName.push_back(current);


    }
    return listOfFirstName;
}

/**
 * Print a list using an iterator
 * @param aList vector<string> A vector filled with first names
 */
void NamesList::printList(std::vector <std::string> aList) {
    std::vector<std::string>::iterator it = aList.begin();

    for (it = aList.begin(); it != aList.end(); it++) {
        std::cout << *it << std::endl;
    }

}

void NamesList::setList(std::vector<std::string> param) {
    list = param;
}




